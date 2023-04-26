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
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (_MQTT.MQTT_heartRate != -1)
        {
            foreach (var visualizer in heartRateDataVisualizer)
            {
                visualizer.dataValue = _MQTT.MQTT_heartRate;
                hrText1.text = _MQTT.MQTT_heartRate.ToString();
                hrText2.text = _MQTT.MQTT_heartRate.ToString();
            }
        }

        if (_MQTT.MQTT_heartRateVariability != -1)
        {
            foreach (var visualizer in heartRateVarDataVisualizer)
            {
                visualizer.dataValue = _MQTT.MQTT_heartRateVariability;
                hrvText.text = _MQTT.MQTT_heartRateVariability.ToString();
            }
        }

        if (_MQTT.MQTT_breathVolume != -1)
        {
            foreach (var visualizer in breathVolDataVisualizer)
            {
                visualizer.dataValue = _MQTT.MQTT_breathVolume;
                brText.text = _MQTT.MQTT_breathVolume.ToString();
            }
        }
    }
}
