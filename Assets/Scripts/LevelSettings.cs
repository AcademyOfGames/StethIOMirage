using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.Assertions.Must;
using UnityEngine.PlayerLoop;

public class LevelSettings : MonoBehaviour
{
    public float levelTotalTime;
    public float levelInhaleTarget;
    public float levelExhaleTarget;
    public float levelHeartTarget = 60;
    private static LevelSettings _instance;

    public TextMeshProUGUI levelTotalTimeText;
    public TextMeshProUGUI levelInhaleText;
    public static LevelSettings Instance { get { return _instance; } }

    private void Update()
    {
        if (levelTotalTimeText != null)
        {
            levelTotalTime = float.Parse(levelTotalTimeText.text.Split(' ')[0]);
        }
        
        if (levelInhaleText != null)
        {
            levelInhaleTarget = float.Parse(levelInhaleText.text.Split('/')[0]);
            levelExhaleTarget = float.Parse(levelInhaleText.text.Split('/')[1]);
        }      

    }

    private void Awake()
    {
        if (_instance != null && _instance != this)
        {
            Destroy(gameObject);
        } else {
            DontDestroyOnLoad(gameObject);
            _instance = this;
        }
    }
    
}
