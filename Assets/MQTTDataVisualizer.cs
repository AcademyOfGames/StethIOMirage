using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

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
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (MQTT.Instance.MQTT_heartRate > 0)
        {
            foreach (var visualizer in heartRateDataVisualizer)
            {
                visualizer.SetDataValue(MQTT.Instance.MQTT_heartRate);
                if (hrText1 != null)    hrText1.text = MQTT.Instance.MQTT_heartRate.ToString();
                if (hrText2 != null)    hrText2.text = MQTT.Instance.MQTT_heartRate.ToString();
                DATA_HeartRate = MQTT.Instance.MQTT_heartRate;
            }
        }

        if (MQTT.Instance.MQTT_heartRateVariability > 0)
        {
            foreach (var visualizer in heartRateVarDataVisualizer)
            {
                visualizer.SetDataValue(MQTT.Instance.MQTT_heartRateVariability);
                if (hrvText != null) hrvText.text = MQTT.Instance.MQTT_heartRateVariability.ToString();
                DATA_HeartRateVar = MQTT.Instance.MQTT_heartRateVariability;
            }
        }

        if (MQTT.Instance.MQTT_breathVolume > 0)
        {
            foreach (var visualizer in breathVolDataVisualizer)
            {
                visualizer.SetDataValue(MQTT.Instance.MQTT_breathVolume);
                if (brText != null) brText.text = MQTT.Instance.MQTT_breathVolume.ToString();
                DATA_BreathVolume = MQTT.Instance.MQTT_breathVolume;
            }
        }
    }
}
