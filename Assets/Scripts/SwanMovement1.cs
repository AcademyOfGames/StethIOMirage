using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using UnityEngine;
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

    
    //Rotation
    private Vector3 direction;
    private Quaternion rotationGoal;
    private float currentTurnSpeed;

    //Orbiting
    public float orbitSpeed;
    public float minOrbitRadius;
    private Vector3 previousPos;

    // Waypoints
    public Transform wayPointVolume;
    public Transform landingSpot;
    public Transform handLandingSpot;

    public Vector3 currentWaypoint;

    // Animation
    private bool gliding;

    // Testing
    public GameObject testcube;
    public GameObject currentCube;

    //UI

    private float flappngRate = 1;
    private float originalFlappngRate = 1;

    private float originalGlidingRate = 5;
    private float glidingRate = 5;

    public float maxSpeed;

    private bool goToPlayer;
    private bool foundLandingSpot;


    private static readonly int OnGround = Animator.StringToHash("OnGround");
    private static readonly int Eating = Animator.StringToHash("Eating");
    private static readonly int Flap = Animator.StringToHash("Flap");
    private static readonly int Glide = Animator.StringToHash("Glide");

    private bool _landing;

    public Animator anim;
    //private BirdAudioManager birdAudio;

    //public StumpBehavior _stump;

    void Start()
    {
        anim = GetComponent<Animator>();
        //birdAudio = GetComponent<BirdAudioManager>();
        birdState = GetComponent<BirdStateChanger>();

        // Spawn a new waypoint at the beginning of the game
        FindNewWaypoint();
    }



    void SwitchAnimation(string triggerName)
    {
        if (birdState.currentState == BirdStateChanger.BirdState.Landing && !triggerName.Equals("TakeOff")) return;
        anim.SetTrigger(triggerName);

    }

    void FindNewWaypoint()
    {
        var pos = transform.position;
        // Pick a random point in a sphere of 1
        Vector3 randomPos = new Vector3();
        var localScale = wayPointVolume.localScale;
        
        randomPos.x = Random.Range(pos.x - localScale.x, pos.x + localScale.x);
        randomPos.y = Random.Range(pos.y - localScale.y, pos.y + localScale.y);
        randomPos.z = Random.Range(pos.z - localScale.z, pos.z + localScale.z);
        
        // Multiply the height * a random number between minHeight and maxHeight
        currentWaypoint = target.position + randomPos + player.transform.forward * 5;

        // For testing spawn a cube at the new waypoint
        if (currentCube != null) Destroy(currentCube);

        if (testcube != null)
        {
            currentCube = Instantiate(testcube, currentWaypoint, Quaternion.identity);
            currentCube.transform.localScale *= .5f;
        }
    }

    public IEnumerator FacePlayer()
    {
        rotationGoal = Quaternion.LookRotation(target.position - transform.position);
        float timePassed = 0;


        while (timePassed < 1)
        {
            Vector3 tempRotation = transform.eulerAngles;
            tempRotation.y = Mathf.Lerp(tempRotation.y, rotationGoal.eulerAngles.y, timePassed);
            tempRotation.z = 0;

            transform.eulerAngles = tempRotation;
            timePassed += Time.deltaTime * .3f;
            yield return new WaitForFixedUpdate();
        }
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

    // Update is called once per frame
    void Update()
    {
        if (_landing) return;

        switch (birdState.currentState)
        {
            case BirdStateChanger.BirdState.Hunting:
                BasicFlying();
                break;

            case BirdStateChanger.BirdState.GoToLanding:

                BasicFlying();
                break;

            case BirdStateChanger.BirdState.Landing:
                //print("prey " + prey.name);



                //transform.position = Vector3.MoveTowards(transform.position, landingSpot.position + Vector3.up * .1f, .4f * Time.deltaTime);
                // FaceTowardMovement();
                ResetXAngle();
                break;

            case BirdStateChanger.BirdState.Welcoming:
                turnSpeed *= 1.01f;
                turnSpeed += Mathf.Lerp(.02f, 0, Vector3.Distance(transform.position, player.position) * .06f);

                BasicFlying();
                break;

            case BirdStateChanger.BirdState.Diving:
                //currentWaypoint.y -= Vector3.Distance(prey.position, transform.position);
                BasicFlying();
                turnSpeed *= 1.01f;
                //turnSpeed += Mathf.Lerp(.1f, 0, Vector3.Distance(transform.position, prey.position) * .5f);
                print("No where to dive to");
                if (speed < maxSpeed)
                {
                    speed *= 1.005f;
                }
                break;
            case BirdStateChanger.BirdState.Orbiting:
                OrbitFlying();
                break;

            case BirdStateChanger.BirdState.Exiting:
                break;

            case BirdStateChanger.BirdState.TakeOff:
                BasicFlying();
                break;
            default:
                break;
        }
    }


    IEnumerator SloMoForSeconds()
    {
        Time.timeScale = .1f;
        yield return new WaitForSeconds(1.3f);
        Time.timeScale = 1;

    }
    
    private void ResetXAngle()
    {
        Vector3 targetRotation = transform.eulerAngles;
        //move x rotation until it's 0
        if (targetRotation.x > 230 && targetRotation.x < 360)
        {
            targetRotation.x += 20 * Time.deltaTime;
            transform.eulerAngles = targetRotation;
        }
        else
        {
            targetRotation.x = 0f;
            transform.eulerAngles = Vector3.Lerp(transform.eulerAngles, targetRotation, .1f);
        }
    }
    public void UpdateSettings(BirdStateChanger.BirdSettings newSettings)
    {
        //go through each bird movement variable and switch it to the new setting
        turnAngleIntensity = newSettings.turnAngleIntensity;

        speed = newSettings.speed;
        turnSpeed = newSettings.turnSpeed;
    }



    private void BasicFlying()
    {
        ForwardMovement();
    }

    private void OrbitFlying()
    {
        FaceTowardMovement();
        Tilt();
    }

    private void OrbitRotation()
    {
        var position = transform.position;
        Vector3 dir = position - previousPos;
        rotationGoal = Quaternion.LookRotation(dir);

        transform.rotation = Quaternion.Slerp(transform.rotation, rotationGoal, .04f);
        transform.Translate(Vector3.forward * .4f * Time.deltaTime);

        previousPos = position;
    }

    void FaceTowardMovement()
    {
        if (Vector3.Distance(player.position, transform.position) > minOrbitRadius)
        {

            transform.RotateAround(player.position, Vector3.up, orbitSpeed * Time.deltaTime);
            OrbitRotation();
        }
        else
        {

            transform.Translate(Vector3.forward * speed * Time.deltaTime);

            if (transform.position.y < 4f)
            {
                transform.Rotate(Vector3.right * -.3f);
            }

        }
    }
    private void Tilt()
    {
        // Compare the forward angle of the bird and the direction of the waypoint
        float angle = Vector3.SignedAngle(transform.forward, direction, Vector3.up);
        angle *= turnAngleIntensity;


        // Angle bird towards waypoint
        if (Mathf.Abs(angle) > 14) SwitchAnimation("Glide");

        transform.Rotate(Vector3.forward, angle);

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
    private void ForwardMovement()
    {
        Transform t = transform;

        t.Translate(Vector3.forward * speed * Time.deltaTime);

        direction = (currentWaypoint - t.position).normalized;
        Vector3 eulerRotationGoal = Quaternion.LookRotation(direction).eulerAngles;

        Quaternion flatVersion = Quaternion.Euler(eulerRotationGoal.x,
                                                  eulerRotationGoal.y,
                                                  t.eulerAngles.z);

        t.rotation = Quaternion.Slerp(
            t.rotation,
            flatVersion,
            turnSpeed);

        Vector3 tilt = t.eulerAngles;
        tilt.z = TiltWithReturn();
        t.rotation = Quaternion.Euler(tilt);

        if (transform.position.y < 4f)
        {
            transform.Rotate(Vector3.right * -.3f);
        }

    }
    
    
    public void FlapWings()
    {
        anim.SetTrigger(("Flap"));
    }

    public void AdjustHeartRateInfluence(float heartRateProgress, float heartRate)
    {
        anim.speed = (heartRate / 90f )*1.5f;
        FlapWings();

        //flyingRange = Mathf.Lerp(_initialFlyRange, closeFlyRange,heartRateProgress);
    }

    public void SetLandingSpot()
    {
        currentWaypoint = landingSpot.position;
        goToPlayer = true;
        foundLandingSpot = true;
        birdState.SwitchState(BirdStateChanger.BirdState.GoToLanding);

    }
    public void FindSpotNearPlayer(float lookDownModifier)
    {
        goToPlayer = true;

        if (foundLandingSpot) return;

        Vector3 randomVector = player.forward;
        randomVector.y -= lookDownModifier;
        
        RaycastHit hit;
        if (Physics.Raycast(player.position, randomVector,out hit, 25))
        {
            if (hit.collider.gameObject.CompareTag("LandingSpot"))
            {


                landingSpot.position = hit.point + Vector3.down * 3f;
                currentWaypoint = landingSpot.position;

               // Instantiate(testcube, landingSpot.position, Quaternion.identity);

                foundLandingSpot = true;
            }
            else
            {
                FindSpotNearPlayer( lookDownModifier - 1f);

            }

        }
        else
        {
            FindSpotNearPlayer( lookDownModifier - 1f);

        }
        birdState.SwitchState(BirdStateChanger.BirdState.GoToLanding);

            
    }
    
}

