using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

[System.Serializable]
public class SessionData
{
    public List<int> HeartRateValues = new List<int>();
    public int MinHeartRate;
    public int MaxHeartRate;
    public float AvgHeartRate;

    public float SessionLength;
    

    public int InhaleTime;
    public int InhaleHoldTime;
    public int ExhaleTime;
    public int ExhaleHoldTime;

    public float BreathRate;
    public int NumBreathsTaken;

    public string TimeCompleted;
    public string DateCompleted;
    public string FileName;

    public SessionData()
    {

    }

    public SessionData(string dateCompleted, string timeCompleted, List<int> heartRateValues,float sessionLength, int inhaleTime, int inhaleHoldTime, int exhaleTime, int exhaleHoldTime)
    {
        this.HeartRateValues = heartRateValues;
        MinHeartRate = heartRateValues.Min();
        MaxHeartRate = heartRateValues.Max();
        AvgHeartRate = (float)heartRateValues.Average();
        this.SessionLength = sessionLength;
        this.InhaleTime = inhaleTime;
        this.InhaleHoldTime = inhaleHoldTime;
        this.ExhaleTime = exhaleTime;
        this.ExhaleHoldTime = exhaleHoldTime;
        BreathRate = 60.0f/(inhaleTime + inhaleHoldTime + exhaleTime + exhaleHoldTime);
        NumBreathsTaken = Mathf.RoundToInt(sessionLength / BreathRate) ;

        this.TimeCompleted = timeCompleted;
        this.DateCompleted = dateCompleted;
        FileName = dateCompleted.ToString().Replace("/", "x") + timeCompleted.ToString().Replace(":", "x");
        
        
    }

    public System.DateTime GetDateTime()
    {
        return System.DateTime.Parse(DateCompleted);
    }
}
