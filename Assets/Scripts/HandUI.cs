using System;
using System.Collections;
using System.Collections.Generic;
using Unity.XR.CoreUtils;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.Hands;
using UnityEngine.XR.Hands.Samples.VisualizerSample;
using UnityEngine.XR.Management;

public class HandUI : MonoBehaviour
{
    private bool HandUIIsSet = false;

    public GameObject handVisualizer;

    public GameObject WristUI;
    public GameObject PalmUI;

    public RectTransform WristUIPos;
    public RectTransform PalmUIPos;

    public GameObject LeftController;
    private bool connectedToHands = false;
    private bool connectedToControllers = false;

    XRHandSubsystem m_Subsystem;

    private static HandUI instance;

    public static HandUI Instance { get => instance; set => instance = value; }


    private void Awake()
    {
        instance = this;
    }

    private void Start()
    {
        m_Subsystem =
            XRGeneralSettings.Instance?
                .Manager?
                .activeLoader?
                .GetLoadedSubsystem<XRHandSubsystem>();

        if (m_Subsystem != null)
        {
            m_Subsystem.trackingAcquired += OnHandTracked;
            //m_Subsystem.updatedHands += SetHandUI;
            m_Subsystem.trackingLost += OnTrackingLost;
        }

        if (SceneManager.GetActiveScene().name == "futuristicExamRoom")
        {
            HandUIIsSet = true;
        }

    }

    private void SetHandUI(XRHandSubsystem subsystem,
                  XRHandSubsystem.UpdateSuccessFlags updateSuccessFlags,
                  XRHandSubsystem.UpdateType updateType)
    {
        switch (updateType)
        {
            case XRHandSubsystem.UpdateType.Dynamic:            
                break;
            case XRHandSubsystem.UpdateType.BeforeRender:
                if (!HandUIIsSet)
                {
                    if (handVisualizer.transform.childCount != 0)
                    {
                        HandUIIsSet = true;
                        GameObject leftHand = handVisualizer.GetNamedChild("L_Wrist");
                        WristUI.transform.SetParent(leftHand.transform, false);
                        PalmUI.transform.SetParent(leftHand.transform, false);
                    }
                    
                }
                
                break;
        }
    }

    private void OnHandTracked(XRHand obj)
    {
        switch (obj.handedness)
        {
            case Handedness.Left:
                GameObject leftHand = handVisualizer.GetNamedChild("L_Wrist");
                WristUI.transform.SetParent(leftHand.transform, false);
                PalmUI.transform.SetParent(leftHand.transform, false);
                break;
            case Handedness.Right:

                break;
            default:
                break;
        }
    }

    private void OnTrackingLost(XRHand obj)
    {
        switch (obj.handedness)
        {
            case Handedness.Left:
                
                WristUI.transform.SetParent(LeftController.transform, false);
                PalmUI.transform.SetParent(LeftController.transform, false);
                break;
            case Handedness.Right:

                break;
            default:
                break;
        }
    }

    private void Update()
    {
        if (LeftController.activeSelf == false && connectedToHands == false)
        {
            connectedToHands = true;
            GameObject leftHand = handVisualizer.GetNamedChild("L_Wrist");
            WristUI.transform.SetParent(leftHand.transform, false);
            PalmUI.transform.SetParent(leftHand.transform, false);
        }
        else if (LeftController.activeSelf == true && connectedToControllers == false)
        {
            connectedToControllers = true;
            WristUI.transform.SetParent(LeftController.transform, false);
            PalmUI.transform.SetParent(LeftController.transform, false);
        }
    }


}
