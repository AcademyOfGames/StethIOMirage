using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;

public class LevelManager : MonoBehaviour
{
    [SerializeField] private InputActionReference gripAction;
    public GameObject rHand;
    public GameObject lHand;
    
    public float timeLeft;

    public bool sessionEnded;

    private AudioSource UISounds;

    public AudioClip endChime;

    private void OnEnable()
    {
        //grip
        gripAction.action.started += Gripping;
        gripAction.action.canceled += GripRelease;
    }

    private void OnDisable()
    {
        //grip
        gripAction.action.started -= Gripping;
        gripAction.action.canceled -= GripRelease;
    }

    // Start is called before the first frame update
    void Start()
    {
        UISounds = GetComponent<AudioSource>();
        sessionEnded = false;
    }

    public void ShowEndUI()
    {
        UISounds.clip = endChime;
        UISounds.volume = .1f;
        UISounds.Play();
        FindObjectOfType<BreathStatsTracker>().breathingSound = false;
        
        lHand.GetComponent<LineRenderer>().enabled = true;
        rHand.GetComponent<LineRenderer>().enabled = true;
        lHand.GetComponent<XRInteractorLineVisual>().enabled = true;
        rHand.GetComponent<XRInteractorLineVisual>().enabled = true;
    }

    public void EndSession(string message)
    {
        if (sessionEnded) return;

        sessionEnded = true;
        IEnumerator coroutine = FindObjectOfType<EnvironmentControls>().StartGlow();
        StartCoroutine(coroutine);
    }

    private void Gripping(InputAction.CallbackContext obj)
    {
        Debug.Log("Gripping clicked");
        rHand.GetComponent<XRInteractorLineVisual>().enabled = true;
        rHand.GetComponent<LineRenderer>().enabled = true;
    }

    private void GripRelease(InputAction.CallbackContext obj)
    {
        rHand.GetComponent<XRInteractorLineVisual>().enabled = false;
        rHand.GetComponent<LineRenderer>().enabled = false;
    }
}
