using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class BreathStatsTracker : MonoBehaviour
{
    public AudioClip[] breathAudios;

    private AudioSource breathSound;

    private int breathSoundIndex;

    public bool breathingSound = true;

    public AudioClip inhaleClip;
    public AudioClip exhaleClip;

    private float initialBreathVolume;

    public TMP_Text breathPerMinuteUI;
    public TMP_Text breathIndicatorUI;

    private PetalIconMovement petals;

    
    // Start is called before the first frame update
    void Start()
    {
        //petals = FindObjectOfType<PetalIconMovement>();

        breathSound = GetComponent<AudioSource>();
        initialBreathVolume = breathSound.volume;
        
        breathSound.clip = inhaleClip;
        breathSound.Play();
        StartCoroutine(Breath());

        breathPerMinuteUI.text = LevelSettings.Instance.breathsPerMinute.ToString("0.0");

    }

    IEnumerator Breath()
    {
        float holdTime = LevelSettings.Instance.levelInhaleHoldTarget;
        float taperTime = .1f;
        float breathTime = LevelSettings.Instance.levelInhaleTarget - taperTime;
        breathIndicatorUI.text = "Breath In";
        //petals.BreathingIn();

        yield return new WaitForSeconds(breathTime);

        while (taperTime >= 0)
        {
            breathSound.volume = Mathf.Lerp(0, breathSound.volume, taperTime);
            taperTime -= Time.deltaTime;
            yield return null;

        }

        if (holdTime >= 1)
        {
            breathIndicatorUI.text = "Hold";
            yield return new WaitForSeconds(holdTime);
        }
        breathIndicatorUI.text = "Breath Out";
        //petals.BreathingOut();


        breathSound.clip = exhaleClip;
        breathSound.Play();
        breathSound.volume = initialBreathVolume;

        holdTime = LevelSettings.Instance.levelExhaleHoldTarget;
        taperTime = .1f;
        breathTime = LevelSettings.Instance.levelExhaleTarget - taperTime;
        yield return new WaitForSeconds(breathTime);
        
        while (taperTime >= 0)
        {
            breathSound.volume = Mathf.Lerp( 0, breathSound.volume,taperTime);
            taperTime -= Time.deltaTime;
            yield return null;
        }

        if (holdTime >= 1)
        {
            breathIndicatorUI.text = "Hold";
            yield return new WaitForSeconds(holdTime);
        }
        

        breathSound.volume = initialBreathVolume;
        breathSound.clip = inhaleClip;
        breathSound.Play();        
        
        StartCoroutine(Breath());
    }
    
    private void SetUpCorrectBreathAudio()
    {
        
        /*
        for (int i = 0; i < breathAudios.Length; i++)
        {
            if (breathAudios[i].name != LevelSettings.Instance.levelBreathTarget.ToString()) continue;

            breathSoundIndex = i + 2;
            breathSound.clip = breathAudios[breathSoundIndex];
            breathSound.Play();
            break;
        }
        
        InvokeRepeating(nameof(IncreaseBreathSpeed), LevelSettings.Instance.levelTotalTime/3,LevelSettings.Instance.levelTotalTime/3);*/
    }

    void IncreaseBreathSpeed()
    {
        StartCoroutine(nameof(PlayAudioAfterLoopIsDone));
    }

    private IEnumerator  PlayAudioAfterLoopIsDone (){
        while (breathSound.time > .05f)
        {
            yield return null;
        }
        breathSound.Stop();
        if (!breathingSound) yield break;
        
        yield return new WaitForSeconds(.5f);
        breathSoundIndex--;
        breathSound.clip = breathSoundIndex < 0 ? breathAudios[0] : breathAudios[breathSoundIndex];
        breathSound.Play();


    }

    // Update is called once per frame
    void Update()
    {
        
    }

    
}
