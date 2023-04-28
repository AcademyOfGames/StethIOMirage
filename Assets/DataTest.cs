using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataTest : MonoBehaviour
{
    [SerializeField] private DataVisualizer dataVisualizer; // Reference to the DataVisualizer script
    [SerializeField] private float cycleDuration = 2f; // Duration of a complete increase and decrease cycle

    private float currentTime;

    private void Update()
    {
        currentTime += Time.deltaTime;
        float normalizedTime = currentTime / cycleDuration;

        // Calculate sinusoidal lung volume value between 0 and 1
        float lungVolumeValue = (Mathf.Sin(normalizedTime * 2 * Mathf.PI) + 1) / 2;
        dataVisualizer.SetDataValue(lungVolumeValue);
    }
}
