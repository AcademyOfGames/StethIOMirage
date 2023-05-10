using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ChartUtil;
using UnityEngine.UIElements;

public class ShirtDataGraphManager : MonoBehaviour
{

    public Chart heartDataChart;
    public Chart breathVolumeDataChart;

    public float updateRate = 0.5f;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(RunMethodEveryTimeValue());
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private IEnumerator RunMethodEveryTimeValue()
    {
        while (true)
        {
            if (MQTT.Instance.MQTT_heartRate > 0)
            {
                //Add data to heart rate and variability chart
                if (heartDataChart.gameObject.activeSelf)
                {
                    heartDataChart.chartData.series[0].data.Add(new Data(MQTT.Instance.MQTT_heartRate));
                    heartDataChart.chartData.series[1].data.Add(new Data(MQTT.Instance.MQTT_heartRateVariability));

                    heartDataChart.chartData.categories.Add("");

                    if (heartDataChart.chartData.categories.Count > 50)
                    {
                        heartDataChart.chartData.series[0].data.RemoveAt(0);
                        heartDataChart.chartData.series[1].data.RemoveAt(0);
                        heartDataChart.chartData.categories.RemoveAt(0);
                    }

                    heartDataChart.UpdateChart();
                }
                

                //Add data to breath volume chart
                if (breathVolumeDataChart.gameObject.activeSelf)
                {
                    breathVolumeDataChart.chartData.series[0].data.Add(new Data(MQTT.Instance.MQTT_breathVolume));

                    breathVolumeDataChart.chartData.categories.Add("");

                    if (breathVolumeDataChart.chartData.categories.Count > 50)
                    {
                        breathVolumeDataChart.chartData.series[0].data.RemoveAt(0);
                        breathVolumeDataChart.chartData.categories.RemoveAt(0);
                    }

                    breathVolumeDataChart.UpdateChart();
                }
                
            }

            // Wait for the specified time value before performing the action again
            yield return new WaitForSeconds(updateRate);
        }
    }
}
