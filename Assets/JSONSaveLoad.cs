using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class JSONSaveLoad
{
    public void SaveData(ref SessionData newSession)
    {
        string path = Application.persistentDataPath + "/MirageSaves/";

        //string json = JsonUtility.ToJson(newSession);
        //Directory.CreateDirectory(path);
        //File.WriteAllText(path  + newSession.TimeCompleted + ".json", json);

        string newFile = JsonUtility.ToJson(newSession);
        FileInfo file = new FileInfo(path + newSession.TimeCompleted + ".json");
        file.Directory.Create();
        File.WriteAllText(file.FullName, newFile);
    }

    public List<SessionData> LoadAllSessions()
    {
        List<SessionData> sessionList = new List<SessionData>();
        string path = Application.persistentDataPath + "/MirageSaves/";

        foreach(var file in Directory.EnumerateFiles(path, "*.json"))
        {
            SessionData session = new SessionData();
            string json = File.ReadAllText(file);
            JsonUtility.FromJsonOverwrite(json, session);
            sessionList.Add(session);

        }

        return sessionList;

    }
}
