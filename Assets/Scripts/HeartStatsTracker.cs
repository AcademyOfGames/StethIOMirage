using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.InputSystem.Interactions;
using UnityEngine.PlayerLoop;

public class HeartStatsTracker : MonoBehaviour
{
    
    private static HeartStatsTracker _instance;

    public static HeartStatsTracker Instance { get { return _instance; } }
    private OnlineStats stats;
    public float initialHeartRate;
    
    public float heartRateProgress;
    
    private float timeSinceLastBeat = 0f;
    private SwanMovement1 swan;

    private LevelManager lvl;
    
    public TextMeshProUGUI heartRateText;

    private void Awake()
    {
        if (_instance != null && _instance != this)
        {
            Destroy(gameObject);
        } else {
            _instance = this;
        }


        lvl = FindObjectOfType<LevelManager>();
        swan = FindObjectOfType<SwanMovement1>();
    }

    private void Start()
    {
                stats = FindObjectOfType<OnlineStats>();
                
                if (stats == null)
                {
                    initialHeartRate = 30;
                }
                else
                {
                    initialHeartRate = stats.currentHeartRate;
                }
    }

    public void Update()
    {
        float currentHeartRate;

        if (stats == null)
        {
            currentHeartRate = 90;
        }
        else
        {
            currentHeartRate = stats.currentHeartRate;
        }
        
        timeSinceLastBeat -= Time.deltaTime;
        if (timeSinceLastBeat <= 0)
        {
            if (stats.missingHeartData)
            {
                heartRateText.text = "No \n Data";
                heartRateText.color = Color.magenta;

            }
            else
            {
                heartRateText.text =currentHeartRate.ToString("F1");  
                heartRateText.color = Color.white;

            }
            
            timeSinceLastBeat =  60f/currentHeartRate ;

            heartRateProgress = Mathf.InverseLerp(initialHeartRate, LevelSettings.Instance.levelHeartTarget, currentHeartRate);
            swan.AdjustHeartRateInfluence(heartRateProgress, currentHeartRate);
            

            if (currentHeartRate < initialHeartRate * .9f)
            {
                FindObjectOfType<LevelManager>().EndSession("Heart Rate lowered by 10%");
//                swan.GetComponent<BirdStateChanger>().SwitchState(BirdStateChanger.BirdState.Welcoming);
            }
        }
        
    }
/*
    void ArtificialRateChange()
    {
        if (currentHeartRate <= LevelSettings.Instance.levelHeartTarget)
        {
            lvl.EndSession("Ideal heart rate reached");
        } else{       
            heartRate -= Time.deltaTime * .5f;
        }
    }*/
}