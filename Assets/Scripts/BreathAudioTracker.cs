using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BreathAudioTracker : MonoBehaviour
{
    [Tooltip("Threshold for when a beat is registered.")]
    public float bias;
    
    [Tooltip("Minimum time between beats.")]
    public float timeStep;

    [Tooltip("Interpolation of moevement.")]
    public float smoothTime;

    private float m_previousAudioValue;
    public float m_audioValue;
    private float m_timer;

    protected bool m_isBeat;
    public float grassMovementStrength;
    public enum Breath {In,Out,Neutral}
    public Breath _breathStatus = Breath.Neutral;
    private Breath _previousBreath = Breath.In;

    public float breathScaleSpeed;
    public float _breathDirection = 1f;

    private Vector3 targetScale;

    public Vector3 topScale;
    public Vector3 lowerScale;

    public TerrainData terrain; 
    private AudioSpectrum spectrum;

    // Start is called before the first frame update
    void Start()
    {
        spectrum = GetComponent<AudioSpectrum>();

    }

    // Update is called once per frame
    void Update()
    {
        m_previousAudioValue = m_audioValue;
        m_audioValue = spectrum.avgSpectrumValue;
        // debug.text = "m_audioValue " + m_audioValue + " " + terrain.wavingGrassStrength;

        if (m_previousAudioValue > bias &&
            m_audioValue <= bias)
        {
            if (m_timer > timeStep && _breathStatus != Breath.Neutral)
            {
                print("Breath finished");
            }
        }

        if (m_previousAudioValue <= bias &&
            m_audioValue > bias)
        {
            if (m_timer > timeStep && _breathStatus == Breath.Neutral)
            {
                print("Breath Switched");
            }
        }
    }
}
