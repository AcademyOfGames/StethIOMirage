
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
            statsScreen.GetComponent<Animator>().SetTrigger("Close");
            buttonText.text = "Show Statistics";
        }
        else
        {
            isOn = true;
            statsScreen.SetActive(true);
            statsScreen.GetComponent<Animator>().SetTrigger("Open");
            buttonText.text = "Hide Statistics";
        }
    }
}
