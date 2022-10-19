using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class LakeBehavior : MonoBehaviour
{
private Material lake;
private float timePassed = 0;

private bool smoothing;
    // Start is called before the first frame update
    void Start()
    {
       lake = GetComponent<MeshRenderer>().material;
       Invoke("StartSmoothing", 4);
    }

    void StartSmoothing()
    {
        smoothing = true;
    }
    // Update is called once per frame
    void Update()
    {
        if (!smoothing) return;
        timePassed += Time.deltaTime * .0001f;
        lake.SetFloat("_waveSpeed", Mathf.Lerp(lake.GetFloat("_waveSpeed"), 0, timePassed));
        lake.SetFloat("_waveStrength", Mathf.Lerp(lake.GetFloat("_waveStrength"), 0, timePassed));
        lake.SetFloat("_smoothness", Mathf.Lerp(lake.GetFloat("_smoothness"), 1, timePassed));
        lake.SetFloat("_displacement", Mathf.Lerp(lake.GetFloat("_displacement"), 0, timePassed));
            
        
        

    }
}
