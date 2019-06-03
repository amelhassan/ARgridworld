using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
[RequireComponent (typeof(LineRenderer))]


public class Paths : MonoBehaviour {
    public GameObject targetObj;
    public GameObject cozmo;
    public PopulateMap tilemap;
    public Camera arCamera; 

    LineRenderer linerender;
	//private Transform[] points; // vector of waypoints, make public later on 
    private Vector3[] waypoints;
	private Vector3 gridcenter;
	private Grid gridWorld;
	private qrTrackableEventHandler targetTracker;
    private qrTrackableEventHandler cozmoTracker; 
	int seg = 5;

	// Use this for initialization
	void Start () {
		// For path initialization:
		linerender = GetComponent<LineRenderer>();
		waypoints = new Vector3[seg];
		
		// Set positions based on grid world:
		gridcenter = new Vector3(); 
		gridWorld = transform.parent.GetComponent<Grid>();

        //// For testing: 
        ////newcell = new Vector3Int(5,4,0);
        //startingcell = new Vector3Int();
        //startingcell = gridWorld.LocalToCell(cozmo.transform.localPosition);

        //// Get gameobject representing Cozmo's target/goal:
        //// My code: 
        //endingcell = new Vector3Int();
        //endingcell = gridWorld.LocalToCell(targetObj.transform.localPosition); 

        targetTracker = targetObj.GetComponent<qrTrackableEventHandler>();
        cozmoTracker = cozmo.GetComponent<qrTrackableEventHandler>(); 

	}
	
	// Update is called once per frame
	void Update () {

        gridcenter = gridWorld.LocalToCell(transform.localPosition);

        if (targetTracker.isTracked && cozmoTracker.isTracked){
            // FIX: Should convert world coordiantes to local (but cell seems to work better)
            //startingcell = gridWorld.WorldToCell(startingcell);
            //Vector3 startingcell = gridWorld.LocalToCell(cozmo.transform.localPosition);

            //Debug.Log("POS OF STARTINGCELL in local");
            //Debug.Log(cozmo.transform.localPosition);

            //Vector3 endingcell = gridWorld.LocalToCell(targetObj.transform.localPosition);
            //         Debug.Log("POS of TARGET CELL in local");
            //Debug.Log(targetObj.transform.localPosition);

            //Line(cozmo.transform.localPosition, targetObj.transform.localPosition);
            GreenDemoLine();  

		}

		
        /**** AMEL'S CODE ****/ 

		
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
		//Line(newcell);
        /**** END ****/ 
		
	}
	
    void GreenDemoLine()
    {
        Debug.Log("IN GreenDemoLine"); 
       // Vector3[] segment1 = new Vector3[4];
       // segment1[0] = new Vector3(gridcenter.x + 20, gridcenter.y, gridcenter.z);
       // segment1[1] = new Vector3(gridcenter.x + 60, gridcenter.y + 50, gridcenter.z);
       // segment1[2] = new Vector3(gridcenter.x + 50, gridcenter.y + 50, gridcenter.z);
       // segment1[3] = new Vector3(gridcenter.x + 40, gridcenter.y + 50, gridcenter.z);


       //// for (int i = 0; i < 4; i++){
        //  //float t = i / (float)seg;
        //  //linerender.positionCount = seg;
        //  linerender.SetPositions(segment1);
        //// }

        //Debug.Log("Drew the line");


        // Set dummy waypoints 
        waypoints[0] = new Vector3(gridcenter.x,gridcenter.y,gridcenter.z);
        waypoints[1] = new Vector3(gridcenter.x + 20, gridcenter.y, gridcenter.z);
        waypoints[2] = new Vector3(gridcenter.x + 20, gridcenter.y + 20, gridcenter.z);
        waypoints[3] = new Vector3(gridcenter.x + 30, gridcenter.y + 20, gridcenter.z);
        waypoints[4] = new Vector3(gridcenter.x + 30, gridcenter.y + 30, gridcenter.z);

        // for (int i = 0; i < waypoints.Length; i++){
        //    vals[i] = points[i].position;
        //  }

        for (int i = 0; i < seg; i++){
          //float t = i / (float)seg;
          linerender.positionCount = seg;
          linerender.SetPositions(waypoints);
        }

        Debug.Log("Finished Amel's line");
    }


    void Line(Vector3 startingpos, Vector3 endingpos){
        /**** AMEL'S CODE ****/
        //// Set dummy waypoints 
        //waypoints[0] = new Vector3(gridcenter.x,gridcenter.y,gridcenter.z);
        //waypoints[1] = new Vector3(gridcenter.x + 20, gridcenter.y, gridcenter.z);
        //waypoints[2] = new Vector3(gridcenter.x + 20, gridcenter.y + 20, gridcenter.z);
        //waypoints[3] = new Vector3(gridcenter.x + 30, gridcenter.y + 20, gridcenter.z);
        //waypoints[4] = new Vector3(gridcenter.x + 30, gridcenter.y + 30, gridcenter.z);

        //// for (int i = 0; i < waypoints.Length; i++){
        ////  	vals[i] = points[i].position;
        ////  }

        //for (int i = 0; i < seg; i++){
        // 	//float t = i / (float)seg;
        // 	linerender.positionCount = seg;
        // 	linerender.SetPositions(waypoints);
        //}
        /**** END ****/

        Debug.Log("IN LINE");

        // TRYING TO USE CELL POSITIONS?? 
        // PROBLEM: the movement is so small that it doesn't register as movement
        //          between two cells -> WHY??? 
        //int howFarx = (int)startingcell.x - (int)endingcell.x;
        //int howFary = (int)startingcell.y - (int)endingcell.y;
        //Vector3[] waypointsX = new Vector3[howFarx];
        //Vector3[] waypointsY = new Vector3[howFary];
        // PROBLEM: CURRENLTY ONLY WORKS FOR POSITIVE VALUES 
        //for (int i = 0; i < howFarx; i++)
        //{
        //    waypointsX[i] = new Vector3(startingcell.x + i, startingcell.y);
        //}
        //for (int i = 0; i < howFary; i++)
        //{
        //    waypointsY[i] = new Vector3(startingcell.x + howFarx, startingcell.y + i);
        //}

        //linerender.SetPositions(waypointsX);
        //linerender.SetPositions(waypointsY);

        // TRYING TO USE LOCAL POSITION??
        //PROBLEM: again, too small to register a big enough difference. Things
        //      were appearing, but not where we wanted them to and it was very
        //      unpredictable 
        //float howFarx = startingpos.x - endingpos.x;
        //float howFary = startingpos.z - endingpos.z; 
        //Debug.Log(howFarx);
        //Debug.Log(howFary);

        //// THIS DOESN'T WORK BECAUSE ROUNDING IS NOT TAKEN INTO ACCOUNT, SO IT'S
        //// ALWAYS SLIGHTLY DIFFERENT 
        //// (I was trying to fix the problem that the local position only changes 
        //// by 10ths or 100ths) 
        //howFarx = (int)(howFarx * 100);
        //howFary = (int)(howFary * 100);

        //Debug.Log(howFarx);
        //Debug.Log(howFary); 

        //if(startingpos.x >= endingpos.x)
        //{

        //}

        //Vector3Int startingcell = gridWorld.LocalToCell(startingpos);

        //for(int i = 0; i < howFarx; i++)
        //{
        //    tilemap.MakeTile(startingcell.x + i, startingcell.z); 
        //}
        //for(int i = 0; i < howFary; i++)
        //{
        //    tilemap.MakeTile(startingcell.x + (int)howFarx, startingcell.z + i); 
        //}


        // THIRD TIMES THE CHARM?? 
        // Using Camera position converted to World position converted to Cell? 

        // PROBLEM: no function to take local position (aka in relation to camera) 
        //      and convert to world? 

        //startingpos = arCamera.cameraToWorldMatrix(startingpos); 

        //float howFarx = startingpos.x - endingpos.x;
        //float howFary = startingpos.z - endingpos.z; 

    }
}
