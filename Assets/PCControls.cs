using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PCControls : MonoBehaviour
{
    public delegate void EnterEvent();

    public static event EnterEvent OnEnter;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Keyboard.current[Key.Enter].wasPressedThisFrame)
        {
            OnEnter.Invoke();
        }
    }
}
