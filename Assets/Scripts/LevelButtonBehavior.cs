using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class LevelButtonBehavior : MonoBehaviour
{
    public GameObject levelDetails;
    public GameObject levelSelect;

    public string titleText;
    public string sceneName;
    public string text;
    public Sprite sceneImage;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void ShowLevelDetails()
    {
        levelSelect.SetActive(false);
        levelDetails.SetActive(true);
        levelDetails.GetComponent<LevelDetails>().SetLevelDetails(sceneName,titleText,text,sceneImage);
    }
    
    // Update is called once per frame
    void Update()
    {
        
    }
}
