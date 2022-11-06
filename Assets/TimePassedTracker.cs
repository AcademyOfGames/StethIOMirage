using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class TimePassedTracker : MonoBehaviour
{
    public TextMeshProUGUI timeLeftText;

    public float timeLeft;
    // Start is called before the first frame update
    void Start()
    {
        timeLeft = LevelSettings.Instance.levelTotalTime * 60f;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (timeLeft <= 0.05)
        {
            FindObjectOfType<LevelManager>().EndSession("You've completed the session time");
        }
        else
        {
            timeLeft -= Time.deltaTime;
            TimeSpan t = TimeSpan.FromSeconds(timeLeft);

            timeLeftText.text = t.ToString("mm\\:ss");
        }
    }
}
