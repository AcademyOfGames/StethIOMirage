using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class BreathCalibrateText : MonoBehaviour
{
    private TextMeshPro txt;

    // Start is called before the first frame update
    void Start()
    {
        txt = GetComponent<TextMeshPro>();
        StartCoroutine(FadeIn());
        StartCoroutine(DotDotDot());
    }

    IEnumerator FadeIn()
    {
        float timePassed = 0;
        while (timePassed < 1)
        {
            timePassed += Time.deltaTime * .2f;
            txt.color = new Color(1, 1, 1, timePassed);
            yield return null;
        }

        timePassed = 0;
        while (timePassed < 1)
        {
            timePassed += Time.deltaTime * .3f;
            txt.color = new Color(1, 1, 1, 1 - timePassed);
            yield return null;
        }

        StopAllCoroutines();
        Destroy(gameObject);
    }

    IEnumerator DotDotDot()
    {
        yield return new WaitForSeconds(1.2f);
        txt.text = "Calibrating Grass.";

        yield return new WaitForSeconds(1.2f);
        txt.text = "Calibrating Grass..";
        yield return new WaitForSeconds(1.2f);
        txt.text = "Calibrating Grass...";

        StartCoroutine(DotDotDot());
    }

    void Update()
    {

    }
}