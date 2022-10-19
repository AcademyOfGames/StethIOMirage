using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Remoting.Messaging;
using Unity.Mathematics;
using UnityEngine;
using UnityEngine.PlayerLoop;
using Random = UnityEngine.Random;

public class SwanMovement : MonoBehaviour
{
    //movement
    private float _dodgeTurn;
    private float _dodgeGroundTilt;
    private float _randomFlyUpAmount;
    private float _sway;
    private float _randomTurn;
    private float _turnBlend = .4f;
    private bool _randomTurning;
    private bool _randomVertical;
    private bool _turningAround;
    private float _turningAroundturn;
    private bool _landing;
    private float _initialFlyRange;

    public bool goToPlayer;
    private float distance;
    public float _randomSwaySpeed = 1f;
    private bool foundLandingSpot;
    [HideInInspector]
    public Animator anim;
    
    //movement tuning
    public float _randomSwayIntensity = 1f;
    public float tiltIntensity = 4f;
    public float forwardSpeed;
    public float flyingRange;
    public Transform player;
     Vector3 landingSpot;
    public float closeFlyRange;

    public Transform testCube;
    public Vector3 randomVectorMultiplier;
    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
        _initialFlyRange = flyingRange;

        StartCoroutine("RandomBehaviors");
    }

    // Update is called once per frame
    void Update()
    {
        if (_landing) return;

        transform.Translate(Vector3.forward * forwardSpeed * Time.deltaTime);
        
        
        if (goToPlayer)
        {
            transform.LookAt(landingSpot);
            return;
        }
        
        float totalTurn = _dodgeTurn + _sway + _randomTurn + _turningAroundturn;
        
        transform.Rotate(Vector3.up * totalTurn);

        Vector3 tilt = transform.eulerAngles;
        float totalTilt = Mathf.Clamp(totalTurn*tiltIntensity, -30, 30);
        tilt.z = totalTilt;
        tilt.x = _dodgeGroundTilt + _randomFlyUpAmount;
        transform.rotation = Quaternion.Euler(tilt);

        DodgeAhead();
    }

    IEnumerator RandomBehaviors()
    {
        yield return new WaitForSeconds(Random.Range(3,8));
        int dice = Random.Range(0, 2);
        if (dice == 0)
        {
            StartCoroutine("RandomVertical");
        }
        else
        {
            StartCoroutine("RandomTurn");

        }
        
        StartCoroutine("RandomBehaviors");
    }

    IEnumerator RandomTurn()
    {
        if (_randomTurning) yield break;
        _randomTurning = true;

        float turnGoal = Random.Range(-.5f, .5f);
        float turnSpeed = Random.Range(.1f, .3f);
        float timePassed = 0;
        
        while (timePassed < Mathf.PI)
        {
            timePassed += Time.deltaTime * turnSpeed;
            _randomTurn = Mathf.Lerp(0, turnGoal, Mathf.Sin(timePassed));//something something sine
            yield return new WaitForFixedUpdate();
        }

        _randomTurning = false;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("LandingSpot") && goToPlayer)
        {
            FindObjectOfType<LevelManager>().ShowEndUI();
            anim.SetTrigger("Landing");
            _landing = true;
            Vector3 newRot = transform.localEulerAngles;
            newRot.x = 0;
            transform.localEulerAngles = newRot;
            other.gameObject.GetComponent<Collider>().ClosestPointOnBounds(transform.position);
            
        }
    }


    IEnumerator RandomVertical()
    {
        if (_randomVertical) yield break;
        _randomVertical = true;

        float turnGoal = Random.Range(-30, 30);
        float turnSpeed = Random.Range(.2f, 1.2f);
        float timePassed = 0;
        
        while (timePassed < Mathf.PI)
        {
            timePassed += Time.deltaTime * turnSpeed;
            _randomFlyUpAmount = Mathf.Lerp(0, turnGoal, Mathf.Sin(timePassed));//something something sine
            yield return new WaitForFixedUpdate();
        }

        _randomVertical = false;
    }
    
    private void DodgeAhead()
    {
        Ray forwardRay = new Ray(transform.position, transform.forward);
        
        if(Physics.SphereCast(forwardRay, 3, out RaycastHit hitInfo,  Mathf.Infinity))
        {
            float obstacleTurnAmount = Mathf.Clamp(hitInfo.distance, 0, 20);
            obstacleTurnAmount = (20 - obstacleTurnAmount) / 20f;
            
            float _newTurn =  Mathf.Lerp(0, 15, obstacleTurnAmount);
            _dodgeTurn =Mathf.Lerp(_dodgeTurn, _newTurn, _turnBlend);

            float _newFlyAmount = Mathf.Lerp(0, 2, obstacleTurnAmount);
            _dodgeGroundTilt = Mathf.Lerp(_dodgeGroundTilt, _newFlyAmount, _turnBlend);
        }
    }

    private void FixedUpdate()
    {
        RandomDirectionSway();

        distance = Vector3.Distance(player.position, transform.position);
        if (distance > flyingRange)
        {
            StartCoroutine("TurnAround");
        }
    }

    IEnumerator TurnAround()
    {
        if (_turningAround) yield break;
        _turningAround = true;

        Vector3 direction = (player.position - transform.position).normalized;
        Quaternion rotationGoal = Quaternion.LookRotation(direction);

        float turnSpeed = Random.Range(.06f, .12f);

        print("angle checking Vector3.Angle(transform.localEulerAngles,rotationGoal.eulerAngles) " +
              Vector3.Angle(transform.localEulerAngles, rotationGoal.eulerAngles) + ": " + transform.localEulerAngles + " vs "+ rotationGoal.eulerAngles);
            
        while(Vector3.Angle(transform.localEulerAngles,rotationGoal.eulerAngles) > 70)
        //while (transform.eulerAngles.y % rotationGoal.eulerAngles.y + 10 == 0 || transform.eulerAngles.y % rotationGoal.eulerAngles.y  - 10 == 0 )
        {
            print("Vector3.Angle(transform.localEulerAngles,rotationGoal.eulerAngles) " +

                  Vector3.Angle(transform.localEulerAngles, rotationGoal.eulerAngles) + ": " + transform.localEulerAngles + " vs "+ rotationGoal.eulerAngles);

            print("angled");
            _turningAroundturn = turnSpeed;
            //transform.rotation = Quaternion.RotateTowards(transform.rotation, rotationGoal, turnSpeed * Time.deltaTime);
            yield return new WaitForFixedUpdate();
        }
        while (turnSpeed <= 0 )
        {
            turnSpeed -= Time.deltaTime;
            _turningAroundturn = turnSpeed;
            print("turn speed slowing" + turnSpeed);

            yield return new WaitForFixedUpdate();
        }
        _turningAroundturn = 0;

        ResetTurnAround();
    }
    
    void ResetTurnAround(){    
        print("Turning around false");
        _turningAround = false;
    }
    
    void RandomDirectionSway()
    {
        _sway = Mathf.Sin(Time.time * _randomSwaySpeed)* _randomSwayIntensity;
    }

    public void FlapWings()
    {
        anim.SetTrigger(("Flap"));
    }

    public void AdjustHeartRateInfluence(float heartRateProgress, float heartRate)
    {
        anim.speed = (heartRate / 90f )*1.5f;
        FlapWings();

        flyingRange = Mathf.Lerp(_initialFlyRange, closeFlyRange,heartRateProgress);
    }
    
    public void FindSpotNearPlayer(float lookDownModifier)
    {
        goToPlayer = true;

        if (foundLandingSpot) return;
        Vector3 randomVector = player.forward;
        randomVector.y -= lookDownModifier;
        
        RaycastHit hit;
        if (Physics.Raycast(player.position, randomVector,out hit, 20))
        {
            landingSpot = hit.point;
            foundLandingSpot = true;
            
            if (testCube == null) return;
            Instantiate(testCube, hit.point, Quaternion.identity);
        }
        else
        {
            FindSpotNearPlayer( lookDownModifier - 1f);
        }

        Ray ray = new Ray(player.position, randomVector);
        Debug.DrawRay(player.position, randomVector);
            
    }
}
