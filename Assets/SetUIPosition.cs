using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetUIPosition : MonoBehaviour
{
    public GameObject PlayerObject;
    public GameObject UIObject;

    public Vector3 desiredOffset;

    // Start is called before the first frame update
    void Start()
    {
        UIObject.transform.position = PlayerObject.transform.position + desiredOffset;
    }
    

    // Update is called once per frame
    void Update()
    {
        
    }
}
