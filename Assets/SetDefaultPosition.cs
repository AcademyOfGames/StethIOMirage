using System.Collections;
using System.Collections.Generic;
using Unity.XR.CoreUtils;
using UnityEngine;

public class SetDefaultPosition : MonoBehaviour
{
    public XROrigin player;
    public GameObject defaultPosition;

    public void SetPlayerPositionToDefault()
    {
        player.MoveCameraToWorldLocation(defaultPosition.transform.position);
    }
}
