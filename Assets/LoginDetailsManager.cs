using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System.IO;
using UnityEngine.UI;
using Newtonsoft.Json;

[System.Serializable]
public class LoginDetails
{
    public string username;
    public string password;

    public LoginDetails(string username, string password)
    {
        this.username = username;
        this.password = password;
    }

    public LoginDetails()
    {

    }
}



public class LoginDetailsManager : MonoBehaviour
{
    [SerializeField] TMP_InputField passwordField;
    [SerializeField] TMP_InputField usernameField;
    [SerializeField] Toggle saveDetailsToggle;

    private bool saveDetails = false;

    private string saveFilePath;
    private string saveFolder;

    private static LoginDetailsManager instance;

    public static LoginDetailsManager Instance { get => instance; set => instance = value; }

    private void Awake()
    {
        saveFilePath = Application.persistentDataPath + "/MirageSaves/loginData.json";
        saveFolder = Application.persistentDataPath + "/MirageSaves";
        if (instance == null)
        {
            instance = this;
        }else if (instance != this)
        {
            Destroy(this);
        }
    }

    private void Start()
    {
        if (!File.Exists(saveFilePath))
        {
            saveDetailsToggle.isOn = false;
            saveDetails = false;
        }
        else
        {
            LoginDetails loginDetails;
            string savedDataJson = File.ReadAllText(saveFilePath);
            loginDetails = JsonConvert.DeserializeObject<LoginDetails>(savedDataJson);
            usernameField.text = loginDetails.username;
            passwordField.text = loginDetails.password;

            saveDetailsToggle.isOn = true;
            saveDetails = true;
        }
    }

    public void TogglePassword()
    {
        if (passwordField.contentType == TMP_InputField.ContentType.Password)
        {
            passwordField.contentType = TMP_InputField.ContentType.Standard;
        }
        else
        {
            passwordField.contentType = TMP_InputField.ContentType.Password;
        }
        passwordField.ForceLabelUpdate();
    }

    public void ToggleSavingLoginDetails()
    {
        if (saveDetails == false)
        {
            saveDetails = true;
        }
        else
        {
            saveDetails = false;
        }
    }

    public void SaveLoginDetails()
    {
        if (saveDetails)
        {
            LoginDetails loginDetails = new LoginDetails(usernameField.text, passwordField.text);
            string savedLoginDetails = JsonConvert.SerializeObject(loginDetails);
            Directory.CreateDirectory(saveFolder);
            File.WriteAllText(saveFilePath, savedLoginDetails);
        }
        else if (File.Exists(saveFilePath))
        {
            File.Delete(saveFilePath);
        }
    }
}
