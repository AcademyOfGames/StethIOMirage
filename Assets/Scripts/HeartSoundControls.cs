using System.Collections;
using UnityEngine;

public class HeartSoundControls : MonoBehaviour
{
    public delegate void HeartBeat();

    public static event HeartBeat OnBeat;
    private HeartStatsTracker heart;

    public AudioSource heartS1;
    public AudioSource heartS2;

    private HeartButterflyMovement[] butterflies;

    private float heartSpeedRatio;
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
    
}
