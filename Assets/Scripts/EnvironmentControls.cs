using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;
using UnityEngine.SceneManagement;

public class EnvironmentControls : MonoBehaviour
{
    public Volume postEffects;
    //effects
    private float initialScatter;
    private float initialIntensity;
    private float initialThreshold;

    private AsyncOperation loadOperation;
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    
    public IEnumerator StartGlow()
    {
        loadOperation = SceneManager.LoadSceneAsync("futuristicExamRoom");
        loadOperation.allowSceneActivation = false;
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

        loadOperation.allowSceneActivation = true;
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
            //print(            b.intensity.value);

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
            //print(            b.intensity.value);
            b.scatter.value = Mathf.Lerp(0,initialScatter, timeLeft);
            b.threshold.value = Mathf.Lerp(0,initialThreshold, timeLeft);
            
            yield return new WaitForFixedUpdate();
        }    
        postEffects.gameObject.SetActive(false);

    }
}
