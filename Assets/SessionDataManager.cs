using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Linq;

public class SessionDataManager : MonoBehaviour
{
    private static SessionDataManager instance;

    private HeartStatsTracker heartStats;
    private TimePassedTracker timeTracker;
    private OnlineStats onlineStats;

    private List<int> heartRatePoints;
    private List<int> currentAtrialFibBurden;
    private List<int> currentBloodPressureDiastolic;
    private List<int> currentBloodPressureSystolic;
    private List<int> currentBodyTemp;
    private List<int> currentHeartRateRecovery;
    private List<int> currentHeartRateVariability;
    private List<int> currentOxygenSaturation;
    private List<int> currentRespiratoryRate;
    private List<int> currentRestingHeartRate;

    private SessionData sessionData;

    float dataCollectionRate = 30f;
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

        currentAtrialFibBurden = new List<int>();
        currentBloodPressureDiastolic = new List<int>();
        currentBloodPressureSystolic = new List<int>();
        currentBodyTemp = new List<int>();
        currentHeartRateRecovery = new List<int>();
        currentHeartRateVariability = new List<int>();
        currentOxygenSaturation = new List<int>();
        currentRespiratoryRate = new List<int>();
        currentRestingHeartRate = new List<int>();
    }
    // Start is called before the first frame update
    void Start()
    {
        heartStats = GetComponent<HeartStatsTracker>();
        timeTracker = GetComponent<TimePassedTracker>();
        onlineStats = heartStats.Stats;
    }

    // Update is called once per frame
    void Update()
    {
        if (timeCount >= dataCollectionRate)
        {
            timeCount = 0;
            heartRatePoints.Add(Mathf.RoundToInt(heartStats.currentHeartRate));
            currentAtrialFibBurden.Add(Mathf.RoundToInt(onlineStats.currentAtrialFibBurden));
            currentBloodPressureDiastolic.Add(Mathf.RoundToInt(onlineStats.currentBloodPressureDiastolic));
            currentBloodPressureSystolic.Add(Mathf.RoundToInt(onlineStats.currentBloodPressureSystolic));
            currentBodyTemp.Add(Mathf.RoundToInt(onlineStats.currentBodyTemp));
            currentHeartRateRecovery.Add(Mathf.RoundToInt(onlineStats.currentHeartRateRecovery));
            currentHeartRateVariability.Add(Mathf.RoundToInt(onlineStats.currentHeartRateVariability));
            currentOxygenSaturation.Add(Mathf.RoundToInt(onlineStats.currentOxygenSaturation));
            currentRespiratoryRate.Add(Mathf.RoundToInt(onlineStats.currentRespiratoryRate));
            currentRestingHeartRate.Add(Mathf.RoundToInt(onlineStats.currentRestingHeartRate));
        }
        else
        {
            timeCount += Time.deltaTime;
        }
    }

    public void CreateSessionData()
    {
        Debug.Log("Creating Session Data!");

        string dateCompleted = System.DateTime.UtcNow.ToLocalTime().ToString("d");
        string timeCompleted = System.DateTime.UtcNow.ToLocalTime().ToString("t");
        int sessionLength = Mathf.RoundToInt(LevelSettings.Instance.levelTotalTime- (timeTracker.timeLeft/60f));
        int inTime = Mathf.RoundToInt(LevelSettings.Instance.levelInhaleTarget);
        int inHoldTime= Mathf.RoundToInt(LevelSettings.Instance.levelInhaleHoldTarget);
        int exTime= Mathf.RoundToInt(LevelSettings.Instance.levelExhaleTarget);
        int exHoldTime= Mathf.RoundToInt(LevelSettings.Instance.levelExhaleHoldTarget);
        //sessionData = new SessionData(dateCompleted, timeCompleted, heartRatePoints,sessionLength,inTime, inHoldTime, exTime, exHoldTime);

        sessionData = new SessionData();
        sessionData.DateCompleted = dateCompleted;
        sessionData.TimeCompleted = timeCompleted;
        sessionData.SessionLength = sessionLength;
        sessionData.BreathRate = 60.0f / (inTime + inHoldTime + exTime + exHoldTime);
        sessionData.NumBreathsTaken = Mathf.RoundToInt( sessionData.BreathRate * sessionLength);
        sessionData.InhaleTime = inTime;
        sessionData.InhaleHoldTime = inHoldTime;
        sessionData.ExhaleTime = exTime;
        sessionData.ExhaleHoldTime = exHoldTime;

        sessionData.AtrialFibBurden = (int)currentAtrialFibBurden.Average();
        sessionData.AvgHeartRate = (int)heartRatePoints.Average();
        sessionData.BloodPressureDiastolic = (int)currentBloodPressureDiastolic.Average();
        sessionData.BloodPressureSystolic = (int)currentBloodPressureSystolic.Average();
        sessionData.BodyTemperature = (int)currentBodyTemp.Average();
        sessionData.HeartRateRecovery = (int)currentHeartRateRecovery.Average();
        sessionData.HeartRateVariability = (int)currentHeartRateVariability.Average();
        sessionData.OxygenSaturation = (int)currentOxygenSaturation.Average();
        sessionData.RespiratoryRate = (int)currentRespiratoryRate.Average();
        sessionData.RestingHeartRate = (int)currentRestingHeartRate.Average();

        sessionData.EnvironmentName = LevelSettings.Instance.SelectedEnvironment;

        //saveLoad.SaveData(ref sessionData);
        saveLoad.SaveSessionData(sessionData);
    }

    


}
