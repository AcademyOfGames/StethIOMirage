using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeightChanger : MonoBehaviour
{
    public GameObject PlayerPos;
    public float yOffset = 0.1f; // change this to adjust the rate of increase
    private Coroutine moveCoroutine;

    //public void StartMovingPlayerYUp()
    //{
    //    if (moveCoroutine != null)
    //    {
    //        StopCoroutine(moveCoroutine);
    //    }
    //    moveCoroutine = StartCoroutine(MovePlayerY(true));
    //}

    //public void StartMovingPlayerYDown()
    //{
    //    if (moveCoroutine != null)
    //    {
    //        StopCoroutine(moveCoroutine);
    //    }
    //    moveCoroutine = StartCoroutine(MovePlayerY(false));
    //}

    //public void StopMovingPlayerY()
    //{
    //    if (moveCoroutine != null)
    //    {
    //        StopCoroutine(moveCoroutine);
    //    }
    //    moveCoroutine = null;
    //}

    //private IEnumerator MovePlayerY(bool moveUp)
    //{
    //    while (true)
    //    {
    //        if (PlayerPos != null)
    //        {
    //            if (moveUp)
    //            {
    //                Vector3 newPos = PlayerPos.transform.position;
    //                newPos.y += yOffset * Time.deltaTime;
    //                PlayerPos.transform.position = newPos;
    //            }
    //            else
    //            {
    //                Vector3 newPos = PlayerPos.transform.position;
    //                newPos.y -= yOffset * Time.deltaTime;
    //                PlayerPos.transform.position = newPos;
    //            }
    //        }
    //        yield return null;
    //    }
    //}

    public void MovePlayerY(bool moveUp)
    {
        if (PlayerPos != null)
        {
            if (moveUp)
            {
                Vector3 newPos = PlayerPos.transform.position;
                newPos.y += yOffset * Time.deltaTime;
                PlayerPos.transform.position = newPos;
            }
            else
            {
                Vector3 newPos = PlayerPos.transform.position;
                newPos.y -= yOffset * Time.deltaTime;
                PlayerPos.transform.position = newPos;
            }
        }
    }
}
