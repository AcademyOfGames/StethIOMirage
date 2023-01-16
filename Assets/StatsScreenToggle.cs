using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class StatsScreenToggle : MonoBehaviour
{
    public TMP_Text buttonText;
    private bool isOn = false;
    public GameObject statsScreen;
    public void ToggleStatsScreen()
    {
        if (isOn)
        {
            isOn = false;
            statsScreen.SetActive(false);
            buttonText.text = "Show Statistics";
        }
        else
        {
            isOn = true;
            statsScreen.SetActive(true);
            buttonText.text = "Hide Statistics";
        }
    }
}
