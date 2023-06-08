using UnityEngine;
using System.Collections.Generic;

public class BreathTrackerController : MonoBehaviour
{
    private BreathTracker breathTracker;

    private void Start()
    {
        // Initialize BreathTracker with a delay of 10 frames
        breathTracker = new BreathTracker(10);
    }

    private void Update()
    {
        // Replace this with actual breath volume data
        float breathVolume = MQTT.Instance.MQTT_breathVolume;

        //breathTracker.Update(breathVolume);
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