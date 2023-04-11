using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GazePing : MonoBehaviour
{
    public float pingTime = 0.5f;
    private float currentTime = 0;
    Transform cam;

    public float radius = 10;
    
    // Start is called before the first frame update
    void Start()
    {
        cam = Camera.main.transform;
    }

    // Update is called once per frame
    void Update()
    {
        currentTime += Time.deltaTime;

        if (currentTime > pingTime)
        {
            ShootRay();
        }
    }
    
    void ShootRay()
    {
        if (!Physics.SphereCast(cam.position, radius, cam.forward, out RaycastHit hit)) return;
        
        var focusObject = hit.transform.GetComponent<FocusObject>();
        if(focusObject != null)
        {
            focusObject.StartFocus();
        }
    }
}
