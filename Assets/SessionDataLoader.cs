using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using ChartUtil;
using System.Linq;
using System.Globalization;
using System;

public enum DataTimescale
{
    BySession,
    ByDay,
    ByWeek,
    ByMonth,
    ByYear
}

[System.Serializable]
public enum DataType
{
    AverageHeartRate,
    BreathsPerMinute
}

public class SessionDataLoader : MonoBehaviour
{
    [SerializeField] TMP_Text statsTextbox;

    [SerializeField] private GameObject chartObject;

    private Chart myChart;

    private DataTimescale currentTimeScale = DataTimescale.BySession;

    private List<Series> seriesList = new List<Series>();

    List<SessionData> sessionDatas = new List<SessionData>();

    private JSONSaveLoad saveLoad;

    Series avgHeartRate;
    Series breathsPerMin;

    List<string> currentDateTimes = new List<string>();

    
    //private List<SessionData> avgBySessionList;
    //private List<SessionData> avgByDayList;
    //private List<SessionData> avgByWeekList;
    //private List<SessionData> avgByMonthList;
    //private List<SessionData> avgByYearList;

    List<string>[] dateTimesArray;
    List<SessionData>[] avgValueByTimescaleArray;

    private void Start()
    {
        dateTimesArray = new List<string>[5].Select(item => new List<string>()).ToArray();
        avgValueByTimescaleArray = new List<SessionData>[5].Select(item => new List<SessionData>()).ToArray();

        //avgBySessionList = new List<SessionData>();
        //avgByDayList = new List<SessionData>();
        //avgByWeekList = new List<SessionData>();
        //avgByMonthList = new List<SessionData>();
        //avgByYearList = new List<SessionData>();


        //avgValueByTimescaleArray[0] = avgBySessionList;
        //avgValueByTimescaleArray[1] = avgByDayList;
        //avgValueByTimescaleArray[2] = avgByWeekList;
        //avgValueByTimescaleArray[3] = avgByDayList;
        //avgValueByTimescaleArray[4] = avgByYearList;


        saveLoad = new JSONSaveLoad();
        myChart = chartObject.GetComponent<Chart>();
        sessionDatas = saveLoad.LoadAllSessions();
        CreateAllSeries();

    }

    

    public void LoadData()
    {
        

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

    private void CreateChart()
    {

        myChart.Clear();

        myChart.chartType = ChartType.LineChart;

        //add chart options
        myChart.chartOptions = chartObject.GetComponent<ChartOptions>();
        myChart.chartOptions.title.mainTitle = "Example Chart of User Data";
        myChart.chartOptions.title.enableSubTitle = false;
        myChart.chartOptions.label.enable = true;
        myChart.chartOptions.yAxis.title = "Value";
        myChart.chartOptions.plotOptions.barChartOption.barWidth = 20.0f;
        myChart.chartOptions.tooltip.share = false;


        //add chart data
        myChart.chartData = chartObject.GetComponent<ChartData>();
        myChart.chartData.categories = new List<string>(); //set categories
        myChart.chartData.series = new List<Series>();  //new series list

        //foreach (var date in currentDateTimes)
        //{
        //    myChart.chartData.categories.Add(date.ToString());
        //}

        myChart.chartData.categories = dateTimesArray[(int)currentTimeScale];


        ////create new series
        //Series series1 = new Series();
        //series1.name = "Average Heart Rate";

        //Series series2 = new Series();
        //series2.name = "Breaths Per Minute";

        //foreach (var session in sessionDatas)
        //{
        //    series1.data.Add(new Data(session.AvgHeartRate));

        //    series2.data.Add(new Data(session.BreathRate));
        //}

        //add series into series list
        myChart.chartData.series.Add(avgHeartRate);
        myChart.chartData.series.Add(breathsPerMin);

        //update chart
        myChart.UpdateChart();


    }

    private void CreateAllSeries()
    {
        //Add more series here when we finalise what data we want to show.

        avgHeartRate = new Series();
        avgHeartRate.name = "Average Heart Rate";

        breathsPerMin = new Series();
        breathsPerMin.name = "Breaths Per Minute";

        seriesList.Add(avgHeartRate);
        seriesList.Add(breathsPerMin);

        //FillSeriesWithData(DataTimescale.ByMonth);

        DateTime start = new DateTime(2022, 1, 1); // Specify the start of the time frame here
        DateTime end = start.AddMonths(11); // Specify the end of the time frame here


        avgValueByTimescaleArray[(int)DataTimescale.BySession] = CalculateAverages(sessionDatas, start, end, DataTimescale.BySession);
        avgValueByTimescaleArray[(int)DataTimescale.ByDay] = CalculateAverages(sessionDatas, start, end, DataTimescale.ByDay);
        avgValueByTimescaleArray[(int)DataTimescale.ByWeek] = CalculateAverages(sessionDatas, start, end, DataTimescale.ByWeek);
        avgValueByTimescaleArray[(int)DataTimescale.ByMonth] = CalculateAverages(sessionDatas, start, end, DataTimescale.ByMonth);
        avgValueByTimescaleArray[(int)DataTimescale.ByYear] = CalculateAverages(sessionDatas, start, end, DataTimescale.ByYear);

        SetTimespanWithList(avgValueByTimescaleArray[0]);

    }

    private void SetTimespanWithList(List<SessionData> sessions)
    {
        avgHeartRate.data.Clear();
        breathsPerMin.data.Clear();
        foreach (SessionData session in sessions)
        {
            avgHeartRate.data.Add(new Data(session.AvgHeartRate));
            breathsPerMin.data.Add(new Data(session.BreathRate));
        }
    }

    //private void FillSeriesWithData(DataTimescale dataTimescale = DataTimescale.BySession)
    //{
    //    myChart.chartData.categories.Clear();
    //    string date;
    //    string time;
    //    System.DateTime dateTime;
    //    switch (dataTimescale)
    //    {
    //        case DataTimescale.BySession:
    //            foreach (var session in sessionDatas)
    //            {
    //                avgHeartRate.data.Add(new Data(session.AvgHeartRate));

    //                breathsPerMin.data.Add(new Data(session.BreathRate));

    //                date = session.DateCompleted;
    //                time = session.TimeCompleted;
    //                dateTime = System.DateTime.Parse(date);

    //                Debug.Log("Day of Month Session Was Made" + dateTime.Day);
    //                Debug.Log("Day of Week Session Was Made" + dateTime.DayOfWeek);
    //                Debug.Log("Month and Year Session Was Made" + dateTime.Month + " " + dateTime.Year);
    //                Debug.Log("Time session was made" + System.DateTime.Parse(time).TimeOfDay);

    //            }
    //            break;
    //        case DataTimescale.ByDay:
    //            break;
    //        case DataTimescale.ByWeek:
    //            break;
    //        case DataTimescale.ByMonth:

    //            int prevMonth = -1;
    //            System.DateTime prevDate = System.DateTime.MinValue;
    //            float totalAvgHR = 0;
    //            float totalBreathPM = 0;
    //            int sameMonthCount = 0;
    //            int sessionCount = 0;


    //            foreach (var session in sessionDatas)
    //            {
    //                date = session.DateCompleted;
    //                dateTime = System.DateTime.Parse(date);


    //                if (dateTime.Month == prevMonth || sameMonthCount == 0)
    //                {
    //                    sameMonthCount++;
    //                    totalAvgHR += session.AvgHeartRate;
    //                    totalBreathPM += session.BreathRate;

    //                }
    //                else
    //                {                      
    //                    totalAvgHR = totalAvgHR / sameMonthCount;
    //                    totalBreathPM = totalBreathPM / sameMonthCount;

    //                    avgHeartRate.data.Add(new Data(totalAvgHR));
    //                    breathsPerMin.data.Add(new Data(totalBreathPM));
    //                    dateTimes.Add(prevDate);

    //                    //WHAT YOU WILL DO WHEN YOU NEED TO LOOP THIS STUFF
    //                    //foreach (var series in seriesList)
    //                    //{
    //                    //    series.data.Add(new Data(totalAvgHR));
    //                    //}

    //                    totalAvgHR = session.AvgHeartRate;
    //                    totalBreathPM = session.BreathRate;

    //                    sameMonthCount = 1;
    //                }
                    

    //                if (sessionCount+1 == sessionDatas.Count)
    //                {
    //                    totalAvgHR = totalAvgHR / sameMonthCount;
    //                    totalBreathPM = totalBreathPM / sameMonthCount;

    //                    avgHeartRate.data.Add(new Data(totalAvgHR));
    //                    breathsPerMin.data.Add(new Data(totalBreathPM));
    //                    dateTimes.Add(prevDate);
    //                }

    //                prevDate = dateTime;
    //                prevMonth = dateTime.Month;

    //                sessionCount++;
    //            }
    //            break;
    //        default:
    //            break;
    //    }     
    //}

    //With help from OpenAI Chatbot

    public List<SessionData> CalculateAverages(List<SessionData> dataObjects, DateTime start, DateTime end, DataTimescale timeScale)
    {
        var averages = new List<SessionData>();

        switch (timeScale)
        {
            case DataTimescale.BySession:
                // Average the data objects individually
                foreach (var dataObject in dataObjects)
                {
                    if (dataObject.GetDateTime() >= start && dataObject.GetDateTime() < end)
                    {
                        averages.Add(dataObject);
                    }
                    dateTimesArray[(int)timeScale].Add(dataObject.GetDateTime().ToString());
                }
                break;
            case DataTimescale.ByDay:
                // Group the data objects by day and average the values in each group
                var dataByDay = dataObjects
                    .Where(dataObject => dataObject.GetDateTime() >= start && dataObject.GetDateTime() < end)
                    .GroupBy(dataObject => dataObject.GetDateTime().Date);

                foreach (var group in dataByDay)
                {
                    var averageDataObject = new SessionData()
                    {
                        AvgHeartRate = (int)group.Average(dataObject => dataObject.AvgHeartRate),
                        BreathRate = (int)group.Average(dataObject => dataObject.BreathRate),
                        SessionLength = (int)group.Average(dataObject => dataObject.SessionLength)
                    };
                    averages.Add(averageDataObject);
                    dateTimesArray[(int)timeScale].Add(group.Key.ToString("M"));
                }
                break;
            case DataTimescale.ByWeek:
                // Group the data objects by week and average the values in each group
                var dataByWeek = dataObjects
                    .Where(dataObject => dataObject.GetDateTime() >= start && dataObject.GetDateTime() < end)
                    .GroupBy(dataObject => GetWeekOfYear(dataObject.GetDateTime()));

                foreach (var group in dataByWeek)
                {
                    var averageDataObject = new SessionData()
                    {
                        AvgHeartRate = (int)group.Average(dataObject => dataObject.AvgHeartRate),
                        BreathRate = (int)group.Average(dataObject => dataObject.BreathRate),
                        SessionLength = (int)group.Average(dataObject => dataObject.SessionLength)
                    };
                    averages.Add(averageDataObject);
                    dateTimesArray[(int)timeScale].Add(group.Key.ToString());
                }
                break;
            case DataTimescale.ByMonth:
                // Group the data objects by month and year and average the values in each group
                var dataByMonth = dataObjects
                    .Where(dataObject => dataObject.GetDateTime() >= start && dataObject.GetDateTime() < end)
                    .GroupBy(dataObject => new { dataObject.GetDateTime().Year, dataObject.GetDateTime().Month });

                foreach (var group in dataByMonth)
                {
                    var averageDataObject = new SessionData()
                    {
                        AvgHeartRate = (int)group.Average(dataObject => dataObject.AvgHeartRate),
                        BreathRate = (int)group.Average(dataObject => dataObject.BreathRate),
                        SessionLength = (int)group.Average(dataObject => dataObject.SessionLength)
                    };
                    if (averageDataObject.AvgHeartRate != 0)
                    {
                        averages.Add(averageDataObject);
                        dateTimesArray[(int)timeScale].Add(group.Key.ToString());
                    }
                    
                }
                break;
            case DataTimescale.ByYear:
                // Group the data objects by year and average the values in each group
                var dataByYear = dataObjects
                    .Where(dataObject => dataObject.GetDateTime() >= start && dataObject.GetDateTime() < end)
                    .GroupBy(dataObject => dataObject.GetDateTime().Year);

                foreach (var group in dataByYear)
                {
                    var averageDataObject = new SessionData()
                    {
                        AvgHeartRate = (int)group.Average(dataObject => dataObject.AvgHeartRate),
                        BreathRate = (int)group.Average(dataObject => dataObject.BreathRate),
                        SessionLength = (int)group.Average(dataObject => dataObject.SessionLength)
                    };
                    averages.Add(averageDataObject);
                    dateTimesArray[(int)timeScale].Add(group.Key.ToString());
                }
                break;
        }

        return averages;
    }

    public static int GetWeekOfYear(DateTime date)
    {
        // Use the first day of the year as the reference date
        DateTime reference = new DateTime(date.Year, 1, 1);
        int daysSinceReference = (date - reference).Days;
        return (daysSinceReference / 7) + 1;
    }






    public void ChangeTimeScale(int newScale)
    {
        myChart.chartData.categories = dateTimesArray[newScale];

        SetTimespanWithList(avgValueByTimescaleArray[newScale]);

        myChart.UpdateChart();
    }




    public void ToggleDataType(DataType dataType)
    {
        Series currentSeries = new Series();
        switch (dataType)
        {
            case DataType.AverageHeartRate:
                currentSeries = avgHeartRate;
                break;
            case DataType.BreathsPerMinute:
                currentSeries = breathsPerMin;
                break;
            default:
                break;
        }

        if (myChart.chartData.series.Contains(currentSeries))
        {
            myChart.chartData.series.Remove(currentSeries);
        }
        else
        {
            myChart.chartData.series.Add(currentSeries);
        }

        myChart.UpdateChart();
    }
    public void ToggleAvgHeartRate() => ToggleDataType(DataType.AverageHeartRate);
    public void ToggleBreathsPerMin() => ToggleDataType(DataType.BreathsPerMinute);
}


