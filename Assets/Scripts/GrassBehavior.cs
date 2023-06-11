using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GrassBehavior : MonoBehaviour

{    public TerrainData terrain; 
    public DataVisualizer data;
    public MQTTDataVisualizer _mQTTDataVisualizer;
    public Material grassMat;

    //public float grassMovementStrength = 0.0f;

    //private float adjustedBreath=0.0f;

    //public float wavingGrassValue = 0.0f;

    private float velocity = 0.0f;

    //private float prevBreath = 0.0f;
    //// Start is called before the first frame update
    //void Start()
    //{
    //    terrain.wavingGrassSpeed = 1;
    //    terrain.wavingGrassStrength = 1;
    //    terrain.wavingGrassAmount= 1;

    //}

    //// Update is called once per frame
    //void Update()
    //{
    //    adjustedBreath = NormalizeValue(_mQTTDataVisualizer.DATA_BreathVolume, _mQTTDataVisualizer.minBreathVolume, _mQTTDataVisualizer.maxBreathVolume);

    //    if (adjustedBreath != float.NaN)
    //    {
    //        wavingGrassValue = Mathf.SmoothDamp(terrain.wavingGrassStrength, adjustedBreath, ref velocity, 0.1f);
    //        terrain.wavingGrassStrength = velocity * grassMovementStrength;
    //        //wavingGrassValue = velocity * grassMovementStrength;
    //        print("Velocity " + velocity);

    //    }

    //    //if (adjustedBreath - prevBreath > .1f)
    //    //{
    //    //    terrain.wavingGrassStrength = Mathf.SmoothDamp(terrain.wavingGrassStrength, 1, ref velocity, 0.1f);
    //    //}else if (adjustedBreath - prevBreath < -.1f)
    //    //{
    //    //    terrain.wavingGrassStrength = Mathf.SmoothDamp(terrain.wavingGrassStrength, -1, ref velocity, 0.1f);
    //    //}
    //    //else
    //    //{
    //    //    terrain.wavingGrassStrength = Mathf.SmoothDamp(terrain.wavingGrassStrength, 0, ref velocity, 0.1f);
    //    //}

    //    //prevBreath = adjustedBreath;


    //}
    public float breathChangeThreshold = 0.0001f; // Set the threshold here
    private Vector3 maxWindSettings = new Vector3(0.5f, 1, 1f);

    private Vector3 currentWindSettings;
    private float lerpTime = 1.0f;
    private float currentLerpTime;

    private float currentNormalizedValue = 0f;
    private float previousNormalizedValue;

    //private void Update()
    //{
    //    // Here you'll need to set 'currentNormalizedValue' based on your actual breath tracking
    //    currentNormalizedValue = NormalizeValue(_mQTTDataVisualizer.DATA_BreathVolume, _mQTTDataVisualizer.minBreathVolume, _mQTTDataVisualizer.maxBreathVolume);
    //    Vector3 targetWindSettings;
    //    print("Current Normalized Value" + currentNormalizedValue);
    //    float breathChange = Mathf.Abs(currentNormalizedValue - previousNormalizedValue);

    //    if (breathChange > breathChangeThreshold)
    //    {
    //        targetWindSettings = maxWindSettings;
    //        print("BreathChange: " + breathChange);
    //    }
    //    else
    //    {
    //        targetWindSettings = Vector3.zero;
    //    }

    //    if (targetWindSettings != currentWindSettings)
    //    {
    //        currentWindSettings = targetWindSettings;
    //        currentLerpTime = 0f;
    //    }

    //    float t = currentLerpTime / lerpTime;
    //    //t = Mathf.Sin(t * Mathf.PI * 0.5f); // Optional, for easing in

    //    //terrain.wavingGrassSpeed = Mathf.Lerp(terrain.wavingGrassSpeed, currentWindSettings.x, t);
    //    //terrain.wavingGrassAmount = Mathf.Lerp(terrain.wavingGrassAmount, currentWindSettings.y, t);
    //    terrain.wavingGrassAmount = Mathf.Lerp(terrain.wavingGrassAmount, currentWindSettings.z/2, t);
    //    //terrain.wavingGrassAmount = Mathf.SmoothDamp(terrain.wavingGrassStrength, -1, ref velocity, 0.1f);
    //    print("Waving Grass Amount: " + terrain.wavingGrassAmount + " Current lerp time: "+currentLerpTime);
    //    previousNormalizedValue = currentNormalizedValue;
    //    currentLerpTime += Time.deltaTime;
    //}
    private BreathTracker _breathTracker;
    private float targetValue=0f;
    private bool updateGrass = false;
    private void Start()
    {
        _breathTracker = new BreathTracker(20);
    }

    private void Update()
    {
        // Here you'll need to set 'currentNormalizedValue' based on your actual breath tracking
        currentNormalizedValue = NormalizeValue(_breathTracker.Update(_mQTTDataVisualizer.DATA_BreathVolume), _mQTTDataVisualizer.minBreathVolume, _mQTTDataVisualizer.maxBreathVolume);
        //print("Current Normalized Value" + currentNormalizedValue);
        targetValue = Mathf.SmoothDamp(targetValue, currentNormalizedValue,ref velocity, 0.2f);

        if (updateGrass)
        {
            grassMat.SetFloat("_MBDefaultBending", targetValue * 60);
        }
        StartCoroutine(WaitForGrass());
        float t = currentLerpTime / lerpTime;

        
        //terrain.wavingGrassAmount = Mathf.SmoothDamp(terrain.wavingGrassStrength, -1, ref velocity, 0.1f);
        //print("Waving Grass Amount: " + grassMat.GetFloat("_MBDefaultBending") + " Current lerp time: " + currentLerpTime);

        currentLerpTime += Time.deltaTime;
    }

    private IEnumerator WaitForGrass()
    {
        yield return new WaitForSeconds(5f);
        updateGrass= true;
    }

    float NormalizeValue(float value, float min, float max)
    {
        // Normalize to 0-1
        float normalized = (value - min) / (max - min);

        // Scale and shift to -1 to 1
        float scaledAndShifted = (normalized * 2) - 1;

        //return scaledAndShifted;
        return scaledAndShifted;
    }

    private class BreathTracker
    {
        private Queue<float> previousValues;
        private int frameCount;
        private float currentSum;

        public BreathTracker(int frameCount)
        {
            this.frameCount = frameCount;
            previousValues = new Queue<float>(frameCount);
            for (int i = 0; i < frameCount; i++)
            {
                previousValues.Enqueue(0f); // initial values
            }
        }

        public float Update(float breathVolume)
        {
            if (previousValues.Count >= frameCount)
            {
                currentSum -= previousValues.Dequeue(); // Subtract oldest value
            }

            currentSum += breathVolume;
            previousValues.Enqueue(breathVolume); // Add current value

            return currentSum / previousValues.Count; // Return average of last 'frameCount' frames
        }
    }

}
