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
    BreathsPerMinute,
    SessionLength,
    AtrialFibBurden,
    BloodPressureDiastolic,
    BloodPressureSystolic,
    BodyTemperature,
    HeartRateRecovery,
    HeartRateVariability,
    OxygenSaturation,
    RespiratoryRate,
    RestingHeartRate
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

    Series series_AvgHeartRate;
    Series series_BreathsPerMin;
    Series series_SessionLength;


    //Blood pressure is made of Diastolic and Systolic
    Series series_AtrialFibBurden;
    Series series_BloodPressureDiastolic; 
    Series series_BloodPressureSystolic; 
    Series series_BodyTemperature;
    Series series_HeartRateRecovery;
    Series series_HeartRateVariability;
    Series series_OxygenSaturation;
    Series series_RespiratoryRate;
    Series series_RestingHeartRate;



    List<string> currentDateTimes = new List<string>();

    private DateTime startDate;
    private DateTime endDate;

    

    private bool timeframeChanged = false;

    
    //private List<SessionData> avgBySessionList;
    //private List<SessionData> avgByDayList;
    //private List<SessionData> avgByWeekList;
    //private List<SessionData> avgByMonthList;
    //private List<SessionData> avgByYearList;

    List<string>[] dateTimesArray;
    List<SessionData>[] avgValueByTimescaleArray;

    public DateTime StartDate { get => startDate; set => startDate = value; }
    public DateTime EndDate { get => endDate; set => endDate = value; }


    private void Awake()
    {
        startDate = new DateTime(2022, 1, 1); // Specify the start of the time frame here
        endDate = startDate.AddMonths(22); // Specify the end of the time frame here
    }
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
        sessionDatas = saveLoad.LoadSessionData();
        CreateAllSeries();

    }

    

    public void LoadData()
    {
        sessionDatas = saveLoad.LoadSessionData();
        CreateAllSeries();

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
        myChart.chartData.series.Add(series_AvgHeartRate);
        myChart.chartData.series.Add(series_BreathsPerMin);

        //update chart
        myChart.UpdateChart();


    }

    private void CreateAllSeries()
    {
        //Add more series here when we finalise what data we want to show.

        series_AvgHeartRate = new Series();
        series_AvgHeartRate.name = "Average Heart Rate";

        series_BreathsPerMin = new Series();
        series_BreathsPerMin.name = "Breaths Per Minute";

        series_SessionLength = new Series();
        series_SessionLength.name = "Session Length";

        series_AtrialFibBurden = new Series();
        series_AtrialFibBurden.name = "Atrial Fibrillation Burden";

        series_BloodPressureDiastolic = new Series();
        series_BloodPressureDiastolic.name = "Diastolic Blood Pressure";

        series_BloodPressureSystolic = new Series();
        series_BloodPressureSystolic.name = "Systolic Blood Pressure";

        series_BodyTemperature = new Series();
        series_BodyTemperature.name = "Body Temperature";

        series_HeartRateRecovery = new Series();
        series_HeartRateRecovery.name = "Heart Rate Recovery";

        series_HeartRateVariability = new Series();
        series_HeartRateVariability.name = "Heart Rate Variability";

        series_OxygenSaturation = new Series();
        series_OxygenSaturation.name = "Oxygen Saturation";

        series_RespiratoryRate = new Series();
        series_RespiratoryRate.name = "Respiration Rate";

        series_RestingHeartRate = new Series();
        series_RestingHeartRate.name = "Resting Heart Rate";


        //seriesList.Add(series_AvgHeartRate);
        //seriesList.Add(series_BreathsPerMin);
        //seriesList.Add(series_SessionLength);

        

        


        CalculateAllAverages(startDate, endDate);

        SetTimespanWithList(avgValueByTimescaleArray[0]); // By default show the data BySession

    }

    private void SetTimespanWithList(List<SessionData> currentTimescaleData)
    {
        series_AvgHeartRate.data.Clear();
        series_BreathsPerMin.data.Clear();
        series_SessionLength.data.Clear();

        series_AtrialFibBurden.data.Clear();
        series_BloodPressureDiastolic.data.Clear();
        series_BloodPressureSystolic.data.Clear();
        series_BodyTemperature.data.Clear();
        series_HeartRateRecovery.data.Clear();
        series_HeartRateVariability.data.Clear();
        series_OxygenSaturation.data.Clear();
        series_RespiratoryRate.data.Clear();
        series_RestingHeartRate.data.Clear();

        foreach (SessionData session in currentTimescaleData)
        {
            series_AvgHeartRate.data.Add(new Data(session.AvgHeartRate));
            series_BreathsPerMin.data.Add(new Data(session.BreathRate));
            series_SessionLength.data.Add(new Data(session.SessionLength));

            series_AtrialFibBurden.data.Add(new Data(session.AtrialFibBurden));
            series_BloodPressureDiastolic.data.Add(new Data(session.BloodPressureDiastolic));
            series_BloodPressureSystolic.data.Add(new Data(session.BloodPressureSystolic));
            series_BodyTemperature.data.Add(new Data(session.BodyTemperature));
            series_HeartRateRecovery.data.Add(new Data(session.HeartRateRecovery));
            series_HeartRateVariability.data.Add(new Data(session.HeartRateVariability));
            series_OxygenSaturation.data.Add(new Data(session.OxygenSaturation));
            series_RespiratoryRate.data.Add(new Data(session.RespiratoryRate));
            series_RestingHeartRate.data.Add(new Data(session.RestingHeartRate));
        }
    }

    
    private void CalculateAllAverages(DateTime start, DateTime end)
    {
        avgValueByTimescaleArray[(int)DataTimescale.BySession] = CalculateAverages(sessionDatas, start, end, DataTimescale.BySession);
        avgValueByTimescaleArray[(int)DataTimescale.ByDay] = CalculateAverages(sessionDatas, start, end, DataTimescale.ByDay);
        avgValueByTimescaleArray[(int)DataTimescale.ByWeek] = CalculateAverages(sessionDatas, start, end, DataTimescale.ByWeek);
        avgValueByTimescaleArray[(int)DataTimescale.ByMonth] = CalculateAverages(sessionDatas, start, end, DataTimescale.ByMonth);
        avgValueByTimescaleArray[(int)DataTimescale.ByYear] = CalculateAverages(sessionDatas, start, end, DataTimescale.ByYear);
    }


    public List<SessionData> CalculateAverages(List<SessionData> dataObjects, DateTime start, DateTime end, DataTimescale timeScale)
    {
        var averages = new List<SessionData>();

        dateTimesArray[(int)timeScale].Clear();

        switch (timeScale)
        {
            case DataTimescale.BySession:

                //var dataBySession = dataObjects
                //        .Where(dataObject => dataObject.GetDateTime() >= start && dataObject.GetDateTime() < end)
                //        .OrderBy(dataObject => dataObject.GetDateTime());

                // Average the data objects individually
                foreach (var dataObject in dataObjects)
                {

                    
                    if (dataObject.GetDateTime() >= start && dataObject.GetDateTime() < end)
                    {
                        averages.Add(dataObject);
                        dateTimesArray[(int)timeScale].Add(dataObject.GetDateTime().ToString());
                    }
                }
                break;
            case DataTimescale.ByDay:
                // Group the data objects by day and average the values in each group
                var dataByDay = dataObjects
                    .Where(dataObject => dataObject.GetDateTime() >= start && dataObject.GetDateTime() < end)
                    .OrderBy(dataObject => dataObject.GetDateTime())
                    .GroupBy(dataObject => dataObject.GetDateTime().Date);

                foreach (var group in dataByDay)
                {
                    var averageDataObject = new SessionData()
                    {
                        AvgHeartRate = (int)group.Average(dataObject => dataObject.AvgHeartRate),
                        BreathRate = (int)group.Average(dataObject => dataObject.BreathRate),
                        SessionLength = (int)group.Average(dataObject => dataObject.SessionLength),
                        AtrialFibBurden = (int)group.Average(dataObject => dataObject.AtrialFibBurden),
                        BloodPressureDiastolic = (int)group.Average(dataObject => dataObject.BloodPressureDiastolic),
                        BloodPressureSystolic = (int)group.Average(dataObject => dataObject.BloodPressureSystolic),
                        BodyTemperature = (int)group.Average(dataObject => dataObject.BodyTemperature),
                        HeartRateRecovery = (int)group.Average(dataObject => dataObject.HeartRateRecovery),
                        HeartRateVariability = (int)group.Average(dataObject => dataObject.HeartRateVariability),
                        OxygenSaturation = (int)group.Average(dataObject => dataObject.OxygenSaturation),
                        RespiratoryRate = (int)group.Average(dataObject => dataObject.RespiratoryRate),
                        RestingHeartRate = (int)group.Average(dataObject => dataObject.RestingHeartRate)
                    };

                    averages.Add(averageDataObject);
                    dateTimesArray[(int)timeScale].Add(group.Key.ToString("d"));
                }
                break;
            case DataTimescale.ByWeek:
                // Group the data objects by week and average the values in each group
                //var dataByWeek = dataObjects
                //    .Where(dataObject => dataObject.GetDateTime() >= start && dataObject.GetDateTime() < end)
                //    .GroupBy(dataObject => GetWeekOfYear(dataObject.GetDateTime()));

                var dataByWeek = dataObjects
                    .Where(dataObject => dataObject.GetDateTime() >= start && dataObject.GetDateTime() < end)
                    .OrderBy(dataObject => dataObject.GetDateTime().Year)
                    .ThenBy(dataObject => GetWeekOfYear(dataObject.GetDateTime()))
                    .GroupBy(dataObject => new { Week = GetWeekOfYear(dataObject.GetDateTime()), Year = dataObject.GetDateTime().Year });

                foreach (var group in dataByWeek)
                {
                    var averageDataObject = new SessionData()
                    {
                        AvgHeartRate = (int)group.Average(dataObject => dataObject.AvgHeartRate),
                        BreathRate = (int)group.Average(dataObject => dataObject.BreathRate),
                        SessionLength = (int)group.Average(dataObject => dataObject.SessionLength),
                        AtrialFibBurden = (int)group.Average(dataObject => dataObject.AtrialFibBurden),
                        BloodPressureDiastolic = (int)group.Average(dataObject => dataObject.BloodPressureDiastolic),
                        BloodPressureSystolic = (int)group.Average(dataObject => dataObject.BloodPressureSystolic),
                        BodyTemperature = (int)group.Average(dataObject => dataObject.BodyTemperature),
                        HeartRateRecovery = (int)group.Average(dataObject => dataObject.HeartRateRecovery),
                        HeartRateVariability = (int)group.Average(dataObject => dataObject.HeartRateVariability),
                        OxygenSaturation = (int)group.Average(dataObject => dataObject.OxygenSaturation),
                        RespiratoryRate = (int)group.Average(dataObject => dataObject.RespiratoryRate),
                        RestingHeartRate = (int)group.Average(dataObject => dataObject.RestingHeartRate)
                    };
                    averages.Add(averageDataObject);
                    dateTimesArray[(int)timeScale].Add($"Week {group.Key.Week} of {group.Key.Year}");
                }
                break;
            case DataTimescale.ByMonth:
                // Group the data objects by month and year and average the values in each group
                var dataByMonth = dataObjects
                    .Where(dataObject => dataObject.GetDateTime() >= start && dataObject.GetDateTime() < end)
                    .OrderBy(dataObject => dataObject.GetDateTime().Year)
                    .ThenBy(dataObject => dataObject.GetDateTime().Month)
                    .GroupBy(dataObject => new { dataObject.GetDateTime().Year, dataObject.GetDateTime().Month });

                foreach (var group in dataByMonth)
                {
                    var averageDataObject = new SessionData()
                    {
                        AvgHeartRate = (int)group.Average(dataObject => dataObject.AvgHeartRate),
                        BreathRate = (int)group.Average(dataObject => dataObject.BreathRate),
                        SessionLength = (int)group.Average(dataObject => dataObject.SessionLength),
                        AtrialFibBurden = (int)group.Average(dataObject => dataObject.AtrialFibBurden),
                        BloodPressureDiastolic = (int)group.Average(dataObject => dataObject.BloodPressureDiastolic),
                        BloodPressureSystolic = (int)group.Average(dataObject => dataObject.BloodPressureSystolic),
                        BodyTemperature = (int)group.Average(dataObject => dataObject.BodyTemperature),
                        HeartRateRecovery = (int)group.Average(dataObject => dataObject.HeartRateRecovery),
                        HeartRateVariability = (int)group.Average(dataObject => dataObject.HeartRateVariability),
                        OxygenSaturation = (int)group.Average(dataObject => dataObject.OxygenSaturation),
                        RespiratoryRate = (int)group.Average(dataObject => dataObject.RespiratoryRate),
                        RestingHeartRate = (int)group.Average(dataObject => dataObject.RestingHeartRate)
                    };
                    if (averageDataObject.AvgHeartRate != 0)
                    {
                        averages.Add(averageDataObject);
                        dateTimesArray[(int)timeScale].Add(CultureInfo.CurrentCulture.DateTimeFormat.GetMonthName(group.Key.Month) + " " +group.Key.Year.ToString());
                    }
                    
                }
                break;
            case DataTimescale.ByYear:
                // Group the data objects by year and average the values in each group
                var dataByYear = dataObjects
                    .Where(dataObject => dataObject.GetDateTime() >= start && dataObject.GetDateTime() < end)
                    .OrderBy(dataObject => dataObject.GetDateTime().Year)
                    .GroupBy(dataObject => dataObject.GetDateTime().Year);

                foreach (var group in dataByYear)
                {
                    var averageDataObject = new SessionData()
                    {
                        AvgHeartRate = (int)group.Average(dataObject => dataObject.AvgHeartRate),
                        BreathRate = (int)group.Average(dataObject => dataObject.BreathRate),
                        SessionLength = (int)group.Average(dataObject => dataObject.SessionLength),
                        AtrialFibBurden = (int)group.Average(dataObject => dataObject.AtrialFibBurden),
                        BloodPressureDiastolic = (int)group.Average(dataObject => dataObject.BloodPressureDiastolic),
                        BloodPressureSystolic = (int)group.Average(dataObject => dataObject.BloodPressureSystolic),
                        BodyTemperature = (int)group.Average(dataObject => dataObject.BodyTemperature),
                        HeartRateRecovery = (int)group.Average(dataObject => dataObject.HeartRateRecovery),
                        HeartRateVariability = (int)group.Average(dataObject => dataObject.HeartRateVariability),
                        OxygenSaturation = (int)group.Average(dataObject => dataObject.OxygenSaturation),
                        RespiratoryRate = (int)group.Average(dataObject => dataObject.RespiratoryRate),
                        RestingHeartRate = (int)group.Average(dataObject => dataObject.RestingHeartRate)
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
        currentTimeScale = (DataTimescale)newScale;

        myChart.chartData.categories = dateTimesArray[(int)currentTimeScale];

        SetTimespanWithList(avgValueByTimescaleArray[(int)currentTimeScale]);

        myChart.UpdateChart();
    }

    public void ChangeStartDate(DateTime newStartDate)
    {
        if (!newStartDate.Equals(startDate))
        {
            startDate = newStartDate;
            timeframeChanged= true;
        }
    }

    public void ChangeStartDate(CalendarUI calendarUI)
    {
        if (!calendarUI.GetSelectedDate().Equals(startDate))
        {
            startDate = calendarUI.GetSelectedDate();
            timeframeChanged = true;
        }
    }

    public void ChangeEndDate(DateTime newEndDate)
    {
        if (!newEndDate.Equals(endDate))
        {
            endDate = newEndDate;   
            timeframeChanged= true;
        }
    }

    public void ChangeEndDate(CalendarUI calendarUI)
    {
        if (!calendarUI.GetSelectedDate().Equals(endDate))
        {
            endDate = calendarUI.GetSelectedDate();
            timeframeChanged = true;
        }
    }

    public void RefreshChart()
    {
        if (timeframeChanged)
        {
            CalculateAllAverages(startDate, endDate);
            timeframeChanged = false;
        }

        

        myChart.chartData.categories = dateTimesArray[(int)currentTimeScale];

        SetTimespanWithList(avgValueByTimescaleArray[(int)currentTimeScale]);

        myChart.UpdateChart();
    }




    public void ToggleDataType(DataType dataType)
    {
        Series currentSeries = new Series();
        switch (dataType)
        {
            case DataType.AverageHeartRate:
                currentSeries = series_AvgHeartRate;
                break;
            case DataType.BreathsPerMinute:
                currentSeries = series_BreathsPerMin;
                break;
            case DataType.SessionLength: 
                currentSeries = series_SessionLength; 
                break;
            case DataType.AtrialFibBurden:
                currentSeries = series_AtrialFibBurden;
                break;
            case DataType.BloodPressureDiastolic:
                currentSeries = series_BloodPressureDiastolic;
                break;
            case DataType.BloodPressureSystolic:
                currentSeries = series_BloodPressureSystolic;
                break;
            case DataType.BodyTemperature:
                currentSeries = series_BodyTemperature;
                break;
            case DataType.HeartRateRecovery:
                currentSeries = series_HeartRateRecovery;
                break;
            case DataType.HeartRateVariability:
                currentSeries = series_HeartRateVariability;
                break;
            case DataType.OxygenSaturation:
                currentSeries = series_OxygenSaturation;
                break;
            case DataType.RespiratoryRate:
                currentSeries = series_RespiratoryRate;
                break;
            case DataType.RestingHeartRate:
                currentSeries = series_RestingHeartRate;
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

    public void ToggleSessionLength() => ToggleDataType(DataType.SessionLength);

    public void ToggleAtrialFibBurden() => ToggleDataType(DataType.AtrialFibBurden);
    public void ToggleBloodPressureDiastolic() => ToggleDataType(DataType.BloodPressureDiastolic);
    public void ToggleBloodPressureSystolic() => ToggleDataType(DataType.BloodPressureSystolic);
    public void ToggleBodyTemperature() => ToggleDataType(DataType.BodyTemperature);
    public void ToggleHeartRateRecovery() => ToggleDataType(DataType.HeartRateRecovery);
    public void ToggleHeartRateVariability() => ToggleDataType(DataType.HeartRateVariability);
    public void ToggleOxygenSaturation() => ToggleDataType(DataType.OxygenSaturation);
    public void ToggleRespiratoryRate() => ToggleDataType(DataType.RespiratoryRate);
    public void ToggleRestingHeartRate() => ToggleDataType(DataType.RestingHeartRate);



    public void MakeRandomData()
    {
        saveLoad.DeleteSaveFile();
        DateTime prevDate = new DateTime(2021,1,1);
        for (int i = 0; i < 100; i++)
        {

            SessionData newData = new SessionData()
            {
                AvgHeartRate = UnityEngine.Random.Range(30, 80),
                BreathRate = UnityEngine.Random.Range(2, 8),
                SessionLength = UnityEngine.Random.Range(1, 40),
                DateCompleted = prevDate.AddHours(120).ToString("yyyy-MM-dd"),
                AtrialFibBurden = UnityEngine.Random.Range(1, 20),
                BloodPressureDiastolic = UnityEngine.Random.Range(1, 20),
                BloodPressureSystolic = UnityEngine.Random.Range(20, 30),
                BodyTemperature = UnityEngine.Random.Range(30, 40),
                HeartRateRecovery = UnityEngine.Random.Range(40, 50),
                HeartRateVariability = UnityEngine.Random.Range(50, 60),
                OxygenSaturation = UnityEngine.Random.Range(60, 70),
                RespiratoryRate = UnityEngine.Random.Range(70, 80),
                RestingHeartRate = UnityEngine.Random.Range(80, 90)
            };

            prevDate = DateTime.ParseExact(newData.DateCompleted, "yyyy-MM-dd", CultureInfo.InvariantCulture);
            saveLoad.SaveSessionData(newData);
        }
    }

    public void ClearSavedData()
    {
        saveLoad.DeleteSaveFile();
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