using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Hands.Samples.VisualizerSample;

public class HandUI : MonoBehaviour
{

    public GameObject WristUI;
    public GameObject PalmUI;

    private static HandUI instance;

    public static HandUI Instance { get => instance; set => instance = value; }


    private void Awake()
    {
        instance = this;
    }

}
