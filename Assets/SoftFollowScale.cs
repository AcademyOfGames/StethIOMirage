using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoftFollowScale : MonoBehaviour
{
    public Transform target;
    public float followIntensity = 0.1f;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.localScale = Mathf.Lerp(transform.localScale.x, target.localScale.x, followIntensity * Time.deltaTime ) * Vector3.one;
    }
}
