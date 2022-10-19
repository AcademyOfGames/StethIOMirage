using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.PlayerLoop;

public class SliderBehavior : MonoBehaviour
{
    public GameObject sliderLine;
    public GameObject sliderHandle;
    float currentSliderPos;
    float sliderLength;

    private float currentValue;
    private StatsDisplay stats;

    private Quaternion ogRotation;

    private float previousXPos;

    public string textAfterNum;
    // Start is called before the first frame update
    void OnEnable()
    {
        sliderLength = sliderLine.GetComponent<Renderer>().bounds.size.x;
        ogRotation = sliderHandle.transform.rotation;
        previousXPos = sliderHandle.transform.position.x;
    }

    public void InitializeSlider(GameObject button)
    {
        gameObject.SetActive(true);
        stats = button.GetComponent<StatsDisplay>();
        //ermmm this isnt pretty
        currentValue = float.Parse(stats.valueText[0].ToString());

    }
    void CalculateSlider()
    {
        currentSliderPos = (sliderHandle.transform.position.x - sliderLine.transform.position.x + sliderLength*.5f)/sliderLength;
        stats.UpdateStats(currentSliderPos);
    }
    
    private void FixedUpdate()
    {
         CalculateSlider();
    }
    

    // Update is called once per frame
    void Update()
    {
        Vector3 snapPos;
        snapPos.z = sliderHandle.GetComponent<CustomUI>().originalPos.z;
         snapPos.y= sliderHandle.GetComponent<CustomUI>().originalPos.y;
         snapPos.x= Mathf.Lerp(previousXPos, sliderHandle.transform.position.x, .8f);
         
         previousXPos = sliderHandle.transform.position.x;
         
         sliderHandle.transform.position = snapPos;
         sliderHandle.transform.rotation = ogRotation;
         
         
    }
}
