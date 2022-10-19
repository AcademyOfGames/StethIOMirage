using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TransformUtils : MonoBehaviour
{
public bool forceLocalPos;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if(forceLocalPos)
        {
            transform.localPosition = new Vector3(-0.810000002f,-0.0080000005f,-0.331f);
        }
    }
}
