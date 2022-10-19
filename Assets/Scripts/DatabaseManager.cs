using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using Firebase.Database;
using Oculus.Platform.Samples.VrHoops;
using UnityEngine;
using UnityEngine.UI;

public class DatabaseManager : MonoBehaviour
{
    public InputField Name;
    public string HeartRate;
    
    private string userID;
    private DatabaseReference dbReference;

    public string NameText;
    public float HeartRateReceived;
    
    // Start is called before the first frame update
    void Start()
    {
        /*
        if (PlayerPrefs.HasKey("UserName"))
        {
            Name.text = PlayerPrefs.GetString("UserName");
        }*/
        
        userID = SystemInfo.deviceUniqueIdentifier;
        dbReference = FirebaseDatabase.DefaultInstance.RootReference;
    }
    
    /*public void CreateUser(string text, int pin, out string error)
    {
        
        User newUser = new User(text, 0, pin);
        string json = JsonUtility.ToJson(newUser);

        
        StartCoroutine(GetName(( name) =>
        {
            if (name != "")
            {
                dbReference.Child("users").SetRawJsonValueAsync(json);
                PlayerPrefs.SetString("UserName", text);
            }
            else
            {
                print("name already exists, pick a different name");
            }
        }));
        error = "";
    }*/
    




    
}
