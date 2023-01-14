using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Linq;
using Newtonsoft.Json;
using ChartUtil;


public class JSONSaveLoad
{
    private string saveFolder = Application.persistentDataPath + "/MirageSaves";
    private string saveFilePath = Application.persistentDataPath + "/MirageSaves/sessionData.json";
    public void SaveData(ref SessionData newSession)
    {
        string path = Application.persistentDataPath + "/MirageSaves/";

        //string json = JsonUtility.ToJson(newSession);
        //Directory.CreateDirectory(path);
        //File.WriteAllText(path  + newSession.TimeCompleted + ".json", json);

        string newFile = JsonUtility.ToJson(newSession);
        FileInfo file = new FileInfo(path + newSession.FileName + ".json");
        file.Directory.Create();
        File.WriteAllText(file.FullName, newFile);
    }

    public void SaveSessionData(SessionData data)
    {
        // Check if the save data file exists
        if (File.Exists(saveFilePath))
        {
            // Read the existing save data from the file
            string saveDataJson = File.ReadAllText(saveFilePath);
            List<SessionData> saveData = JsonConvert.DeserializeObject<List<SessionData>>(saveDataJson);

            // Add the new data to the save data
            saveData.Add(data);

            // Write the updated save data to the file
            string updatedSaveDataJson = JsonConvert.SerializeObject(saveData);
            File.WriteAllText(saveFilePath, updatedSaveDataJson);
        }
        else
        {
            // Create a new list with the new data
            List<SessionData> saveData = new List<SessionData> { data };

            // Write the new save data to the file
            string saveDataJson = JsonConvert.SerializeObject(saveData);
            Directory.CreateDirectory(saveFolder);
            File.WriteAllText(saveFilePath, saveDataJson);
        }
    }

    public List<SessionData> LoadAllSessions()
    {
        List<SessionData> sessionList = new List<SessionData>();
        string path = Application.persistentDataPath + "/MirageSaves/";

        var info = new DirectoryInfo(path);
        var files = info.GetFiles("*.json").OrderBy(f => f.CreationTime);
        

        foreach(var file in files)
        {
            SessionData session = new SessionData();
            string json = File.ReadAllText(file.FullName);
            JsonUtility.FromJsonOverwrite(json, session);
            sessionList.Add(session);

        }

        return sessionList;

    }

    public List<SessionData> LoadSessionData()
    {
        List<SessionData> loadData;
        // Check if the save data file exists
        if (File.Exists(saveFilePath))
        {
            // Read the existing save data from the file
            string saveDataJson = File.ReadAllText(saveFilePath);
            loadData = JsonConvert.DeserializeObject<List<SessionData>>(saveDataJson);


        }
        else
        {
            // Create a new list with the new data
            loadData = new List<SessionData>();

            Debug.Log("There is no save file!!");
        }

        return loadData;
    }

    public void DeleteSaveFile()
    {
        // Check if the save file exists
        if (File.Exists(saveFilePath))
        {
            // Delete the save file
            File.Delete(saveFilePath);
        }
    }
}
