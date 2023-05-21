using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class IdealBreathUI : MonoBehaviour
{
    public Image InhaleHoldImage;
    public Image ExhaleHoldImage;
    public Image BreathInOutImage;

    private float InhaleHoldTime;
    private float ExhaleHoldTime;
    private float InhaleTime;
    private float ExhaleTime;

    void Start()
    {
        StartCoroutine(BreathingCycle());
        InhaleHoldTime = LevelSettings.Instance.levelInhaleHoldTarget;
        ExhaleHoldTime = LevelSettings.Instance.levelExhaleHoldTarget;
        InhaleTime = LevelSettings.Instance.levelInhaleTarget;
        ExhaleTime = LevelSettings.Instance.levelExhaleTarget;
    }

    IEnumerator BreathingCycle()
    {
        while (true)
        {
            // Inhale phase
            yield return StartCoroutine(LerpBreathInOut(InhaleTime, 0.26f, 1f, ExhaleHoldImage, 0f, 1f));
            yield return StartCoroutine(LerpFill(InhaleHoldTime, InhaleHoldImage, 1f, 0f));
            SetAlphaAndFill(InhaleHoldImage, 0f, 1f);

            // Exhale phase
            yield return StartCoroutine(LerpBreathInOut(ExhaleTime, 1f, 0.26f, InhaleHoldImage, 0f, 1f));
            yield return StartCoroutine(LerpFill(ExhaleHoldTime, ExhaleHoldImage, 1f, 0f));
            SetAlphaAndFill(ExhaleHoldImage, 0f, 1f);
        }
    }

    IEnumerator LerpBreathInOut(float duration, float startScale, float endScale, Image holdImage, float startAlpha, float endAlpha)
    {
        float elapsed = 0f;
        while (elapsed < duration)
        {
            float t = elapsed / duration;
            BreathInOutImage.transform.localScale = Vector3.one * Mathf.Lerp(startScale, endScale, t);
            holdImage.color = new Color(holdImage.color.r, holdImage.color.g, holdImage.color.b, Mathf.Lerp(startAlpha, endAlpha, t));
            elapsed += Time.deltaTime;
            yield return null;
        }
    }

    IEnumerator LerpFill(float duration, Image holdImage, float startFill, float endFill)
    {
        float elapsed = 0f;
        while (elapsed < duration)
        {
            float t = elapsed / duration;
            holdImage.fillAmount = Mathf.Lerp(startFill, endFill, t);
            elapsed += Time.deltaTime;
            yield return null;
        }
    }

    void SetAlphaAndFill(Image image, float alpha, float fill)
    {
        image.color = new Color(image.color.r, image.color.g, image.color.b, alpha);
        image.fillAmount = fill;
    }
}
