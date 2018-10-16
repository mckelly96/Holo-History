using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RogoDigital.Lipsync;

public class startlip : MonoBehaviour {
	public LipSync lips;
	public LipSyncData data;
	// Use this for initialization
	void Start () {
		lips.Play(data);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
