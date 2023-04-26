using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MQTTHeartrateVisualizer : MonoBehaviour
{
    [SerializeField] private GameObject targetObject; // The game object to be affected
    [SerializeField] private float beatsPerMinute = 60f; // The user's heart rate in beats per minute
    [SerializeField] private float minScale = 0.9f; // The minimum scale of the object
    [SerializeField] private float maxScale = 1.1f; // The maximum scale of the object
    [SerializeField] private float transitionSpeed = 5f; // Speed of the smooth transition

    private float currentTime;

    private void Start()
    {
        if (targetObject == null)
        {
            Debug.LogError("HeartbeatVisualizer: No target object assigned!");
            enabled = false;
            return;
        }
    }

    private void Update()
    {
        currentTime += Time.deltaTime;
        float beatsPerSecond = beatsPerMinute / 60f;
        float normalizedTime = currentTime * beatsPerSecond;

        // Calculate sinusoidal scale value between minScale and maxScale
        float scaleValue = (Mathf.Sin(normalizedTime * 2 * Mathf.PI) + 1) / 2;
        float targetScaleValue = Mathf.Lerp(minScale, maxScale, scaleValue);
        Vector3 targetScale = new Vector3(targetScaleValue, targetScaleValue, targetScaleValue);

        targetObject.transform.localScale = Vector3.Lerp(targetObject.transform.localScale, targetScale, Time.deltaTime * transitionSpeed);
    }

    public void SetBeatsPerMinute(float value)
    {
        beatsPerMinute = Mathf.Max(0f, value);
    }

    public void SetTargetObject(GameObject obj)
    {
        targetObject = obj;
    }

    public void SetMinScale(float value)
    {
        minScale = Mathf.Max(0f, value);
    }

    public void SetMaxScale(float value)
    {
        maxScale = Mathf.Max(minScale, value);
    }

    public void SetTransitionSpeed(float value)
    {
        transitionSpeed = Mathf.Max(0f, value);
    }
}
