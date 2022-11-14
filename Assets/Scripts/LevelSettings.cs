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

    public TextMeshProUGUI levelTotalTimeText;
    public TextMeshProUGUI levelInhaleText;
    public TextMeshProUGUI levelExhaleText;
    public TextMeshProUGUI levelInhaleHoldText;
    public TextMeshProUGUI levelExhaleHoldText;
    
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
            DontDestroyOnLoad(gameObject);
            _instance = this;
        }

        //Invoke("LoadSceneAuto",3f);
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
        SceneManager.sceneLoaded += OnSceneLoaded;
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

        if (scene.name == "futuristicExamRoom")
        {
            StartCoroutine("EndGlow");
        }
    }
    IEnumerator EndGlow()
    {
        float timeLeft = 1f;
        //swanMaterial.material.EnableKeyword("_EmissionColor");
        
        while (timeLeft >= 0)
        {
            timeLeft -= Time.deltaTime*.2f;
            //swanMaterial.sharedMaterial.SetColor("_EmissionColor", Color.Lerp(Color.white,Color.black, timeLeft));
            b.intensity.value = Mathf.Lerp(startIntensity,90, timeLeft);
            b.scatter.value = Mathf.Lerp(startScatter,1, timeLeft);
            b.threshold.value = Mathf.Lerp(startThreshold,.2f, timeLeft);
            yield return new WaitForFixedUpdate();
        }
    }
    public void ApplyLevelSettings()
    {
        if (levelTotalTimeText != null)
        {
            levelTotalTime = float.Parse(levelTotalTimeText.text.Split(' ')[0]);
        }

        if (levelInhaleText != null && levelExhaleText != null)
        {
            levelInhaleTarget = float.Parse(levelInhaleText.text);
            levelExhaleTarget = float.Parse(levelExhaleText.text);
        }

        if (levelInhaleHoldText != null && levelExhaleHoldText != null)
        {
            levelInhaleHoldTarget = float.Parse(levelInhaleHoldText.text);
            levelExhaleHoldTarget = float.Parse(levelExhaleHoldText.text);
        }

        
        breathsPerMinute = 60f/(levelInhaleTarget + levelInhaleHoldTarget + levelExhaleTarget + levelExhaleHoldTarget);

    }

}
