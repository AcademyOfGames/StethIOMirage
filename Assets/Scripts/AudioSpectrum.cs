using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioSpectrum : MonoBehaviour
{
    private float[] m_audioSpectrum;
    public static float spectrumValue { get; private set; }
    public float avgSpectrumValue;
    private AudioSource audio;
    
    // Start is called before the first frame update
    void Start()
    {
        audio = GetComponent<AudioSource>();
        avgSpectrumValue = 0;
        m_audioSpectrum = new float[128];
    }

    // Update is called once per frame
    void Update()
    {
        avgSpectrumValue = 0;
        audio.GetSpectrumData(m_audioSpectrum, 0, FFTWindow.Hamming);
        if (m_audioSpectrum != null && m_audioSpectrum.Length > 0)
        {
            foreach (var VARIABLE in m_audioSpectrum)
            {
                avgSpectrumValue += VARIABLE;
            }

            avgSpectrumValue /= 128;
            avgSpectrumValue *= 10000;
            spectrumValue = m_audioSpectrum[0] * 10000;
        }
    }
    private float[] freqData;
    private int nSamples = 1024;
    private float fMax;
    float BandVol(float fLow, float fHigh) {
 
        fLow = Mathf.Clamp(fLow, 20, fMax); // limit low...
        fHigh = Mathf.Clamp(fHigh, fLow, fMax); // and high frequencies
        // get spectrum
        audio.GetSpectrumData(freqData, 0, FFTWindow.BlackmanHarris); 
        float n1= Mathf.Floor(fLow * nSamples / fMax);
        float n2 = Mathf.Floor(fHigh * nSamples / fMax);
        float sum = 0;
        
        // average the volumes of frequencies fLow to fHigh
        for (int i=(int)n1; i<=n2; i++){
            sum += freqData[i];
        }
        return sum / (n2 - n1 + 1);
    }
}
