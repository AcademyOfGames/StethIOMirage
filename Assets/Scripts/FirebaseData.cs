using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;
using Firebase;
using Firebase.Auth;
using Firebase.Unity;
using TMPro;
using Firebase.Database;
using UnityEngine.UI;

//using Unity.UNetWeaver;
using VRKeys;

public class FirebaseData : MonoBehaviour
{
    public Keyboard keys; 
    public DependencyStatus dependencyStatus;
    public FirebaseAuth auth;
    public FirebaseUser user;
    private DatabaseReference db;
    [Header("Login")] 
    public TMP_InputField emailLoginField;
    public TMP_InputField passwordLoginField;
    public TMP_Text warningLoginText;

    [Header("Register")] 
    public TMP_InputField usernameRegisterField;
    public TMP_InputField emailRegisterField;
    public TMP_InputField passwordRegisterField;
    public TMP_InputField passwordRegisterVerifyField;
    public TMP_Text warningRegisterText;
    
    
    public TextMeshProUGUI heartRateText;
    public GameObject levelSelectUI;    
    
    void Awake()
    {
        if (FindObjectOfType<OnlineStats>().userLoggedIn) return;
        InitializeFirebase();
        /*
        FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task =>
        {
            dependencyStatus = task.Result;
            print("checking result " + task.Result);

            if (dependencyStatus == DependencyStatus.Available)
            {
              //  InitializeFirebase();
            }
        });*/
    }

    private void Start()
    {   
        if (FindObjectOfType<OnlineStats>().userLoggedIn) GoToLevelSelect();
    }

    void InitializeFirebase()
    {
       auth = FirebaseAuth.DefaultInstance;
       db = FirebaseDatabase.DefaultInstance.RootReference;
    }

    public void LoginButton()
    {
       StartCoroutine(Login(emailLoginField.text, passwordLoginField.text));
    }
    
    public void RegisterButton()
    {
        StartCoroutine(Register(emailRegisterField.text, passwordRegisterField.text, usernameRegisterField.text));
    }

    public void ClearLoginFields()
    {
        
    }
    
    private IEnumerator Login(string _email, string _password)
    {
        var LoginTask = auth.SignInWithEmailAndPasswordAsync(_email, _password);

        yield return new WaitUntil(predicate: () => LoginTask.IsCompleted);

        if (LoginTask.Exception != null)
        {
            FirebaseException ex = LoginTask.Exception.GetBaseException() as FirebaseException;

            StartCoroutine(ShowMessage(warningLoginText, "Error " +  ex.Message));
        }
        else
        {
            user = LoginTask.Result;

            Invoke("GoToLevelSelect",2.5f);
            StartCoroutine(ShowMessage(warningLoginText, "Success!"));

        }
    }
    
    private IEnumerator Register(string _email, string _password, string _username)
    {
        var RegisterTask = auth.CreateUserWithEmailAndPasswordAsync(_email, _password);
        yield return new WaitUntil(predicate: () => RegisterTask.IsCompleted);

        if (RegisterTask.Exception != null)
        {
            FirebaseException ex = RegisterTask.Exception.GetBaseException() as FirebaseException;
            StartCoroutine(ShowMessage(warningRegisterText, "Error " +  ex.Message));
        }
        else
        {
            user = RegisterTask.Result;

            if (user != null)
            {
                UserProfile profile = new UserProfile {DisplayName = _username};

                var ProfileTask = user.UpdateUserProfileAsync(profile);

                yield return new WaitUntil(predicate: () => ProfileTask.IsCompleted);

                if (ProfileTask.Exception != null)
                {
                    StartCoroutine(ShowMessage(warningRegisterText, "Error " +  ProfileTask.Exception.GetBaseException()));
                    print("Exception: " + ProfileTask.Exception.GetBaseException());
                }
                else
                {
                    StartCoroutine(ShowMessage(warningRegisterText, "Registration Complete!"));
                    Invoke("GoToLevelSelect",2.5f);
                }
            }
        }      
    }

    void GoToLevelSelect()
    {
        FindObjectOfType<OnlineStats>().userLoggedIn = true;
        levelSelectUI.SetActive(true);
        foreach (var v in transform.parent.GetComponentsInChildren<Transform>())
        {
            if (v.name != gameObject.name)
            {
                v.gameObject.SetActive(false);
            }
        }

        FindObjectOfType<OnlineStats>().GetHeartData(user);
    }
    IEnumerator ShowMessage(TMP_Text text,string message){
        
        text.transform.gameObject.SetActive(true);
        text.text = message;
        yield return new WaitForSeconds(2.5f);
                
        text.transform.gameObject.SetActive(false);
        text.text = "";
    }

    IEnumerator GetHeartRate()
    {
        var DBTask = db.Child("Users").Child(user.UserId).GetValueAsync();

        yield return new WaitUntil(predicate: () => DBTask.IsCompleted);

        long earliestTimeStamp = long.MaxValue;
        int currentHeartRate = -1;
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

            StartCoroutine(GetHeartRate());
            heartRateText.text = currentHeartRate.ToString();
        }
    }
    public void SetHeartData(int rate)
    {
        StartCoroutine(SetHeartRate(rate));
    }
    
    IEnumerator SetHeartRate(int rate)
    {
        var DBTask = db.Child("Users").Child(user.UserId).Child("Test").SetValueAsync(rate);

        print("Getting data from " + user.UserId);
        yield return new WaitUntil(predicate: () => DBTask.IsCompleted);

        if (DBTask.Exception != null)
        {
            print("error " + DBTask.Exception.Message);
        }
        else
        {
           print("it worked");
        }
    }

    public void SetNewInput(TMP_InputField text)
    {
        if (keys.displayText == text) return;
        TMP_InputField[] inputs = FindObjectsOfType<TMP_InputField>();

        Color ogColor = text.GetComponent<Image>().color;
        foreach (var input in inputs)
        {
            input.GetComponent<Image>().color = ogColor;
        }
        text.GetComponent<Image>().color = Color.white;

        keys.displayText = text;
        keys.Clear();
        //keys.displayText.placeholder.text = "";
        keys.displayText.text = "";
    }
    
    public void GetHeartData()
    {
        StartCoroutine("GetHeartRate");
    }
}
