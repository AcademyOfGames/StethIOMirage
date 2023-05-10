using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataVisualizer : MonoBehaviour
{
    public enum VisualizationType { Constant, Heartbeat }
    public enum DataType { HeartRate, HeartRateVariability, BreathVolume }

    [SerializeField] private GameObject targetObject; // The game object to be affected
    [SerializeField] public float dataValue = 0f; // The current lung volume or beats per minute
    [SerializeField] private float scalingFactor = 1f; // The ratio to scale/move the object
    [SerializeField] private float transitionSpeed = 5f; // Speed of the smooth transition

    [Header("Visualization Type")]
    [SerializeField] private VisualizationType visualizationType = VisualizationType.Constant;
    [SerializeField] private DataType selectedDataType = DataType.HeartRate;

    [Header("Constant Visualization Modes")]
    [SerializeField] private bool scaleMode = false;
    [SerializeField] private bool moveMode = false;
    [SerializeField] private bool colorMode = false;

    [Header("Scale Mode Axes")]
    [SerializeField] private bool scaleX = false;
    [SerializeField] private bool scaleY = true;
    [SerializeField] private bool scaleZ = false;

    private float maxBreathVolume = 1000000;
    private float minBreathVolume = -1000;

    // Default scale and position of the target object
    private Vector3 initialScale;
    private Vector3 initialPosition;

    // Default color of the target object
    private Color initialColor;
    private Renderer targetRenderer;

    private float currentTime;
    bool normalizeBreathValue;
    public float softFollowSpeed;
    private void Start()
    {
        if (targetObject == null)
        {
            Debug.LogError("LungVisualizer: No target object assigned!");
            enabled = false;
            return;
        }

        initialScale = targetObject.transform.localScale;
        initialPosition = targetObject.transform.localPosition;

        targetRenderer = targetObject.GetComponent<Renderer>();
        if (targetRenderer != null)
        {
            initialColor = targetRenderer.material.color;
        }
    }

    private void Update()
    {
        if (visualizationType == VisualizationType.Constant)
        {
            if (scaleMode)
            {
                UpdateScale();
            }
            if (moveMode)
            {
                UpdatePosition();
            }
            if (colorMode)
            {
                UpdateColor();
            }
        }
        else if (visualizationType == VisualizationType.Heartbeat)
        {
            UpdateHeartbeat();
        }
    }

    private void UpdateHeartbeat()
    {
        currentTime += Time.deltaTime;
        float beatsPerSecond = dataValue / 60f;
        float normalizedTime = currentTime * beatsPerSecond;

        // Calculate sinusoidal scale value between minScale and maxScale
        float scaleValue = (Mathf.Sin(normalizedTime * 2 * Mathf.PI) + 1) / 2;
        float targetScaleValue = Mathf.Lerp(0.1f, 1f, scaleValue);
        Vector3 targetScale = new Vector3(
            scaleX ? targetScaleValue : initialScale.x,
            scaleY ? targetScaleValue : initialScale.y,
            scaleZ ? targetScaleValue : initialScale.z
        );

        targetObject.transform.localScale = Vector3.Lerp(targetObject.transform.localScale, targetScale, Time.deltaTime * transitionSpeed);

        if (moveMode)
        {
            Vector3 targetPosition = new Vector3(initialPosition.x, initialPosition.y + targetScaleValue, initialPosition.z);
            targetObject.transform.localPosition = Vector3.Lerp(targetObject.transform.localPosition, targetPosition, Time.deltaTime * transitionSpeed);
        }
    }

    private void UpdateScale()
    {
        float adjustedVolume = dataValue * scalingFactor;
        Vector3 targetScale = new Vector3(
            scaleX ? initialScale.x * adjustedVolume : initialScale.x,
            scaleY ? initialScale.y * adjustedVolume : initialScale.y,
            scaleZ ? initialScale.z * adjustedVolume : initialScale.z
        );
        targetObject.transform.localScale = Vector3.Lerp(targetObject.transform.localScale, targetScale, Time.deltaTime * transitionSpeed);
    }

    private void UpdatePosition()
    {
        float adjustedVolume = dataValue * scalingFactor;
        Vector3 targetPosition = new Vector3(initialPosition.x, initialPosition.y + adjustedVolume, initialPosition.z);
        targetObject.transform.localPosition = Vector3.Lerp(targetObject.transform.localPosition, targetPosition, Time.deltaTime * transitionSpeed);
    }

    private void UpdateColor()
    {
        if (targetRenderer != null)
        {
            float adjustedVolume = dataValue * scalingFactor;
            Color targetColor = Color.Lerp(initialColor, Color.red, adjustedVolume);
            targetRenderer.material.color = targetColor;
        }
    }

    public void SetDataValue(float value)
    {
        if (visualizationType == VisualizationType.Heartbeat)
        {
            dataValue = value;
        }
        else
        {
            if (selectedDataType == DataType.HeartRate)
            {
                dataValue = value / 220f;
            } else if (selectedDataType == DataType.HeartRateVariability)
            {
                dataValue = value / 60f;
            } else if (selectedDataType == DataType.BreathVolume)
            {
                if (!normalizeBreathValue)
                {
                    normalizeBreathValue = true;
                    
                    Invoke("StartAdjustingValue", 1);
                }
                if (value > maxBreathVolume)
                {
                    maxBreathVolume = value;
                }else if (value < minBreathVolume)
                {
                    minBreathVolume = value;
                }
                float breathRange = (value - minBreathVolume) / (maxBreathVolume - minBreathVolume);

                dataValue = Mathf.Lerp(0.6f,1.3f, breathRange);

            }
    }
        
    }
    void StartAdjustingValue()
    {
        print("starting to adjust value");
        maxBreathVolume = 25500;
        minBreathVolume = 27500;
    }
    public void SetScalingFactor(float value)
    {
        scalingFactor = Mathf.Max(0f, value);
    }

    public void SetTransitionSpeed(float value)
    {
        transitionSpeed = Mathf.Max(0f, value);
    }

    public void SetTargetObject(GameObject obj)
    {
        targetObject = obj;
        initialScale = targetObject.transform.localScale;
        initialPosition = targetObject.transform.localPosition;

        targetRenderer = targetObject.GetComponent<Renderer>();
        if (targetRenderer != null)
        {
            initialColor = targetRenderer.material.color;
        }
    }

}
