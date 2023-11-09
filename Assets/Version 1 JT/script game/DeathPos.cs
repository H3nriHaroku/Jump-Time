using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeathPos : MonoBehaviour
{
    public Transform startPos;

    private void Start()
    {
        AdsManagment.instance.RequestInterstitial();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            AdsManagment.instance.ShowInterstitial();
            other.gameObject.transform.position = startPos.position;
        }
    }
}