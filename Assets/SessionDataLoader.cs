using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using ChartUtil;

public class SessionDataLoader : MonoBehaviour
{
    [SerializeField] TMP_Text statsTextbox;

    [SerializeField] private GameObject chartObject;

    private Chart myChart;

    

    List<SessionData> sessionDatas = new List<SessionData>();

    private JSONSaveLoad saveLoad;



    

    private void Start()
    {
        saveLoad = new JSONSaveLoad();
        myChart = chartObject.GetComponent<Chart>();
    }

    public void LoadData()
    {
        sessionDatas = saveLoad.LoadAllSessions();

        CreateChart();
    }

    public void DisplayData()
    {
        statsTextbox.text = "";

        foreach (var session in sessionDatas)
        {
            statsTextbox.text += session.TimeCompleted + "\n";
        }

        if (sessionDatas.Count == 0)
        {
            statsTextbox.text = "No Saved Data Yet!";
        }
    }

    public void CreateChart()
    {

        myChart.Clear();

        myChart.chartType = ChartType.LineChart;

        //add chart options
        myChart.chartOptions = chartObject.GetComponent<ChartOptions>();
        myChart.chartOptions.title.mainTitle = "Example Chart of User Data";
        myChart.chartOptions.title.enableSubTitle = false;
        myChart.chartOptions.label.enable = true;
        myChart.chartOptions.yAxis.title = "Weight";
        myChart.chartOptions.plotOptions.barChartOption.barWidth = 20.0f;
        myChart.chartOptions.tooltip.share = false;


        //add chart data
        myChart.chartData = chartObject.GetComponent<ChartData>();
        myChart.chartData.categories = new List<string>(); //set categories
        myChart.chartData.series = new List<Series>();  //new series list

        foreach (var session in sessionDatas)
        {
            myChart.chartData.categories.Add(session.TimeCompleted);
        }


        //create new series
        Series series1 = new Series();
        series1.name = "Average Heart Rate";

        Series series2 = new Series();
        series2.name = "Breaths Per Minute";

        foreach (var session in sessionDatas)
        {
            series1.data.Add(new Data(session.AvgHeartRate));

            series2.data.Add(new Data(session.BreathRate));
        }

        //add series into series list
        myChart.chartData.series.Add(series1);
        myChart.chartData.series.Add(series2);

        //update chart
        myChart.UpdateChart();


    }
}
