using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CustomUI : MonoBehaviour
{
    private Transform ogParent;
    public enum CustomUIType
    {
        Slider
    }

    public CustomUIType uiType;
    public Vector3 originalPos;
    
    // Start is called before the first frame update
    void Start()
    {
        originalPos = transform.position;
        ogParent = transform.parent;
        
    }

    public void Activate(Transform controller)
    {
        if (uiType == CustomUIType.Slider)
        {
            transform.SetParent(controller);
        }
    }
    // Update is called once per frame
    void Update()
    {
        
    }

    public void Deactivate()
    {
        if (uiType == CustomUIType.Slider)
        {
            transform.SetParent(ogParent);
        }
        
    }
}
