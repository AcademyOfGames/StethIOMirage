using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class StatsDisplay : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI valueUI;
    [HideInInspector] public string valueText;
    static  float totalBreathSeconds;
    public string textAfterNum;
    public float maxRange;
    public bool showRatio;

    public string ValueName;
    public float defaultValue;
    public float minValue;
    public float maxValue;
    private float currentValue;

    public float CurrentValue { get => currentValue; set => currentValue = value; }

    private void Start()
    {
        currentValue = defaultValue;
        valueUI.text = defaultValue.ToString();
        print("Grabbing stats in " + gameObject.name);
        valueText = valueUI.text;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void UpdateStats(float currentSliderPos)
    {
        if (showRatio)
        {
            print("slider pos " + currentSliderPos + " * " + totalBreathSeconds);
            float a = currentSliderPos * totalBreathSeconds;
            float b = totalBreathSeconds - a;
            print("a " + a + " b " + b);
            valueText = b.ToString("0.0") + "/" + a.ToString("0.0");

            valueUI.text = valueText + " " + textAfterNum;
        }
        else
        {
            totalBreathSeconds = currentSliderPos * maxRange;
            valueText = totalBreathSeconds.ToString("0.0");
            valueUI.text = valueText + " " + textAfterNum;
        } 
    }

    public void UpdateValue(float newValue)
    {
        currentValue = newValue;
        valueUI.text = currentValue.ToString();
    }





}
