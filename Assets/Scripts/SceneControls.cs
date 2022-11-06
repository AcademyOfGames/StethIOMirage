using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneControls : MonoBehaviour
{
    private string examRoom = "";

    public Renderer loadingBG;
    public TextMeshPro loadingText;
    
    // Start is called before the first frame update
    void Start()
    {

    }

    public  void LoadWorld()
    {
        StartCoroutine(nameof(FadeLoadingIn));
    }

    IEnumerator FadeLoadingIn()
    {
        float timePassed = 0;
        Color visible = Color.white;
        while (timePassed <= 1)
        {
            loadingText.gameObject.SetActive(true);
            loadingBG.gameObject.SetActive(true);
            loadingText.color =  Color.Lerp(loadingText.color, visible, timePassed);
            loadingBG.material.color = Color.Lerp(loadingBG.material.color, visible, timePassed);
            timePassed += Time.deltaTime *.3f;
            yield return new WaitForEndOfFrame();
        }
        SceneManager.LoadSceneAsync(FindObjectOfType<LevelDetails>().scene);
    }
    
    public  void BackToLobby()
    {
        SceneManager.LoadScene("futuristicExamRoom");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
