using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class CalendarUI : MonoBehaviour
{
    public bool isStartCalendar;

    public TMP_Dropdown monthDropdown;
    public TMP_Text yearText;
    public GameObject dayButtonPrefab;
    public GridLayoutGroup dayGrid;
    public SessionDataLoader sessionDataLoader;

    private int year = DateTime.Today.Year;
    private int month = DateTime.Today.Month;
    private int day = DateTime.Today.Day;

    public int Year { get => year; set => year = value; }
    public int Month { get => month; set => month = value; }
    public int Day { get => day; set => day = value; }

    void Start()
    {
        
    }

    public void SetupCalendar()
    {
        this.gameObject.SetActive(true);
        // Populate the month dropdown with the names of the months
        monthDropdown.ClearOptions();
        monthDropdown.AddOptions(DateTimeFormatInfo.CurrentInfo.MonthNames.ToList());
        monthDropdown.value = month - 1;
        monthDropdown.onValueChanged.AddListener(OnMonthChanged);

        // Set the year text to the current year
        yearText.text = year.ToString();

        //Set month option to the current start and end months.
        if (isStartCalendar)
        {
            monthDropdown.value = sessionDataLoader.StartDate.Month - 1;
            year = sessionDataLoader.StartDate.Year;
            yearText.text = year.ToString();
            month = sessionDataLoader.StartDate.Month;
        }
        else
        {
            monthDropdown.value = sessionDataLoader.EndDate.Month - 1;
            year = sessionDataLoader.EndDate.Year;
            yearText.text = year.ToString();
            month = sessionDataLoader.EndDate.Month;
        }




        // Generate the calendar day buttons for the current month
        GenerateCalendar();
    }

    // This function is called when the user selects a different month from the dropdown
    void OnMonthChanged(int value)
    {
        month = value + 1;
        GenerateCalendar();
    }

    public void IncreaseYear()
    {
        year++;
        yearText.text = year.ToString();
        GenerateCalendar();
    }

    public void DecreaseYear()
    {
        year--;
        yearText.text = year.ToString();
        GenerateCalendar();
    }

    public void GenerateCalendar()
    {
        // Clear the current calendar day buttons
        foreach (Transform child in dayGrid.transform)
        {
            Destroy(child.gameObject);
        }

        // Get the first day of the month
        var firstDay = new DateTime(year, month, 1);

        // Get the number of days in the month
        int numDays = DateTime.DaysInMonth(year, month);

        // Get the day of the week of the first day of the month (0 = Sunday, 1 = Monday, etc.)
        int firstDayOfWeek = (int)firstDay.DayOfWeek;

        // Add blank buttons for the days of the week before the first day of the month
        for (int i = 0; i < firstDayOfWeek; i++)
        {
            var dayButton = Instantiate(dayButtonPrefab, dayGrid.transform);
            dayButton.GetComponentInChildren<TMP_Text>().text = "";
            dayButton.GetComponent<Button>().interactable = false;
        }

        // Add buttons for the days of the month
        for (int i = 1; i <= numDays; i++)
        {
            var dayButton = Instantiate(dayButtonPrefab, dayGrid.transform);
            dayButton.GetComponentInChildren<TMP_Text>().text = i.ToString();

            // Set the button's onClick event to select the day
            int day = i;
            dayButton.GetComponent<Button>().onClick.AddListener(() => OnDaySelected(day));

            if (isStartCalendar && day == sessionDataLoader.StartDate.Day && month == sessionDataLoader.StartDate.Month && year == sessionDataLoader.StartDate.Year)
            {
                dayButton.GetComponent<Image>().color= Color.blue;
            }

            if (!isStartCalendar && day == sessionDataLoader.EndDate.Day && month == sessionDataLoader.EndDate.Month && year == sessionDataLoader.EndDate.Year)
            {
                dayButton.GetComponent<Image>().color = Color.red;
            }
        }
    }

    void OnDaySelected(int day)
    {
        // Save the selected day to a variable or save file
        this.day = day;

        if (isStartCalendar)
        {
            sessionDataLoader.ChangeStartDate(this);
            
        }
        else
        {
            sessionDataLoader.ChangeEndDate(this);
        }

        sessionDataLoader.RefreshChart();
        GenerateCalendar();


    }

    public DateTime GetSelectedDate()
    {
        return new DateTime(Year, Month, Day);
    }
}
