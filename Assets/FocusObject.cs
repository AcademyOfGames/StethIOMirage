using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FocusObject : MonoBehaviour
{
    private Transform t;

    private bool scalingUp;
    private Vector3 ogScale;
    private Vector3 ogPos;

    public GameObject surprise;

    public float floatSpeed;
    // Start is called before the first frame update
    void Start()
    {
        t = transform;
        ogScale = t.localScale;
        ogPos = t.position;
        StartFocus();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void StartFocus()
    {
        StartCoroutine(nameof(ScaleUp));
    }

    public void StopFocus()
    {
        scalingUp = false;
    }
    
    IEnumerator ScaleUp()
    {
        scalingUp = true;
        float timePassed = 0;
        while (scalingUp)
        {
            print("CHaging scale to " + Vector3.Slerp(t.localScale, ogScale *3f, timePassed));
            timePassed += Time.deltaTime;
            t.localScale = Vector3.Slerp(t.localScale, ogScale *3f, timePassed);
            //t.position = Vector3.up * floatSpeed;
            if (timePassed > 1f)
            {
                ShowSurprise();
                break;
            }
            yield return new WaitForFixedUpdate();
        }
        
        timePassed = 0;
        {
            timePassed += Time.deltaTime * 2f;
            t.localScale = Vector3.Slerp(transform.localScale, ogScale, timePassed);
            t.position = Vector3.Slerp(t.position, ogPos, timePassed);
            yield return new WaitForFixedUpdate();
        }
    }

    IEnumerator ScaleDown()
    {
        while (t.localScale.x > .1f)
        {
            t.localScale *= .9f;
            yield return new WaitForFixedUpdate();

        }
        surprise.SetActive(true);
    }
    

    void ShowSurprise()
    {        
        StartCoroutine(nameof(ScaleDown));
    }
}
