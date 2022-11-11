using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SceneControls : MonoBehaviour
{
    private string examRoom = "";

    public Renderer loadingBG;
    public TextMeshPro loadingText;

    private LevelSettings levelSettings;

    // Reference to the load operation.
    private AsyncOperation loadOperation;

    // Reference to the progress bar in the UI.
    [SerializeField]
    private Slider progressBar;

    // Progress values.
    private float currentValue;
    private float targetValue;

    // Multiplier for progress animation speed.
    [SerializeField]
    [Range(0, 1)]
    private float progressAnimationMultiplier = 0.25f;

    // Start is called before the first frame update
    void Start()
    {
        // Set 0 for progress values.
        progressBar.value = 0;
        currentValue = 0;
        targetValue = 0;

        levelSettings = GameObject.FindGameObjectWithTag("GameController").GetComponent<LevelSettings>();
    }

    public  void LoadWorld()
    {
        levelSettings.ApplyLevelSettings();

        StartCoroutine(nameof(FadeLoadingIn));
    }

    IEnumerator FadeLoadingIn()
    {
        loadOperation = SceneManager.LoadSceneAsync(FindObjectOfType<LevelDetails>().scene);
        loadOperation.allowSceneActivation = false;

        float timePassed = 0;
        Color visible = Color.white;
        while (timePassed <= 3)
        {
            loadingText.gameObject.SetActive(true);
            loadingBG.gameObject.SetActive(true);
            loadingText.color =  Color.Lerp(loadingText.color, visible, timePassed);
            loadingBG.material.color = Color.Lerp(loadingBG.material.color, visible, timePassed);
            timePassed += Time.deltaTime *.3f;
            yield return new WaitForEndOfFrame();
        }

        while (!Mathf.Approximately(currentValue, 1))
        {
            // Assign current load progress, divide by 0.9f to stretch it to values between 0 and 1.
            targetValue = loadOperation.progress / 0.9f;

            // Calculate progress value to display.
            currentValue = Mathf.MoveTowards(currentValue, targetValue, progressAnimationMultiplier * Time.deltaTime);
            progressBar.value = currentValue;
        }

        loadOperation.allowSceneActivation = true;
        
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
