using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

// Script to move grid relative to QR code 
public class gridpos : MonoBehaviour
{
    public Tilemap curr_tilemap;
	public GameObject qr_gameobj;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
    	Debug.Log("QR Transform POS");
    	Debug.Log(qr_gameobj.transform.position);
        curr_tilemap.origin = new Vector3Int((int) qr_gameobj.transform.position.x + 1,
            (int)qr_gameobj.transform.position.y, (int) qr_gameobj.transform.position.x);
        Debug.Log("Tilemap ORIGIN");
        Debug.Log(curr_tilemap.origin);
        //transform.position = qr_gameobj.transform.position; 
        	//qr_gameobj.transform.TransformDirection(new Vector3(0,1,-1));

        //Debug.Log("New current object transformation");
        //Debug.Log(transform.position);

    }
}
