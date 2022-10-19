using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameObjectUtils : MonoBehaviour
{
    public bool disappearAfterSeconds;

    public int seconds;
    // Start is called before the first frame update
    void OnEnable()
    {
        if (disappearAfterSeconds)
        {
            Invoke(nameof(Disappear), seconds);
        }
    }

    void Disappear()
    {
        gameObject.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
