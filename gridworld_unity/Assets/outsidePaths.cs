using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[RequireComponent (typeof(LineRenderer))]
public class outsidePaths : MonoBehaviour {
	LineRenderer linerender;
	//private Transform[] points; // vector of waypoints, make public later on 
	public Vector3Int newcell;
	public Vector3 newcell_pos;
	private Vector3[] waypoints;
	private Vector3 gridcenter;
	private Grid gridWorld;
	int seg = 2;

	// Use this for initialization
	void Start () {
		linerender = GetComponent<LineRenderer>();
		waypoints = new Vector3[seg];
		
		// Set positions based on grid world 
		gridcenter = new Vector3(); 
		gridWorld = transform.parent.GetComponent<Grid>();

		// Test new cell 
		newcell = new Vector3Int(500,400,900);
	}
	
	// Update is called once per frame
	void Update () {
		
		gridcenter = gridWorld.LocalToCell(transform.localPosition);
		
		// Testing 
		// Want: Give a cell coordinate, give local coordinates of that cell 
		// Given GRID coordinate convert to LOCAL coordinates 
		Debug.Log("START");
		Debug.Log("Original pos");
		Debug.Log(newcell);
		Debug.Log("Cell to Local");
		Debug.Log(gridWorld.CellToLocal(newcell));
		Debug.Log("Cell to World");
		Debug.Log(gridWorld.CellToWorld(newcell));
		Debug.Log("Cell to World to Local");
		Debug.Log(gridWorld.WorldToLocal(gridWorld.CellToWorld(newcell)));
		// Debug.Log("Local to Cell");
		// Debug.Log(gridWorld.LocalToCell(newcell));
		// Debug.Log("World to Cell");
		// Debug.Log(gridWorld.WorldToCell(newcell));
		Debug.Log("FINISH");
		
		Line(newcell);
		
	}
	void Line(Vector3 gridcenter){
		// Set dummy waypoints 
		waypoints[0] = new Vector3(gridcenter.x,gridcenter.y,gridcenter.z);
		waypoints[1] = new Vector3(gridcenter.x + 200, gridcenter.y + 200, gridcenter.z);
		//waypoints[2] = new Vector3(gridcenter.x + 1, gridcenter.y, gridcenter.z);
		// for (int i = 0; i < waypoints.Length; i++){
		//  	vals[i] = points[i].position;
		//  }
		for (int i = 0; i < seg; i++){
		 	//float t = i / (float)seg;
		 	linerender.positionCount = seg;
		 	linerender.SetPositions(waypoints);
		}
	}
}