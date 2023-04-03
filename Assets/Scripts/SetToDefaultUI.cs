using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetToDefaultUI : MonoBehaviour
{
    public GameObject MainUIPanel;
    public GameObject StartPanel;
    public GameObject LoginPanel;
    public GameObject LevelSelectPanel;
    public GameObject LevelSettingsPanel;
    public GameObject StatsScreenPanel;

    // Start is called before the first frame update
    void Start()
    {
        MainUIPanel.SetActive(true);
        StartPanel.SetActive(true);
        LoginPanel.SetActive(false);
        LevelSelectPanel.SetActive(false);
        LevelSettingsPanel.SetActive(false);
        StatsScreenPanel.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
