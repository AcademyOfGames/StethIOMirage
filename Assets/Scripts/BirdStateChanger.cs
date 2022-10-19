using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.InputSystem;
public class BirdStateChanger : MonoBehaviour
{
    OVRInput.Controller controllerR = OVRInput.Controller.RTouch;
    OVRInput.Controller controllerL = OVRInput.Controller.LTouch;

    // States
    public enum BirdState
    {
        Hunting, Welcoming, Exiting, Orbiting, GoToLanding, Landed,
        Landing,
        TakeOff,
        Diving,
        Eating
    }

    // Start with Hunting
    public BirdState currentState = BirdState.GoToLanding;

    //BirdSettings class, a group of data we call BirdSettings. Just like we can do Trasform.position to access some data. we can say BirdSettings.turnAngleIntensity
    public class BirdSettings
    {
        public float turnAngleIntensity;
        public float speed;
        public float turnSpeed;

        //** This is called a constructor, when you write new BirdSettings(...) in your code you can create a new BirdSettings object with specific data
        public BirdSettings(float tAngle, float vSpeed, float tSpeed )
        {
            turnAngleIntensity = tAngle;
            speed =vSpeed ;
            turnSpeed = tSpeed;
        }
    }

    private BirdSettings huntingSettings; 
    private BirdSettings welcomingSettings; 
    private BirdSettings goToLandingSettings; 
    private BirdSettings LandedSettings; 
    private BirdSettings exitingSettings;
    private BirdSettings divingSettings;

    private SwanMovement1 bird;
    private static readonly int TakeOff = Animator.StringToHash("TakeOff");



    private void Awake()
    {
        bird = GetComponent<SwanMovement1>();
        SetBirdSettings();
    }

    
    // Change the bird from flying to meeting player to leaving
    public void SwitchState(BirdState birdState)
    {
        if (currentState == birdState) return;
        print("SwitchState " +birdState);

        switch (birdState)
        {
            case BirdState.Hunting:
                bird.UpdateSettings(huntingSettings);
                break;

            case BirdState.Welcoming:

                bird.currentWaypoint = bird.player.position + Vector3.up *.5f;

                //after 1 second set the bird to welcoming
                bird.UpdateSettings(welcomingSettings);
                break;

            case BirdState.GoToLanding:

                bird.UpdateSettings(goToLandingSettings);

                break;
            case BirdState.Landing:
                bird.UpdateSettings(LandedSettings);

                bird.BirdLanded();
                if (bird.landingSpot == bird.handLandingSpot)
                {

                }
                //Invoke("TakeOff",6);  
                break;
            
            case BirdState.TakeOff:
                SwitchState(BirdState.Hunting);
                break;
            
            case BirdState.Exiting:
                break;
            
            case BirdState.Diving:
                bird.UpdateSettings(divingSettings);
                //StartCoroutine("ResetToHunting");
                break;
            
            case BirdState.Eating:
                //StartCoroutine("ResetToHunting");
                break;
        }

        currentState = birdState;
    }



    void SetBirdSettings()
    {
        //**creating each bird setting for us to use. we can add custom speed, waypoint logic etc
        huntingSettings = new BirdSettings(bird.turnAngleIntensity, bird.speed, bird.turnSpeed);
        divingSettings = new BirdSettings(bird.turnAngleIntensity, bird.speed, bird.turnSpeed *1.5f);
        welcomingSettings = new BirdSettings(0f,  bird.speed * 1.3f, bird.turnSpeed * 1.5f);
        goToLandingSettings = new BirdSettings(0f, bird.speed * 1.3f, bird.turnSpeed );
        exitingSettings = new BirdSettings(0f, bird.speed * 1.3f, bird.turnSpeed);
        LandedSettings = new BirdSettings(0f, 0f, 0f);
    }
}
