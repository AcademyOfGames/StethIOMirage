using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;

public class MenuButtons : MonoBehaviour
{
    public GameObject signInUI;
    public GameObject startUI;
    public GameObject levelSelectUI;
    public GameObject levelDetailsUI;
    public GameObject VRKeys;
    public AudioSource buttonSound;

    public FirebaseData _FirebaseData;
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    private void OnEnable()
    {
        PCControls.OnEnter += EnterPressed;
    }

    private void OnDisable()
    {
        PCControls.OnEnter -= EnterPressed;
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

            FindObjectsOfType<LevelButtonBehavior>()[0].ShowLevelDetails();
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
        signInUI.SetActive(true);
        startUI.SetActive(false);
        VRKeys.SetActive(true);
        buttonSound.Play();
    }


    // Update is called once per frame
    void Update()
    {
        
    }

    
}
