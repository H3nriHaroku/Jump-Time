﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Jumpboost : MonoBehaviour
{
    [Range(100, 10000)]
    public float bounceheight;

    private void OnCollisionEnter(Collision collision)
    {
        GameObject bouncer = collision.gameObject;
        Rigidbody rb = bouncer.GetComponent<Rigidbody>();
        rb.AddForce(Vector3.up * bounceheight);
    }
}
