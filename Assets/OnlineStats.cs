using System.Collections;
using System.Collections.Generic;
using Firebase.Auth;
using Firebase.Database;
using UnityEngine;


public class OnlineStats : MonoBehaviour
{
    public FirebaseAuth auth;
    public FirebaseUser user;
    private DatabaseReference db;
    public float currentHeartRate = -1;
    public float currentAtrialFibBurden = -1;
    public float currentBloodPressureDiastolic = -1;
    public float currentBloodPressureSystolic = -1;
    public float currentBodyTemp = -1;
    public float currentHeartRateRecovery = -1;
    public float currentHeartRateVariability = -1;
    public float currentOxygenSaturation = -1;
    public float currentRespiratoryRate = -1;
    public float currentRestingHeartRate = -1;
    public bool userLoggedIn;
    public bool missingHeartData;
    private long previousEarlyTimeStamp = 0;
    void Awake()
    {
        InitializeFirebase();
    }
    public void GetHeartData(FirebaseUser _user)
    {
        if (_user != null)
        {
            print("uSER IS NOT NULL!!!");
            user = _user;
            //user ??= _user;
            StartCoroutine(GetHeartRate());
        }
        else
        {
            print("USER IS NULL");
        }
    }
    
    void InitializeFirebase()
    {
        auth = FirebaseAuth.DefaultInstance;
        db = FirebaseDatabase.DefaultInstance.RootReference;
    }
    IEnumerator GetHeartRate()
    {
        var DBTask = db.Child("Users").Child(user.UserId).GetValueAsync();

        yield return new WaitUntil(predicate: () => DBTask.IsCompleted);

        long earliestTimeStamp = long.MaxValue;
        bool newLatestRate = false;
        
        if (DBTask.Exception != null)
        {
            print("error " + DBTask.Exception.Message);
        }
        else
        {
            Debug.Log("No errors logging in");
            Debug.Log("User ID: " + user.UserId);
            foreach (var child in DBTask.Result.Children)
            {
                long timestamp;
                string timeStampValue = child.Child("date").Value.ToString();
                if (long.TryParse(timeStampValue, out timestamp))
                {
                    if (newLatestRate)
                    {
                        Debug.Log("Getting Data");
                        string rate = child.Child("heartRate").Value.ToString();
                        currentHeartRate = float.Parse(rate);
                        currentAtrialFibBurden = float.Parse(child.Child("atrialFibrillationBurden").Value.ToString());
                        currentBloodPressureDiastolic = float.Parse(child.Child("bloodPressureDiastolic").Value.ToString());
                        currentBloodPressureSystolic = float.Parse(child.Child("bloodPressureSystolic").Value.ToString());
                        currentBodyTemp = float.Parse(child.Child("bodyTemperature").Value.ToString());
                        currentHeartRateRecovery = float.Parse(child.Child("heartRateRecoveryOneMinute").Value.ToString());
                        currentHeartRateVariability = float.Parse(child.Child("heartRateVariabilitySDNN").Value.ToString());
                        currentOxygenSaturation = float.Parse(child.Child("oxygenSaturation").Value.ToString());
                        currentRespiratoryRate = float.Parse(child.Child("respiratoryRate").Value.ToString());
                        currentRestingHeartRate = float.Parse(child.Child("restingHeartRate").Value.ToString());
                    }

                    if (earliestTimeStamp > timestamp)
                    {
                        newLatestRate = true;
                        earliestTimeStamp = timestamp;
                    }
                }
                else
                {
                    print("Couldn't parse " + timeStampValue);
                }
                
            }

            if (previousEarlyTimeStamp == earliestTimeStamp)
            {
                missingHeartData = true;
            }
            yield return new WaitForSeconds(3);
            StartCoroutine(GetHeartRate());
        }
    }
    // Update is called once per frame
    void Update()
    {
        if (user != null)
        {
            if (user.UserId == null) print(("userID is null"));
        }
    }
}
