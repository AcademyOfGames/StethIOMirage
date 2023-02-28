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

    public OnlineStats Stats { get => stats; set => stats = value; }

    private OnlineStats stats;
    public float initialHeartRate;
    
    private bool softGlowing;
    
    private float timeSinceLastBeat = 0f;
    private SwanMovement1 swan;

    private LevelManager lvl;
    
    public TextMeshProUGUI heartRateText;
    public float currentHeartRate;

    public float placeholderHeartRate;
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
        stats = FindObjectOfType<OnlineStats>();

        initialHeartRate = stats == null ? placeholderHeartRate : stats.currentHeartRate;

    }

    private bool tempSwitch;
    void ChangeHeart()
    {
        if (tempSwitch)
        {
            print("Switch 100");
            currentHeartRate = 100;

            tempSwitch = false;
        }
        else
        {
            print("Switch 40");

            currentHeartRate = 40;
            tempSwitch = true;
        }
    }
    public void Update()
    {
        if (stats == null)
        {
            currentHeartRate = placeholderHeartRate;

            heartRateText.text =currentHeartRate.ToString("F1");

            Debug.Log("ONLINE STATS IS NULL");

            return;
        }

        currentHeartRate = stats.currentHeartRate;

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

            if (currentHeartRate < initialHeartRate * LevelSettings.Instance.levelHeartTarget)
            {
                if (!softGlowing)
                {
                    softGlowing = true;
                    IEnumerator coroutine = FindObjectOfType<EnvironmentControls>().SoftGlow();
                    StartCoroutine(coroutine);
                }
            }
            else
            {
                if (softGlowing)
                {

                    softGlowing = false;
                    IEnumerator coroutine = FindObjectOfType<EnvironmentControls>().BackToNormalGlow();
                    StartCoroutine(coroutine);

                }
            }
        }
        
    }
}