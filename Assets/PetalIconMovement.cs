using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PetalIconMovement : MonoBehaviour
{
    public MeshRenderer petalGLow;

    private Color newCol;

    private Material petalMaterial;
    // Start is called before the first frame update
    void Start()
    {
        petalMaterial = petalGLow.material;
    }

    void FixedUpdate()
    {

    }

    public void BreathingIn()
    {
        StartCoroutine(nameof(BreathIn));
    }

    public void BreathingOut()
    {
        StartCoroutine(nameof(BreathOut));
    }

    IEnumerator BreathOut()
    {
        float timePassed = 0;
        newCol = petalMaterial.color;

        while (timePassed <= LevelSettings.Instance.levelExhaleTarget)
        {
            newCol.a = Mathf.Lerp(0, 1, timePassed/LevelSettings.Instance.levelExhaleTarget);
            petalMaterial.color = newCol;
            timePassed += Time.deltaTime;
            yield return new WaitForFixedUpdate();
        }
    }
    
    IEnumerator BreathIn()
    {
        float timePassed = 0;
        newCol = petalMaterial.color;

        while (timePassed <= LevelSettings.Instance.levelInhaleTarget)
        {
            newCol.a = Mathf.Lerp(1, 0, timePassed/LevelSettings.Instance.levelExhaleTarget);
            petalMaterial.color = newCol;
            timePassed += Time.deltaTime;
            yield return new WaitForFixedUpdate();
        }
    }
}
