using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class BreathStatsTracker : MonoBehaviour
{
    public AudioClip[] breathAudios;

    private AudioSource breathSound;

    private int breathSoundIndex;

    public bool breathingSound = true;

    public AudioClip inhaleClip;
    public AudioClip exhaleClip;

    private float initialBreathVolume;
    // Start is called before the first frame update
    void Start()
    {
        breathSound = GetComponent<AudioSource>();
        initialBreathVolume = breathSound.volume;
        
        breathSound.clip = inhaleClip;
        breathSound.Play();
        StartCoroutine("Breath");

    }

    IEnumerator Breath()
    {
        float taperTime = 3;
        float breathTime = LevelSettings.Instance.levelInhaleTarget - taperTime;
        yield return new WaitForSeconds(breathTime);

        while (taperTime >= 0)
        {
            breathSound.volume = Mathf.Lerp(0, breathSound.volume, taperTime);
            taperTime -= Time.deltaTime;
            yield return null;

        }
        yield return new WaitForSeconds(breathTime/1.5f);
        breathSound.clip = exhaleClip;
        breathSound.Play();
        breathSound.volume = initialBreathVolume;
        
        taperTime = 3;
        breathTime = LevelSettings.Instance.levelExhaleTarget - taperTime;
        yield return new WaitForSeconds(breathTime);
        
        while (taperTime >= 0)
        {
            breathSound.volume = Mathf.Lerp( 0, breathSound.volume,taperTime);
            taperTime -= Time.deltaTime;
            yield return null;
        }
        yield return new WaitForSeconds(breathTime/1.5f);

        breathSound.volume = initialBreathVolume;
        breathSound.clip = inhaleClip;
        breathSound.Play();        
        
        StartCoroutine("Breath");
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
