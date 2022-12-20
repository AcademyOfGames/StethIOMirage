using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class SessionDataManager : MonoBehaviour
{
    private static SessionDataManager instance;

    private HeartStatsTracker heartStats;
    private TimePassedTracker timeTracker;

    private List<int> heartRatePoints;
    private SessionData sessionData;

    float dataCollectionRate = 10f;
    float timeCount = 0f;

    JSONSaveLoad saveLoad;

    public static SessionDataManager Instance { get => instance; private set => instance = value; }

    private void Awake()
    {
        if (instance != null)
        {
            Debug.LogError("There should only be one of these!");
        }
        instance = this;
        saveLoad = new JSONSaveLoad();
        heartRatePoints = new List<int>();       
    }
    // Start is called before the first frame update
    void Start()
    {
        heartStats = GetComponent<HeartStatsTracker>();
        timeTracker = GetComponent<TimePassedTracker>();
    }

    // Update is called once per frame
    void Update()
    {
        if (timeCount >= dataCollectionRate)
        {
            timeCount = 0;
            heartRatePoints.Add(Mathf.RoundToInt(heartStats.currentHeartRate));
        }
        else
        {
            timeCount += Time.deltaTime;
        }
    }

    public void CreateSessionData()
    {
        string dateCompleted = System.DateTime.UtcNow.ToLocalTime().ToString("d");
        string timeCompleted = System.DateTime.UtcNow.ToLocalTime().ToString("t");
        int sessionLength = Mathf.RoundToInt(LevelSettings.Instance.levelTotalTime- timeTracker.timeLeft);
        int inTime = Mathf.RoundToInt(LevelSettings.Instance.levelInhaleTarget);
        int inHoldTime= Mathf.RoundToInt(LevelSettings.Instance.levelInhaleHoldTarget);
        int exTime= Mathf.RoundToInt(LevelSettings.Instance.levelExhaleTarget);
        int exHoldTime= Mathf.RoundToInt(LevelSettings.Instance.levelExhaleHoldTarget);
        sessionData = new SessionData(dateCompleted, timeCompleted, heartRatePoints,sessionLength,inTime, inHoldTime, exTime, exHoldTime);

        saveLoad.SaveData(ref sessionData);
    }

    


}
