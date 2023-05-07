using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ChartUtil;

public class ShirtDataGraphManager : MonoBehaviour
{

    public Chart heartDataChart;
    public Chart breathVolumeDataChart;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (MQTT.Instance.MQTT_heartRate > 0)
        {
            //Add data to heart rate and variability chart

            heartDataChart.chartData.series[0].data.Add(new Data(MQTT.Instance.MQTT_heartRate));
            heartDataChart.chartData.series[1].data.Add(new Data(MQTT.Instance.MQTT_heartRateVariability));

            heartDataChart.chartData.categories.Add("");

            heartDataChart.UpdateChart();

            //Add data to breath volume chart

            breathVolumeDataChart.chartData.series[0].data.Add(new Data(MQTT.Instance.MQTT_breathVolume));

            breathVolumeDataChart.chartData.categories.Add("");

            breathVolumeDataChart.UpdateChart();
        }
    }
}
