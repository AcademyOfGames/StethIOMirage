using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LibraryManager : MonoBehaviour
{
    public Transform insideLibrary;

    public Transform outsideLibrary;

    public Transform player;

    public GameObject loadingScreen;

    public void EnterLibrary()
    {
        loadingScreen.SetActive(true);
        player.position = insideLibrary.position;
        Invoke("DisableLoadingScreen", 1.4f);
    }

    void DisableLoadingScreen()
    {
        loadingScreen.SetActive(false);

    }
}
