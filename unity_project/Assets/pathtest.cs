using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent (typeof(LineRenderer))]
public class pathtest : MonoBehaviour {
	LineRenderer linerender;
	//private Transform[] points; // vector of waypoints, make public later on 
	private Vector3[] waypoints;
	int seg = 2;

	// Use this for initialization
	void Start () {
		linerender = GetComponent<LineRenderer>();
		waypoints = new Vector3[seg];
		Line();
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	void Line(){
		// Set dummy waypoints 
		Vector3 pos = new Vector3(0,0,0);
		waypoints[0] = new Vector3(pos.x,pos.y,pos.z);
		waypoints[1] = new Vector3(pos.x, pos.y + 2, pos.z + 1);
		//waypoints[2] = new Vector3(pos.x + 1, pos.y, pos.z);
		// for (int i = 0; i < waypoints.Length; i++){
		//  	vals[i] = points[i].position;
		//  }
		for (int i = 0; i < seg; i++){
		 	//float t = i / (float)seg;
		 	linerender.positionCount = seg;
		 	linerender.SetPositions(waypoints);
		}

		//Debug.Log("TEST: Position of first waypoint");
		//Debug.Log(waypoints[0]);
	}
}
