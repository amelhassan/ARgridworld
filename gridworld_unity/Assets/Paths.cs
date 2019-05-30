using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[RequireComponent (typeof(LineRenderer))]
public class Paths : MonoBehaviour {
	LineRenderer linerender;
	//private Transform[] points; // vector of waypoints, make public later on 
	private Vector3Int newcell;
	private Vector3[] waypoints;
	private Vector3 gridcenter;
	private Grid gridWorld;
	public GameObject targetObj;
	private qrTrackableEventHandler the_script;
	int seg = 5;

	// Use this for initialization
	void Start () {
		// For path initialization:
		linerender = GetComponent<LineRenderer>();
		waypoints = new Vector3[seg];
		
		// Set positions based on grid world:
		gridcenter = new Vector3(); 
		gridWorld = transform.parent.GetComponent<Grid>();

		// For testing: 
		newcell = new Vector3Int(5,4,0);

		// Get gameobject representing Cozmo's target/goal:
		the_script = targetObj.GetComponent<qrTrackableEventHandler>();
	}
	
	// Update is called once per frame
	void Update () {
		
		//Debug.Log("TARGET BEING TRACKED?: ");
		//Debug.Log(the_script.isTracked);

		if (the_script.isTracked){
			Transform target_transform = targetObj.transform; // get QR's pos in world frame
			newcell.x = (int)target_transform.position.x;
			newcell.y = (int)target_transform.position.y;
			newcell.z = (int)target_transform.position.z;
			// FIX: Should convert world coordiantes to local (but cell seems to work better)
			newcell = gridWorld.WorldToCell(newcell);
			//Debug.Log("POS of TARGET CELL");
			//Debug.Log(newcell);

			Vector3 target_local = gridWorld.WorldToLocal(newcell);
			//Debug.Log("POS of TARGET LOCAL");
			//Debug.Log(target_local);
		}

		gridcenter = gridWorld.LocalToCell(transform.localPosition);
		
		// Testing 
		// Want: Give a cell coordinate, give local coordinates of that cell 
		// Given GRID coordinate convert to LOCAL coordinates 
		// Debug.Log("START");
		// Debug.Log("Original pos");
		// Debug.Log(newcell);
		// Debug.Log("Cell to Local");
		// Debug.Log(gridWorld.CellToLocal(newcell));
		// Debug.Log("Cell to World");
		// Debug.Log(gridWorld.CellToWorld(newcell));
		// Debug.Log("Cell to World to Local");
		// Debug.Log(gridWorld.WorldToLocal(gridWorld.CellToWorld(newcell)));
		// Debug.Log("Local to Cell");
		// Debug.Log(gridWorld.LocalToCell(newcell));
		// Debug.Log("World to Cell");
		// Debug.Log(gridWorld.WorldToCell(newcell));
		//Debug.Log("FINISH");
		//newcell = new Vector3Int((int)ph.x, (int)ph.y, (int)ph.z);
		Line(newcell);
		
	}
	void Line(Vector3 gridcenter){
		// Set dummy waypoints 
		waypoints[0] = new Vector3(gridcenter.x,gridcenter.y,gridcenter.z);
		waypoints[1] = new Vector3(gridcenter.x + 20, gridcenter.y, gridcenter.z);
		waypoints[2] = new Vector3(gridcenter.x + 20, gridcenter.y + 20, gridcenter.z);
		waypoints[3] = new Vector3(gridcenter.x + 30, gridcenter.y + 20, gridcenter.z);
		waypoints[4] = new Vector3(gridcenter.x + 30, gridcenter.y + 30, gridcenter.z);
		
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
