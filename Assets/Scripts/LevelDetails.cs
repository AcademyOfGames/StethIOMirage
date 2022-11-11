using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class LevelDetails : MonoBehaviour
{
    public Image levelImageUI;
    public TextMeshProUGUI levelTextUI;
    public TextMeshProUGUI levelTitleUI;
    public string scene;
    

    
    
    public void SetLevelDetails(string sceneName, string titleText,string bodyText,Sprite sceneImage)
    {
        levelImageUI.overrideSprite = sceneImage;
        levelTextUI.text = bodyText;
        levelTitleUI.text = titleText;
        scene = sceneName;
    }
}
