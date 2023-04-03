using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Hands.Samples.VisualizerSample;

public class HandMatChanger : MonoBehaviour
{
    [SerializeField]
    HandVisualizer _handVisualizer;


    [SerializeField]
    Material[] material;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ChangeMaterialTo(int matNumber)
    {
        _handVisualizer.ChangeHandMaterial(material[matNumber]);
    }


}
