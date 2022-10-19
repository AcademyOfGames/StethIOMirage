using System;
using System.Collections;
using System.Collections.Generic;
using System.Net.Sockets;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class ScrollRectSnap : MonoBehaviour
{
    public RectTransform panel;
    public Button[] bttn;
    public RectTransform center;

    private float[] distance;
    private bool dragging;

    private int bttnDistance;
    private int minButtonNum;

    private void Start()
    {
        int bttnLength = bttn.Length;
        distance = new float[bttnLength];

        bttnDistance = (int) Mathf.Abs(bttn[1].GetComponent<RectTransform>().anchoredPosition.x -
                                       bttn[0].GetComponent<RectTransform>().anchoredPosition.x);
    }

    private void Update()
    {
        for (int i = 0; i < bttn.Length; i++)
        {
                distance[i] = Mathf.Abs(center.transform.position.x - bttn[i].transform.position.x);

        }

        float minDistance = Mathf.Min(distance);
        for (int i = 0; i < bttn.Length; i++)
        {
            bttn[i].GetComponent<CanvasGroup>().alpha = Mathf.InverseLerp( 400,7.2f,distance[i]);
 
            if (minDistance == distance[i])
            {
                if (minButtonNum != i)
                {
                    minButtonNum = i;
                    StartCoroutine("HighlightBttn",bttn[i].transform); 
                }
            }
            else
            {
                if (bttn[i].transform.localScale.x > 1f)
                {
                    StartCoroutine("DehighlightBttn",bttn[i].transform);
                }
                //bttn[i].transform.localScale = Vector3.one;
            }
            
        }

        if (!dragging)
        {
            LerpToBttn(minButtonNum * -bttnDistance);
        }
    }

    IEnumerator HighlightBttn(Transform button)
    {
        while(button.localScale.x < 1.2f)
        {
            button.localScale += Vector3.one * Time.deltaTime * .8f;
            yield return null;
        }
    }
    IEnumerator DehighlightBttn(Transform button)
    {
        while(button.localScale.x > 1f)
        {
            button.localScale -= Vector3.one * Time.deltaTime * .06f;
            yield return null;
        }
    }
    private void LerpToBttn(int position)
    {
        float newX = Mathf.Lerp(panel.anchoredPosition.x, position, Time.deltaTime * 10f);
        Vector2 newPosition = new Vector2(newX, panel.anchoredPosition.y);

        panel.anchoredPosition = newPosition;
    }

    public void StartDrag()
    {
        dragging = true;
    }

    public void EndDrag()
    {
        dragging = false;
    }

    public void SelectLevel()
    {
        
    }
}
