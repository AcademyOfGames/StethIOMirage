using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class BreathPerMinuteTracker : MonoBehaviour
{
    private TMP_Text breathPMText;

    // Start is called before the first frame update
    void Start()
    {
        breathPMText = GetComponent<TMP_Text>();
    }

    // Update is called once per frame
    void Update()
    {
        breathPMText.text = LevelSettings.Instance.GetBreathPerMinute().ToString("0.0");
    }
}
