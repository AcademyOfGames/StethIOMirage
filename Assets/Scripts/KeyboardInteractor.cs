using System;
using System.Collections;
using System.Collections.Generic;
using Unity.XR.CoreUtils;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;
using VRKeys;

public class KeyboardInteractor : MonoBehaviour
{
    
    public InputActionReference reference = null;

    public delegate void StateChange(XRController controller);
    public event StateChange OnButtonDown;
    public event StateChange OnButtonUp;
    
    public InputHelpers.Button button = InputHelpers.Button.None;

    private bool previousPress;

    public AudioSource audioSource;

    public GameObject loginPage;
    public GameObject createPage;

    public FirebaseData firebaseData;

    void Update()
    {
        //HandleState(GetComponent<XRController>());
    }
    public void HandleState(XRController controller)
    {
        if (controller.inputDevice.IsPressed(button, out bool pressed, controller.axisToPressThreshold))
        {
            if (previousPress != pressed)
            {
                previousPress = pressed;
                if (pressed)
                {
                    ShootRay();
                }
            }
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        reference.action.started += ClickKey;
        ActionBasedController controller = GetComponent<ActionBasedController>();

    }
    
    void OnDestroy()
    {
        reference.action.started -= ClickKey;

    }
    void ClickKey(InputAction.CallbackContext context)
    {
        ShootRay();
        
    }

    public void ShootRay()
    {
        Ray ray = new Ray(transform.position, transform.forward);
        RaycastHit hit;
        if(Physics.Raycast(ray,out hit))
        {
            LetterKey key = hit.collider.GetComponent<LetterKey>();
            if(key != null){
                hit.collider.GetComponent<LetterKey>().KeySelected();
                audioSource.Play();
            }
            
            EnterKey enter = hit.collider.GetComponent<EnterKey>();
            if(enter != null){
                //hit.collider.GetComponent<EnterKey>().SubmitEntry();
                if (loginPage.activeSelf)
                {
                    firebaseData.LoginButton();
                }else if (createPage.activeSelf)
                {
                    firebaseData.RegisterButton();
                }
                audioSource.Play();
            }
            
            ClearKey clear = hit.collider.GetComponent<ClearKey>();
            if(clear != null){
                hit.collider.GetComponent<ClearKey>().ClearText();
                audioSource.Play();
            }
            BackspaceKey bk = hit.collider.GetComponent<BackspaceKey>();
            if(bk != null){
                hit.collider.GetComponent<BackspaceKey>().PressBackspace();
                audioSource.Play();
            }

            ShiftKey shift = hit.collider.GetComponent<ShiftKey>();
            if(shift != null){
                hit.collider.GetComponent<ShiftKey>().PressShift();
                audioSource.Play();
            }

            SpaceKey space = hit.collider.GetComponent<SpaceKey>();
            if(space != null)
            {
                hit.collider.GetComponent<SpaceKey>().PressSpace();
                audioSource.Play();
            }
        }
    }

}
