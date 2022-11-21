using System;
using System.Collections;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;
using Random = UnityEngine.Random;

public class SwanMovement1 : MonoBehaviour
{
    public BirdStateChanger birdState;
    //Custom behavior

    // Flying
    public float turnSpeed;
    public float speed;
    public Transform target;
    public Transform player;
    public float turnAngleIntensity;
    private Transform t;
    
    //Rotation
    private Vector3 direction;
    private Quaternion rotationGoal;
    private float currentTurnSpeed;
    
    private Vector3 previousPos;

    // Waypoints
    public Transform wayPointVolume;
    public Transform landingSpot;
    public Transform handLandingSpot;

    public Vector3 currentWaypoint;

    // Animation
    private bool gliding;

    private float flappngRate = 1;
    private float originalFlappngRate = 1;

    private float originalGlidingRate = 5;
    private float glidingRate = 5;
    
    private bool goToPlayer;
    private bool foundLandingSpot;

    private bool _landing;

    public Animator anim;

    //Data
    private HeartStatsTracker heart;

    void Start()
    {
        heart = FindObjectOfType<HeartStatsTracker>();
        anim = GetComponent<Animator>();
        //birdAudio = GetComponent<BirdAudioManager>();
        birdState = GetComponent<BirdStateChanger>();
        t = transform;
        InvokeRepeating(nameof(AdjustHeartRateInfluence),2,3);

    }

    void SwitchAnimation(string triggerName)
    {
        if (birdState.currentState == BirdStateChanger.BirdState.Landing && !triggerName.Equals("TakeOff")) return;
        anim.SetTrigger(triggerName);
    }
    
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("LandingSpot"))
        {
            birdState.SwitchState(BirdStateChanger.BirdState.Landing);        }
    }    
    
    public void BirdLanded( )
    {
            print("bird landed called");
            FindObjectOfType<LevelManager>().ShowEndUI();
            anim.SetTrigger("Landing");
            _landing = true;
            Vector3 newRot = transform.localEulerAngles;
            newRot.x = 0;
            transform.localEulerAngles = newRot;
            //other.gameObject.GetComponent<Collider>().ClosestPointOnBounds(transform.position);
    }
    

   private void FixedUpdate()
   {
       FaceTowardMovement();
   }
   public void UpdateSettings(BirdStateChanger.BirdSettings newSettings)
    {
        //go through each bird movement variable and switch it to the new setting
        turnAngleIntensity = newSettings.turnAngleIntensity;

        speed = newSettings.speed;
        turnSpeed = newSettings.turnSpeed;
    }

   private Vector3 lastPos;
    void FaceTowardMovement()
    {
        Quaternion newDir = Quaternion.LookRotation(t.position - lastPos);;
        t.rotation = Quaternion.Lerp(t.rotation, newDir, .01f);
        lastPos = t.position;
    }

    private float TiltWithReturn()
    {
        // Compare the forward angle of the bird and the direction of the waypoint
        float angle = Vector3.SignedAngle(transform.forward, direction, Vector3.up);
        angle *= turnAngleIntensity;
        float tempAngle = transform.eulerAngles.z;

        if (tempAngle > 180)
        {
            tempAngle -= 360;
        }
        angle = Mathf.Lerp(tempAngle, angle, .004f);
        if (Mathf.Abs(angle) > 20) SwitchAnimation("Flap");

        return angle;

    }

    public void FlapWings()
    {
        anim.SetTrigger(("Flap"));
    }

    public void AdjustHeartRateInfluence()
    {
        anim.speed = heart.currentHeartRate / 90f *1.5f;
        //flyingRange = Mathf.Lerp(_initialFlyRange, closeFlyRange,heartRateProgress);
    }
}

