using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoftFollow : MonoBehaviour
{
    public Transform uiPos;



    public Transform playerView;
    // Start is called before the first frame update
    void Start()
    {
        //transform.parent = transform.parent.parent;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        transform.LookAt(playerView);
        transform.position = Vector3.Slerp(transform.position, uiPos.position, .07f);
    }
}
