using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class LevelManager : MonoBehaviour
{

    public GameObject rHand;
    public GameObject lHand;
    
    public float timeLeft;
    public GameObject endUI;
    public TextMeshProUGUI endMessage;

    public bool sessionEnded;

    private AudioSource UISounds;

    public AudioClip endChime;
    // Start is called before the first frame update
    void Start()
    {
        UISounds = GetComponent<AudioSource>();
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
        endUI.SetActive(true);
    }

    public void EndSession(string message)
    {
        if (sessionEnded) return;
        FindObjectOfType<SwanMovement1>().SetLandingSpot();
        endMessage.text = "Session complete: \n" + message;
        sessionEnded = true;
    }
}
