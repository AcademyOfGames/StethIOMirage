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

    //effects
    public Volume postEffects;
    private float initialScatter;
    private float initialIntensity;
    private float initialThreshold;

    void Start()
    {
        anim = GetComponent<Animator>();
        //birdAudio = GetComponent<BirdAudioManager>();
        birdState = GetComponent<BirdStateChanger>();
        t = transform;
        

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

    public void AdjustHeartRateInfluence(float heartRate)
    {
        anim.speed = (heartRate / 90f )*1.5f;
        FlapWings();

        //flyingRange = Mathf.Lerp(_initialFlyRange, closeFlyRange,heartRateProgress);
    }

    public void SetLandingSpot()
    {
        StartCoroutine("StartGlow");
    }

    IEnumerator StartGlow()
    {
        Bloom b;
        postEffects.gameObject.SetActive(true);
        float timeLeft = 1f;
        postEffects.profile.TryGet(out b);
        
        initialIntensity = b.intensity.value ;
        initialScatter = b.scatter.value;
        initialThreshold = b.threshold.value;
        
        while (timeLeft >= 0)
        {
            timeLeft -= Time.deltaTime*.11f;
            
            b.intensity.value = Mathf.Lerp(80,initialIntensity, timeLeft);
            b.scatter.value = Mathf.Lerp(1,initialScatter, timeLeft);
            b.threshold.value = Mathf.Lerp(.25f,initialThreshold, timeLeft);
            
            yield return new WaitForFixedUpdate();
        }
        
        FindObjectOfType<SceneControls>().BackToLobby();
    }
    
    public IEnumerator SoftGlow()
    {
        Bloom b;
        postEffects.gameObject.SetActive(true);
        float timeLeft = 1f;
        postEffects.profile.TryGet(out b);
        
        initialIntensity = b.intensity.value ;
        initialScatter = b.scatter.value;
        initialThreshold = b.threshold.value;

        while (timeLeft >= 0)
        {
            timeLeft -= Time.deltaTime*.3f;
            print(            b.intensity.value);

            b.intensity.value = Mathf.Lerp(2.5f,initialIntensity, timeLeft);
            b.scatter.value = Mathf.Lerp(.45f,initialScatter, timeLeft);
            b.threshold.value = Mathf.Lerp(.7f,initialThreshold, timeLeft);
            
            yield return new WaitForFixedUpdate();
        }
    }

    public IEnumerator BackToNormalGlow()
    {
        Bloom b;
        postEffects.gameObject.SetActive(true);
        float timeLeft = 1f;
        postEffects.profile.TryGet(out b);
        
        initialIntensity = b.intensity.value ;
        initialScatter = b.scatter.value;
        initialThreshold = b.threshold.value;

        while (timeLeft >= 0)
        {
            timeLeft -= Time.deltaTime*.24f;
            
            b.intensity.value = Mathf.Lerp(0,initialIntensity, timeLeft);
            print(            b.intensity.value);
            b.scatter.value = Mathf.Lerp(0,initialScatter, timeLeft);
            b.threshold.value = Mathf.Lerp(0,initialThreshold, timeLeft);
            
            yield return new WaitForFixedUpdate();
        }    
        postEffects.gameObject.SetActive(false);

    }
    
}

