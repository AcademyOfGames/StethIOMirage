using ChartUtil;
using System.Collections;
using System.Collections.Generic;
using Unity.XR.CoreUtils;
//using UnityEditor.Search;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.XR.Hands;
using UnityEngine.XR.Management;

[System.Serializable]
public struct Gesture
{
    public string name;
    public List<Vector3> fingerDatas;
    public UnityEvent onRecognized;
}



public class GestureDetector : MonoBehaviour
{
    public float threshhold = 0.1f;
    XRHand RHand;
    XRHand LHand;

    public GameObject jointCube;
    public Transform RootPos;

    public Gesture prevGesture;

    private bool isSearchingForGesture = false;

    //public List<XRHandJoint> RJoints;

    public UnityEvent noGestureEvent;
    private bool changingYHasStopped = false;
    
    
    public List<Gesture> gestures;
    XRHandSubsystem m_Subsystem;
    // Start is called before the first frame update
    void Start()
    {
        //if (m_Subsystem == null) return;
        m_Subsystem =
            XRGeneralSettings.Instance?
                .Manager?
                .activeLoader?
                .GetLoadedSubsystem<XRHandSubsystem>();

        if (m_Subsystem != null)
        {
            m_Subsystem.updatedHands += OnHandUpdate;
            m_Subsystem.trackingAcquired += OnHandTracked;

            RHand = m_Subsystem.rightHand;
            LHand = m_Subsystem.leftHand;
        }
            

        

        prevGesture = new Gesture();
        
    }

    void OnHandTracked(XRHand xRHand)
    {
        switch (xRHand.handedness)
        {
            case Handedness.Left:

                break; 
            case Handedness.Right:

                break;
            default:
                break;
        }
    }
    
    void OnHandUpdate(XRHandSubsystem subsystem,
                  XRHandSubsystem.UpdateSuccessFlags updateSuccessFlags,
                  XRHandSubsystem.UpdateType updateType)
    {
        switch (updateType)
        {
            case XRHandSubsystem.UpdateType.Dynamic:
                if (Input.GetKeyDown(KeyCode.Space))
                {
                    print("PressedSpace, HandUpdate is working");
                    Save();
                }
                if (isSearchingForGesture == false)
                {
                    isSearchingForGesture = true;
                    Gesture currentGesture = Recognize();
                    bool hasRecognized = !currentGesture.Equals(new Gesture());
                    if (hasRecognized )
                    {
                        changingYHasStopped= false;
                        Debug.Log("New Gesture Found : " + currentGesture.name);
                        prevGesture = currentGesture;
                        currentGesture.onRecognized.Invoke();
                    }
                    else
                    {
                        Debug.Log("No Gesture Detected!");
                        if (!changingYHasStopped)
                        {
                            changingYHasStopped= true;
                            if (noGestureEvent != null)
                            {
                                noGestureEvent.Invoke();
                            }
                        }
                    }
                }
                
                break;
            case XRHandSubsystem.UpdateType.BeforeRender:
                // Update visual objects that use hand data
                break;
        }
    }

    private void Save()
    {
        if (RHand.GetJoint(XRHandJointIDUtility.FromIndex(0)).TryGetPose(out Pose rootPose))
        {
            Gesture g = new Gesture();
            g.name = "New Gesture";
            List<Vector3> data = new List<Vector3>();
            for (var i = XRHandJointID.BeginMarker.ToIndex();
                            i < XRHandJointID.EndMarker.ToIndex();
                            i++)
            {
                var trackingData = RHand.GetJoint(XRHandJointIDUtility.FromIndex(i));

                if (trackingData.TryGetPose(out Pose pose))
                {
                    data.Add(rootPose.position - pose.position);
                    GameObject newJoint = Instantiate(jointCube, rootPose.position - pose.position, Quaternion.identity, null);
                    newJoint.name = "Joint " + i;
                    //Instantiate(jointCube, RHand.rootPose.position, Quaternion.identity, null);
                    // displayTransform is some GameObject's Transform component
                    //displayTransform.localPosition = pose.position;
                    //displayTransform.localRotation = pose.rotation;
                }
            }
            g.fingerDatas = data;
            gestures.Add(g);
        }
        
    }

    private Gesture Recognize()
    {
        Gesture currentGesture = new Gesture();
        float currentMin = Mathf.Infinity;

        foreach (var gesture in gestures)
        {
            if (RHand.GetJoint(XRHandJointIDUtility.FromIndex(0)).TryGetPose(out Pose rootPose))
            {
                float sumDistance = 0;
                bool isDiscarded = false;
                for (var i = XRHandJointID.BeginMarker.ToIndex();
                            i < XRHandJointID.EndMarker.ToIndex();
                            i++)
                {
                    var trackingData = RHand.GetJoint(XRHandJointIDUtility.FromIndex(i));

                    if (trackingData.TryGetPose(out Pose pose))
                    {

                        Vector3 currentData = rootPose.position - pose.position;
                        float distance = Vector3.Distance(currentData, gesture.fingerDatas[i]);
                        //Debug.Log("Distance: " + distance + " Current Data: " + currentData.ToString() + " Finger Data: " + gesture.fingerDatas[i].ToString() + " For gesture:" + gesture.name);
                        //Debug.Log("Threshhold: " + threshhold);
                        if (distance > threshhold)
                        {
                            //Debug.Log("Gesture: "+gesture.name+"Bone was too far from threshhold: " + trackingData.ToString());
                            isDiscarded = true;
                            break;
                        }

                        sumDistance += distance;
                    }

                    
                }
                if (!isDiscarded && sumDistance < currentMin)
                {
                    currentMin = sumDistance;
                    currentGesture = gesture;
                }
            }
        }
        isSearchingForGesture = false;
        return currentGesture;
    }

    Dictionary<XRHandJointID, Transform> CreateHandDisplay(
            GameObject jointPrefab,
            Transform sceneParent,
            XRHandSubsystem handSubsystem)
    {
        var displayObjects = new Dictionary<XRHandJointID, Transform>();

        for (var i = XRHandJointID.BeginMarker.ToIndex();
                i < XRHandJointID.EndMarker.ToIndex();
                i++)
        {
            if (handSubsystem.jointsInLayout[i])
            {
                XRHandJointID jointID = XRHandJointIDUtility.FromIndex(i);
                var go = Instantiate(jointPrefab, sceneParent);
                go.name = jointID.ToString();
                displayObjects.Add(jointID, go.transform);
            }
        }
        return displayObjects;
    }

    void UpdateJointTransforms(XRHand hand,
         Dictionary<XRHandJointID, Transform> displayObjects)
    {
        foreach (var joint in displayObjects)
        {
            var trackingData = hand.GetJoint(joint.Key);
            var displayTransform = joint.Value;
            if (trackingData.TryGetPose(out Pose pose))
            {
                displayTransform.localPosition = pose.position;
                displayTransform.localRotation = pose.rotation;
            }
        }
    }
}
