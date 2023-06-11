using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class DandelionController : MonoBehaviour
{
    public ParticleSystem _particleSystem;
    public MQTTDataVisualizer _visualizer;
    public TMP_Text countdownText;
    public GameObject startButton;

    //.2 to .03
    public float startPos = 0.2f;
    public float endPos = 0.03f;
    public float lerpTime = 3f;

    private float currentLerpTime;
    private bool isLerping = false;

    public float maxBreathCapacity; // Set your max capacity
    public float minBreathCapacity; // Set your min capacity
    public float currentBreathLevel; // Update this in real time

    private float breathPercent; // Percent of total lung capacity exhaled in last second
    private float lastBreathLevel; // Breath level of last second
    private float lastBreathPercent;

    private float savedPercent; 

    private bool buttonPressed = false;

    private Vector3 velocity = Vector3.zero;

    void Start()
    {
        //ResetLerp();
    }

    void Update()
    {
        if (isLerping)
        {
            // Increment currentLerpTime over time
            currentLerpTime += UnityEngine.Time.deltaTime;
            if (currentLerpTime > lerpTime)
            {
                currentLerpTime = lerpTime;
            }

            // Calculate the percentage completed
            float perc = currentLerpTime / lerpTime;

            // Lerp the position
            Vector3 newPos = new Vector3(transform.localPosition.x, transform.localPosition.y, Mathf.Lerp(startPos, endPos, perc));
            transform.localPosition = newPos;

            // If the lerp is finished, reset
            if (perc >= 1f)
            {
                ResetLerp();
            }
        }

        if (Input.GetKeyDown(KeyCode.Space)) // Change this to whatever button you want
        {
            StartCoroutine(StartCountdown());
        }

        if (buttonPressed)
        {
            

            //// Limit the breathPercent to a maximum of 80%
            //breathPercent = Mathf.Min(breathPercent, 0.8f);

            //// If the breathPercent has increased since the last frame, move the force field
            //if (breathPercent > lastBreathPercent)
            //{
            //    // Calculate the movement amount as a proportion of the total possible movement
            //    float movementAmount = (breathPercent / 0.8f) * (startPos - endPos);

            //    // Calculate the target position
            //    Vector3 targetPos = new Vector3(transform.localPosition.x, transform.localPosition.y, startPos - movementAmount);

            //    // Interpolate the movement of the force field
            //    float smoothTime = 0.3f; // Adjust this value to your liking
            //    transform.localPosition = Vector3.SmoothDamp(transform.localPosition, targetPos, ref velocity, smoothTime);

            //    transform.localPosition = targetPos;
            //}         

            //// Update lastBreathLevel and lastBreathPercent for the next frame
            //lastBreathLevel = currentBreathLevel;
            //lastBreathPercent = breathPercent;
        }
    }

    void ResetLerp()
    {
        isLerping = true;
        currentLerpTime = 0f;

        // Reset the z position to the start position
        Vector3 resetPos = new Vector3(transform.localPosition.x, transform.localPosition.y, startPos);
        transform.localPosition = resetPos;
        _particleSystem.Play();
        
    }

    IEnumerator StartCountdown()
    {
        Vector3 resetPos = new Vector3(transform.localPosition.x, transform.localPosition.y, startPos);
        transform.localPosition = resetPos;
        _particleSystem.Play();


        countdownText.text = "Deep Breath In!";
        yield return new WaitForSeconds(1f);

        countdownText.text = "3";
        yield return new WaitForSeconds(1f);

        countdownText.text = "2";
        yield return new WaitForSeconds(1f);

        currentBreathLevel = _visualizer.DATA_BreathVolume;
        lastBreathLevel = _visualizer.DATA_BreathVolume;
        maxBreathCapacity = lastBreathLevel;
        minBreathCapacity = _visualizer.minBreathVolume;
        lastBreathPercent = 100f;
        print ("Full Breath Level: "+lastBreathLevel +"  Full Breath Percentage: " + lastBreathPercent); 
        print("Max: " + maxBreathCapacity + "  Min: " + minBreathCapacity);

        countdownText.text = "1";
        yield return new WaitForSeconds(1f);

        countdownText.text = "Breath Out!";       
        yield return new WaitForSeconds(1f);

        // Here you'll need to update 'currentBreathLevel' based on your actual breath tracking
        currentBreathLevel = _visualizer.DATA_BreathVolume;
        maxBreathCapacity = lastBreathLevel;
        minBreathCapacity = _visualizer.minBreathVolume;
        // Calculate breathPercent
        breathPercent = (lastBreathLevel - currentBreathLevel) / (maxBreathCapacity - minBreathCapacity);
        print("Empty Breath Level: " + currentBreathLevel + "  Empty Breath Percentage: " + breathPercent);
        print("Max: " + maxBreathCapacity + "  Min: " + minBreathCapacity);
        savedPercent = breathPercent;
        buttonPressed = true;

        

        // If the breathPercent has increased since the last frame, move the force field
        if (breathPercent > 0f)
        {
            // Limit the breathPercent to a maximum of 80%
            breathPercent = Mathf.Min(breathPercent, 0.8f);

            // Calculate the movement amount as a proportion of the total possible movement
            float movementAmount = (breathPercent / 0.8f) * (startPos - endPos);

            // Calculate the target position
            Vector3 targetPos = new Vector3(transform.localPosition.x, transform.localPosition.y, startPos - movementAmount);

            // Interpolate the movement of the force field
            float smoothTime = 0.3f; // Adjust this value to your liking
            transform.localPosition = Vector3.SmoothDamp(transform.localPosition, targetPos, ref velocity, smoothTime);
            print("New Forcefield Pos: " + targetPos.z);
            transform.localPosition = targetPos;
        }

        // Update lastBreathLevel and lastBreathPercent for the next frame
        lastBreathLevel = currentBreathLevel;
        lastBreathPercent = breathPercent;

        StartCoroutine(OneSecondBreath());

        
    }

    IEnumerator OneSecondBreath()
    {
        yield return new WaitForSeconds(1f);
        buttonPressed = false;
        if (savedPercent > 0f)
        {
            countdownText.text = $"You blew out {savedPercent * 100:F2}% of your total lung capacity!";
        }
        //countdownText.text = "You blew out "+savedPercent*100+"% of your total lung capacity!";
        


        startButton.SetActive(true);
    }

    public void ActivateDandelion()
    {
        StartCoroutine(StartCountdown());
    }
}
