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
    public int currentHeartRate = -1;
    public int currentAtrialFibBurden = -1;
    public int currentBloodPressureDiastolic = -1;
    public int currentBloodPressureSystolic = -1;
    public int currentBodyTemp = -1;
    public int currentHeartRateRecovery = -1;
    public int currentHeartRateVariability = -1;
    public int currentOxygenSaturation = -1;
    public int currentRespiratoryRate = -1;
    public int currentRestingHeartRate = -1;
    public bool userLoggedIn;
    public bool missingHeartData;
    private long previousEarlyTimeStamp = 0;
    void Awake()
    {
        InitializeFirebase();
    }
    public void GetHeartData(FirebaseUser _user)
    {
        if(user != null ) user = _user;
        StartCoroutine("GetHeartRate");
    }
    
    void InitializeFirebase()
    {
        auth = FirebaseAuth.DefaultInstance;
        db = FirebaseDatabase.DefaultInstance.RootReference;
    }
    IEnumerator GetHeartRate()
    {
        print("Trying to get ");
        print("db " + db);
        print("db.Child(Users) " + db.Child("Users"));
        print("user " + user);
        print("user.UserId " + user.UserId);
        print("db.Child(Users).Child(user.UserId) " + db.Child("Users").Child(user.UserId));
        print("db.Child(Users).Child(user.UserId).GetValueAsync(); " + db.Child("Users").Child(user.UserId).GetValueAsync());

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
            foreach (var child in DBTask.Result.Children)
            {
                long timestamp;
                string timeStampValue = child.Child("date").Value.ToString();
                if (long.TryParse(timeStampValue, out timestamp))
                {
                    if (newLatestRate)
                    {
                        string rate = child.Child("heartRate").Value.ToString();
                        currentHeartRate = int.Parse(rate);
                        currentAtrialFibBurden = int.Parse(child.Child("atrialFibrillationBurden").Value.ToString());
                        currentBloodPressureDiastolic = int.Parse(child.Child("bloodPressureDiastolic").Value.ToString());
                        currentBloodPressureSystolic = int.Parse(child.Child("bloodPressureSystolic").Value.ToString());
                        currentBodyTemp = int.Parse(child.Child("bodyTemperature").Value.ToString());
                        currentHeartRateRecovery = int.Parse(child.Child("heartRateRecoveryOneMinute").Value.ToString());
                        currentHeartRateVariability = int.Parse(child.Child("heartRateVariabilitySDNN").Value.ToString());
                        currentOxygenSaturation = int.Parse(child.Child("oxygenSaturation").Value.ToString());
                        currentRespiratoryRate = int.Parse(child.Child("respiratoryRate").Value.ToString());
                        currentRestingHeartRate = int.Parse(child.Child("restingHeartRate").Value.ToString());
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
        
    }
}
