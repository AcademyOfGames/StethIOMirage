using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;
using static OVRPlugin;
using BestHTTP.SecureProtocol.Org.BouncyCastle.Security.Certificates;

public class MenuButtons : MonoBehaviour
{
    public GameObject signInUI;
    public GameObject startUI;
    public GameObject levelSelectUI;
    public GameObject levelDetailsUI;
    public GameObject VRKeys;
    public AudioSource buttonSound;

    public FirebaseData _FirebaseData;

    public bool autoLoginWithMaheshData = true;
    
    // Start is called before the first frame update
    void Start()
    {
        if (autoLoginWithMaheshData)
        {
            StartCoroutine(AutoSignIn());
        }
    }

    private void OnEnable()
    {
        PCControls.OnEnter += EnterPressed;
    }

    private void OnDisable()
    {
        PCControls.OnEnter -= EnterPressed;
    }

    private IEnumerator AutoSignIn()
    {
        bool loggedIn = false;
        while (!loggedIn)
        {
            ActivateSignIn();

            yield return new WaitForSeconds(.5f);

            _FirebaseData.emailLoginField.text = "mahesh@stethio.com";
            _FirebaseData.passwordLoginField.text = "6Camera8";

            yield return new WaitForSeconds(.5f);

            _FirebaseData.LoginButton();
        }
    }

    void EnterPressed()
    {print("enter pressed");
        if (startUI.activeSelf)
        {
            ActivateSignIn();
            _FirebaseData.SetNewInput(_FirebaseData.passwordLoginField);
            _FirebaseData.SetNewInput(_FirebaseData.emailLoginField);
        }
        else if (levelDetailsUI.activeSelf)
        {
            print("loadingWorld");
            FindObjectOfType<SceneControls>().LoadWorld();

        }
        else if (levelSelectUI.activeSelf)
        {
            print("show level details");

            FindObjectsOfType<LevelButtonBehavior>()[1].ShowLevelDetails();
        }
        else if (signInUI.activeSelf)
        {
            FindObjectOfType<FirebaseData>().GenericLogin();
        }
        
    }

    public void Reset()
    {
        SceneManager.LoadScene(0);
    }

    public void ActivateSignIn()
    {
        if (autoLoginWithMaheshData)
        {
            signInUI.SetActive(true);
            startUI.SetActive(false);
            buttonSound.Play();

            
        }
        else
        {
            signInUI.SetActive(true);
            startUI.SetActive(false);
            VRKeys.SetActive(true);
            buttonSound.Play();
        }
        
    }


    // Update is called once per frame
    void Update()
    {
        
    }

    
}
