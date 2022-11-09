using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class SliderManager : MonoBehaviour
{
    public Slider slider;
    private StatsDisplay currentStat;

    public TMP_Text minValueUI;
    public TMP_Text MaxValueUI;
    public TMP_Text ValueNameUI;

    private bool isActive = false;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (isActive)
        {
            SendValue();
        }
    }

    public void ActivateSlider(StatsDisplay selectedStat)
    {
        if (!slider.gameObject.activeSelf)
        {
            slider.gameObject.SetActive(true);
        }
        
        if (currentStat != null && currentStat == selectedStat)
        {
            isActive = false;
            slider.gameObject.SetActive(false);
            currentStat = null;
            
            return;
        }

        currentStat = selectedStat;

        slider.minValue = currentStat.minValue;
        slider.maxValue = currentStat.maxValue;

        slider.value = currentStat.CurrentValue;

        minValueUI.text = slider.minValue.ToString();
        MaxValueUI.text = slider.maxValue.ToString();
        ValueNameUI.text = currentStat.ValueName.ToString();

        isActive = true;
    }

    public void SendValue()
    {
        if(currentStat != null)
        {
            currentStat.UpdateValue(slider.value);
        }
        
    }
}
