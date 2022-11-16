using System;
using System.Collections;
using System.Collections.Generic;
using OVR.OpenVR;
using Unity.Mathematics;
using UnityEngine;
using UnityEngine.InputSystem;

using UnityEngine.InputSystem.Controls;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.XR.Interaction.Toolkit.Inputs;

public class VerticalJoystickMovement : MonoBehaviour
{
    public InputActionProperty joystick;

    public float yDir = 0;

    public CharacterController controller;
    private ActionBasedContinuousMoveProvider move;

    private float originalMoveSpeed;
    public float moveSpeedMultiplier = .03f;
    /// <summary>
    /// The Input System Action that Unity uses to read Move data from the left hand controller. Must be a <see cref="InputActionType.Value"/> <see cref="Vector2Control"/> Control.
    /// </summary>
    public InputActionProperty leftHandMoveAction
    {
        get => joystick;
        set => SetInputActionProperty(ref joystick, value);
    }

    // Start is called before the first frame update
    void Start()
    {
        move = GetComponent<ActionBasedContinuousMoveProvider>();
        originalMoveSpeed = move.moveSpeed;
        //print(joystick.action.ReadValue<float>());// += Move);
        

    }

    private void OnDestroy()
    {
        //joystick.action.performed -= Move;
    }
    void SetInputActionProperty(ref InputActionProperty property, InputActionProperty value)
    {
        if (Application.isPlaying)
            property.DisableDirectAction();

        property = value;

        if (Application.isPlaying && isActiveAndEnabled)
            property.EnableDirectAction();
    }
    public void Move(InputAction.CallbackContext context)
    {
        yDir += context.ReadValue<Vector2>().y;
    }

    void Update()
    {
        float joystickY = joystick.action.ReadValue<Vector2>().y;
        
        bool ceiling = transform.localPosition.y > .9f;
        bool movingUp = joystickY > 0;
        
        bool floor = transform.localPosition.y < -.6f;
        bool movingDown = joystickY < 0;

        if (ceiling &&  movingUp || floor && movingDown) return;
        
        
        //added to adjust move speed the higher you are
        //yDir += joystickY;
        //yDir = Mathf.Clamp(yDir, 0,Mathf.Infinity);
        //move.moveSpeed = originalMoveSpeed + yDir * moveSpeedMultiplier;
        
        controller.Move(Vector3.up * joystick.action.ReadValue<Vector2>().y * moveSpeedMultiplier);
        if (yDir <= .1f)
        {
            GetComponent<ActionBasedContinuousMoveProvider>().useGravity = true;
        }
        else
        {
            GetComponent<ActionBasedContinuousMoveProvider>().useGravity = false;

        }
    }
}
