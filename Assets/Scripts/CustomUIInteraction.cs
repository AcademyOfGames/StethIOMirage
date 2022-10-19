using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class CustomUIInteraction : MonoBehaviour
{
public InputActionReference triggerPressed;

    private CustomUI ui;
    // Start is called before the first frame update
    void Start()
    {
    }
    void OnDestroy(){

    }
    // Update is called once per frame
    void Update()
    {
        if (triggerPressed.action.WasReleasedThisFrame() && ui != null)
        {
            ui.Deactivate();
        }
        
        if (triggerPressed.action.WasPressedThisFrame())
        {
            ShootRay();
        }
    }
    
    private void ShootRay(){
        RaycastHit hit;
        // Does the ray intersect any objects excluding the player layer
        if (Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out hit, Mathf.Infinity))
        {
             ui = hit.collider.GetComponent<CustomUI>();
            if (ui != null)
            {
                ui.Activate(transform);
            }
        }
    }
}
