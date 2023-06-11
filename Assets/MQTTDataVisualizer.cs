using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using static UnityEngine.Rendering.DebugUI;

public class MQTTDataVisualizer : MonoBehaviour
{
    [SerializeField] private MQTT _MQTT;
    [SerializeField] private List<DataVisualizer> heartRateDataVisualizer= new List<DataVisualizer>();
    [SerializeField] private List<DataVisualizer> heartRateVarDataVisualizer= new List<DataVisualizer>();
    [SerializeField] private List<DataVisualizer> breathVolDataVisualizer= new List<DataVisualizer>();

    [SerializeField] private TMP_Text hrText1;
    [SerializeField] private TMP_Text hrText2;
    [SerializeField] private TMP_Text hrvText;
    [SerializeField] private TMP_Text brText;

    public float DATA_HeartRate;
    public float DATA_HeartRateVar;
    public float DATA_BreathVolume;

    public float maxBreathVolume = 0;
    public float minBreathVolume = 0;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (MQTT.Instance.MQTT_heartRate > 0)
        {
            DATA_HeartRate = MQTT.Instance.MQTT_heartRate;
            foreach (var visualizer in heartRateDataVisualizer)
            {
                visualizer.SetDataValue(MQTT.Instance.MQTT_heartRate);
                if (hrText1 != null)    hrText1.text = MQTT.Instance.MQTT_heartRate.ToString();
                if (hrText2 != null)    hrText2.text = MQTT.Instance.MQTT_heartRate.ToString();
                
            }
        }

        if (MQTT.Instance.MQTT_heartRateVariability > 0)
        {
            DATA_HeartRateVar = MQTT.Instance.MQTT_heartRateVariability;
            foreach (var visualizer in heartRateVarDataVisualizer)
            {
                visualizer.SetDataValue(MQTT.Instance.MQTT_heartRateVariability);
                if (hrvText != null) hrvText.text = MQTT.Instance.MQTT_heartRateVariability.ToString();
                DATA_HeartRateVar = MQTT.Instance.MQTT_heartRateVariability;
            }
        }

        if (MQTT.Instance.MQTT_breathVolume > 0)
        {
            if (maxBreathVolume == 0 || minBreathVolume == 0)
            {
                maxBreathVolume = MQTT.Instance.MQTT_breathVolume + 10;
                minBreathVolume = MQTT.Instance.MQTT_breathVolume - 10;
            }
            //if (maxBreathVolume - minBreathVolume > 300)
            //{
            //    maxBreathVolume = MQTT.Instance.MQTT_breathVolume + 100;
            //    minBreathVolume = MQTT.Instance.MQTT_breathVolume - 100;
            //}

            if (brText != null) brText.text = MQTT.Instance.MQTT_breathVolume.ToString();
            DATA_BreathVolume = MQTT.Instance.MQTT_breathVolume;

            if (DATA_BreathVolume > maxBreathVolume)
            {
                maxBreathVolume = DATA_BreathVolume + 10;
            }
            else if (DATA_BreathVolume < minBreathVolume)
            {
                minBreathVolume = DATA_BreathVolume - 10;
            }

            foreach (var visualizer in breathVolDataVisualizer)
            {
                visualizer.SetDataValue(MQTT.Instance.MQTT_breathVolume);
                
            }
        }
    }
}
