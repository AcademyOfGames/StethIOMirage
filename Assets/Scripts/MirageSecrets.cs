using UnityEngine;

// Connection settings and test logins that must not live in source control.
// Values are read from Assets/Resources/MirageSecrets.json, which is git-ignored.
// Copy MirageSecrets.example.json from the project root to that path and fill it in.
[System.Serializable]
public class MirageSecrets
{
    public string mqttHost;
    public int mqttPort = 1883;
    public string mqttUserName;
    public string mqttPassword;

    public string testLoginEmail;
    public string testLoginPassword;

    public string feedbackFormUrl;

    const string ResourceName = "MirageSecrets";
    static MirageSecrets cached;

    public static MirageSecrets Load()
    {
        if (cached != null) return cached;

        var file = Resources.Load<TextAsset>(ResourceName);
        if (file == null)
        {
            Debug.LogError("Missing Assets/Resources/MirageSecrets.json. Copy MirageSecrets.example.json from the project root and fill it in.");
            cached = new MirageSecrets();
        }
        else
        {
            cached = JsonUtility.FromJson<MirageSecrets>(file.text);
        }
        return cached;
    }
}
