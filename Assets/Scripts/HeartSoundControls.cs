using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class HeartSoundControls : MonoBehaviour
{
    public delegate void HeartBeat();

    public static event HeartBeat OnBeat;
    private HeartStatsTracker heart;

    public AudioSource heartS1;
    public AudioSource heartS2;

    private HeartButterflyMovement[] butterflies;

    private float heartSpeedRatio;

    private bool heartSounds = true;
    public Image heartImage;

    public ToggleFeatures toggleFeatures;
    // Start is called before the first frame update
    void Start()
    {
        butterflies = FindObjectsOfType<HeartButterflyMovement>();
        heart = FindObjectOfType<HeartStatsTracker>();
        Invoke(nameof(WaitAndStartHeart),.3f);
    }

   
    void WaitAndStartHeart()
    {
        StartCoroutine(nameof(WaitTilNextHeartBeat));
    }

    IEnumerator WaitTilNextHeartBeat()
    {
        heartSpeedRatio = (heart.currentHeartRate - 50) / 50;
        StartCoroutine(nameof(BeatHeart));
        
        yield return new WaitForSeconds(60/heart.currentHeartRate );
        StartCoroutine(nameof(WaitTilNextHeartBeat));
        
    }
    IEnumerator BeatHeart()
    {
        OnBeat?.Invoke();
        
        heartS1.Play();

        yield return new WaitForSeconds(Mathf.Lerp(.38f,.2f,heartSpeedRatio));
        heartS2.Play();
    }

    public void ToggleHeartbeat()
    {
        if (heartSounds == true)
        {
            heartSounds = false;
            heartS1.volume = 0f;
            heartS2.volume = 0f;
            heartImage.color = toggleFeatures.offColour;
        }
        else
        {
            heartSounds = true;
            heartS1.volume = 0.8f;
            heartS2.volume = 0.8f;
            heartImage.color = toggleFeatures.onColour;
        }
    }

}
