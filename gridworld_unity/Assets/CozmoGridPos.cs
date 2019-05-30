﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class CozmoGridPos : MonoBehaviour
{
    public PopulateMap curr_map; 
    public Tilemap curr_tilemap;
    public Grid gridWorld; 
    public GameObject qr_cozmo;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log("in Update\n"); 
        gridWorld = transform.parent.GetComponent<Grid>();
        Vector3Int cellPosition = gridWorld.WorldToCell(qr_cozmo.transform.position);
        Debug.Log("Tile position is:\n");
        Debug.Log(cellPosition.x);
        Debug.Log(cellPosition.y); 
        curr_map.MakeTile(cellPosition);   
    }
}
