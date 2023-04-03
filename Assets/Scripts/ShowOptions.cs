using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class ShowOptions : MonoBehaviour
{
    // The panel containing the options
    [SerializeField] private VerticalLayoutGroup OptionsPanel;
    // The duration of the slide animation
    [SerializeField] private float SlideDuration = 2f;
    // The distance to slide the options panel
    [SerializeField] private float SlideDistance = 67f;

    // Flag to keep track of the panel visibility
    private bool IsPanelVisible = false;

    [SerializeField] private GameObject TimescaleButton;

    // Coroutine to slide the panel
    private IEnumerator SlidePanel(float start, float end)
    {
        float t = 0f;
        while (t < SlideDuration)
        {
            t += Time.deltaTime;
            float spacing = Mathf.Lerp(start, end, t / SlideDuration);
            OptionsPanel.spacing = spacing;
            yield return null;
        }
        IsPanelVisible = end > start;
    }

    private IEnumerator SlideButton(float start, float end)
    {
        float t = 0f;
        while (t < SlideDuration)
        {
            t += Time.deltaTime;
            float position = Mathf.Lerp(start, end, t / SlideDuration);    
            TimescaleButton.transform.localPosition = new Vector3(TimescaleButton.transform.localPosition.x, position, TimescaleButton.transform.localPosition.z);
            yield return null;
        }
        
    }

    // Toggles the panel visibility
    public void TogglePanel()
    {
        if (!IsPanelVisible)
        {
            StartCoroutine(SlidePanel(OptionsPanel.spacing, OptionsPanel.spacing + SlideDistance));
            if (TimescaleButton != null)
            {
                StartCoroutine(SlideButton(0, -770));
            }
        }
        else
        {
            StartCoroutine(SlidePanel(OptionsPanel.spacing, OptionsPanel.spacing - SlideDistance));
            if (TimescaleButton != null)
            {
                StartCoroutine(SlideButton(-770, 0));
            }
        }
    }
}
