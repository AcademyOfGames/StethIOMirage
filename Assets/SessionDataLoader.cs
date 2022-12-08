using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class SessionDataLoader : MonoBehaviour
{
    [SerializeField] TMP_Text statsTextbox;

    

    List<SessionData> sessionDatas = new List<SessionData>();

    private JSONSaveLoad saveLoad;

    private void Start()
    {
        saveLoad = new JSONSaveLoad();
    }

    public void LoadData()
    {
        sessionDatas = saveLoad.LoadAllSessions();

        DisplayData();
    }

    public void DisplayData()
    {
        statsTextbox.text = "";

        foreach (var session in sessionDatas)
        {
            statsTextbox.text += session.TimeCompleted + "\n";
        }

        if (sessionDatas.Count == 0)
        {
            statsTextbox.text = "No Saved Data Yet!";
        }
    }
}
