using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using UnityEngine;
using Random = UnityEngine.Random;

public class HeartButterflyMovement : MonoBehaviour
{
    public Transform player;
    public Vector2 rangeFromPlayer;
    public float butterflyHeight;

    private Vector3 currentWaypoint;
    //public GameObject testCube;
    private GameObject cube;
    public float speed;

    public float distanceFromWaypoint;

    private Rigidbody rb;

    public float flapStrength;
    public float floatDown;
    public float adjustedStrength;
    public float adjustedGravity;
    public Renderer butterflyRender;
    [ColorUsageAttribute(true,true)]
    public Color shiningColor;

    public float timeTilShine;
    
    private bool shining;

    public GameObject particles;

    private TimePassedTracker timer;

    private Transform t;

    private void Awake()
    {
        t = transform;
        timer = FindObjectOfType<TimePassedTracker>();
        rb = GetComponent<Rigidbody>();
    }

    private void OnEnable()
    {
        HeartSoundControls.OnBeat += HeartBeatFly;
    }    
    
    private void OnDisable()
    {
        HeartSoundControls.OnBeat -= HeartBeatFly;
    }

    // Start is called before the first frame update
    void Start()
    {
        adjustedStrength = Mathf.InverseLerp( 25,20, transform.position.y);
        FindWaypoint();
    }

    void FindWaypoint()
    {
        Destroy(cube);
        Vector3 RandomPos = new Vector3(Random.Range(-rangeFromPlayer.x, rangeFromPlayer.x),
            Random.Range(-butterflyHeight, butterflyHeight),
            Random.Range(-rangeFromPlayer.y, rangeFromPlayer.y));

        currentWaypoint = player.position + RandomPos + player.forward *10f;
       //cube = Instantiate(testCube, currentWaypoint, Quaternion.identity);
    }
    
    // Update is called once per frame
    void FixedUpdate()
    {
        adjustedGravity = Mathf.InverseLerp( 20  + Random.Range(-1,3),33 + Random.Range(0,3), t.position.y);

        var velocity = rb.velocity;
        velocity -= Vector3.up * floatDown * adjustedGravity;
        rb.velocity = velocity;

        Vector3 flatVelocity = new Vector3(velocity.x, 0f, velocity.z);
        t.rotation = Quaternion.LookRotation(flatVelocity);

        Vector3 movementDir =   currentWaypoint - t.position;
        
        rb.AddForce(movementDir.normalized * speed * Time.deltaTime);
        
        if (Vector3.Distance(currentWaypoint, t.position) < distanceFromWaypoint)
        {
            FindWaypoint();
        }

        if (timer.timeLeft < timeTilShine && !shining)
        {
            StartCoroutine("ShiningLerp");
        }
    }

    IEnumerator ShiningLerp()
    {
        float lerpTime = 0;
        shining = true;

        particles.SetActive(true);
        while (lerpTime<= 1)
        {
            Color currentColor = butterflyRender.material.GetColor("_EmissionColor");
            lerpTime += Time.deltaTime*.01f;
            butterflyRender.material.SetColor("_EmissionColor", Color.Lerp(currentColor,shiningColor, lerpTime));

            yield return new WaitForEndOfFrame();
        }  
    }
    public void HeartBeatFly()
    {
        t.GetChild(0).GetComponent<Animation>().Play();
        adjustedStrength = Mathf.InverseLerp(38+ Random.Range(-2,3),21, t.position.y);
        rb.AddForce(Vector3.up * flapStrength * adjustedStrength* adjustedStrength);
        
    }
}
