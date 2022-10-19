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
    public int          currentHeartRate = -1;

    void Awake()
    {
        InitializeFirebase();
    }
    public void GetHeartData(FirebaseUser _user)
    {
        user = _user;
        StartCoroutine("GetHeartRate");
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

            yield return new WaitForSeconds(1);
            StartCoroutine(GetHeartRate());
        }
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
