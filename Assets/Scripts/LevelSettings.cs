using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.Assertions.Must;
using UnityEngine.PlayerLoop;
using UnityEngine.Purchasing;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;
using UnityEngine.SceneManagement;

public class LevelSettings : MonoBehaviour
{
    public float levelTotalTime;
    public float levelInhaleTarget;
    public float levelExhaleTarget;
    public float levelInhaleHoldTarget;
    public float levelExhaleHoldTarget;
    public float levelHeartTarget = 60;
    public float breathsPerMinute;
    private static LevelSettings _instance;

    private LevelStatsUIManager uIManager;
    //effects
    public Volume postEffects;
    private Bloom b;
    private float startScatter;
    private float startIntensity;
    private float startThreshold;
    public static LevelSettings Instance { get { return _instance; } }
    

    private void Awake()
    {
        if (_instance != null && _instance != this)
        {
            Destroy(gameObject);
        } else {
            
            _instance = this;
        }
        DontDestroyOnLoad(gameObject);
        //Invoke("LoadSceneAuto",3f);
    }

    private void Start()
    {
        uIManager = FindObjectOfType<LevelStatsUIManager>();
    }

    public void SetTargetHeartRate(float target )
    {
        levelHeartTarget = target;
    }

    private void OnEnable()
    {
        SceneManager.sceneLoaded += OnSceneLoaded;

    }
    private void OnDisable()
    {
        SceneManager.sceneLoaded -= OnSceneLoaded;
    }
    
    
    void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        postEffects = FindObjectOfType<Volume>();
        
        //print("Loaded " + scene.name + " called by " + name);
        if (postEffects == null) return;
        postEffects.profile.TryGet(out b);
        startScatter = b.scatter.value;
        startIntensity = b.intensity.value;
        startThreshold = b.threshold.value;

        print(" Volume: " + postEffects.name);

        if (scene.name == "futuristicExamRoom" && _instance != null)
        {
            uIManager = FindObjectOfType<LevelStatsUIManager>();
            StartCoroutine("EndGlow");
        }
    }
    IEnumerator EndGlow()
    {
        float timeLeft = 1f;
        //swanMaterial.material.EnableKeyword("_EmissionColor");
        
        while (timeLeft >= 0)
        {
            timeLeft -= Time.deltaTime*.25f;
            //swanMaterial.sharedMaterial.SetColor("_EmissionColor", Color.Lerp(Color.white,Color.black, timeLeft));
            b.intensity.value = Mathf.Lerp(startIntensity,80, timeLeft);
            b.scatter.value = Mathf.Lerp(startScatter,1, timeLeft);
            b.threshold.value = Mathf.Lerp(startThreshold,.3f, timeLeft);
            yield return new WaitForFixedUpdate();
        }
    }
    public void ApplyLevelSettings()
    {
        if (uIManager.levelTotalTimeText != null)
        {
            levelTotalTime = float.Parse(uIManager.levelTotalTimeText.text.Split(' ')[0]);
        }

        if (uIManager.levelInhaleText != null && uIManager.levelExhaleText != null)
        {
            levelInhaleTarget = float.Parse(uIManager.levelInhaleText.text);
            levelExhaleTarget = float.Parse(uIManager.levelExhaleText.text);
        }

        if (uIManager.levelInhaleHoldText != null && uIManager.levelExhaleHoldText != null)
        {
            levelInhaleHoldTarget = float.Parse(uIManager.levelInhaleHoldText.text);
            levelExhaleHoldTarget = float.Parse(uIManager.levelExhaleHoldText.text);
        }

        
        breathsPerMinute = 60f/(levelInhaleTarget + levelInhaleHoldTarget + levelExhaleTarget + levelExhaleHoldTarget);

    }

    public float GetBreathPerMinute()
    {
        ApplyLevelSettings();

        return breathsPerMinute;
    }

}
