using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ToggleFeatures : MonoBehaviour
{
    public GameObject Butterflies;
    public GameObject Dandelion;
    public GameObject IdealBreathVisual;
    public GameObject IdealBreahText;
    public GameObject BreahtAudio;

    public Image ButterflyImage;
    public Image DandelionImage;
    public Image VisualImage;
    public Image TextImage;
    public Image BreathAudioImage;

    public Color onColour;
    public Color offColour;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ToggleButterflies()
    {
        if (Butterflies.activeSelf)
        {
            Butterflies.SetActive(false);
            ButterflyImage.color = offColour;
        }
        else
        {
            Butterflies.SetActive(true);
            ButterflyImage.color = onColour;
        }
    }

    public void ToggleDandelion()
    {
        if (Dandelion.activeSelf)
        {
            Dandelion.SetActive(false);
            DandelionImage.color = offColour;
        }
        else
        {
            Dandelion.SetActive(true);
            DandelionImage.color= onColour;
        }
    }
    public void ToggleIdealBreathVisual()
    {
        if (IdealBreathVisual.activeSelf)
        {
            IdealBreathVisual.SetActive(false);
            VisualImage.color = offColour;
        }
        else
        {
            IdealBreathVisual.SetActive(true);
            VisualImage.color= onColour;
        }
    }

    public void ToggleIdealBreathText()
    {
        if (IdealBreahText.activeSelf)
        {
            IdealBreahText.SetActive(false);
            TextImage.color = offColour;
        }
        else
        {
            IdealBreahText.SetActive(true);
            TextImage.color= onColour;
        }
    }
}
