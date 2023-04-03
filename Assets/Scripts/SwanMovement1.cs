using System.Collections;
using UnityEngine;

public class SwanMovement1 : MonoBehaviour
{
    // Flying
    private Transform t;
    private Vector3 lastPos;

    public Transform flightPath;
    private float minPathHeight;
    public float maxPathHeight;
    private float currentPathHeight;

    private float initialFlightHeight;
    Vector3 newPos;
    public float sineAmplitude;
    public float sineFrequency;
    
    //Rotation
    private Vector3 direction;
    private Quaternion rotationGoal;
    private float currentTurnSpeed;
    
    private Vector3 previousPos;

    // Animation
    private bool gliding;

    private float flappngRate = 1;
    private float originalFlappngRate = 1;

    private float originalGlidingRate = 5;
    private float glidingRate = 5;
    
    private bool foundLandingSpot;

    private bool _landing;

    [HideInInspector]
    public Animator anim;

    //Data
    private HeartStatsTracker heart;
    
    

    void Start()
    {
        heart = FindObjectOfType<HeartStatsTracker>();
        anim = GetComponent<Animator>();
        t = transform;
        InvokeRepeating(nameof(AdjustHeartRateInfluence),2,3);
    }

    private void OnEnable()
    {
        HeartSoundControls.OnBeat += FlapWings;
    }

    private void OnDisable()
    {
        HeartSoundControls.OnBeat -= FlapWings;
    }
    
   private void FixedUpdate()
   {
       CalculateFlightHeight();
       FaceTowardMovement();
   }
   
    void FaceTowardMovement()
    {
        Quaternion newDir = Quaternion.LookRotation(t.position - lastPos);;
        t.rotation = Quaternion.Lerp(t.rotation, newDir, .01f);
        lastPos = t.position;
    }

    public void FlapWings()
    {
        float heartSpeed =  Mathf.Lerp(1f, 2.8f, (heart.currentHeartRate - 50) / 50) ;
        anim.SetFloat("FlapSpeed", heartSpeed);
        anim.SetTrigger(("Flap"));
    }

    public void AdjustHeartRateInfluence()
    {
        anim.speed = heart.currentHeartRate / 90f *1.5f;
    }

    void CalculateFlightHeight()
    {
        newPos = flightPath.position;

        float heartRateHeight = Mathf.Lerp(maxPathHeight,0,  (heart.currentHeartRate - 60) / 40);
        float sineHeight = Mathf.Sin(Time.time * sineFrequency) * sineAmplitude;   
        
        newPos.y = initialFlightHeight + heartRateHeight + sineHeight;
        print("heartRateHeight " + heartRateHeight + " sineHeight " + sineHeight);
        flightPath.position = newPos;
        
    }

}

