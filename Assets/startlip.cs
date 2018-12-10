using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RogoDigital.Lipsync;
using System;

public class startlip : MonoBehaviour {
	public LipSync lips;
	public LipSyncData data;

	public TextMesh vectortext;
	// Use this for initialization
	void Start () {
		//lips.Play(data);
	}
	
	// Update is called once per frame
	void Update () {
//		vectortext.text=((float)(Math.Truncate((double)gameObject.transform.forward.x*100.0) / 100.0))+" "+ ((float)(Math.Truncate((double)gameObject.transform.forward.y*100.0) / 100.0))+" "+ ((float)(Math.Truncate((double)gameObject.transform.forward.z*100.0) / 100.0));
	}
}
