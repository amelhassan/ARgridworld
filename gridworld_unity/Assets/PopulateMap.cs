﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System.IO; 
using UnityEngine.Tilemaps;

public class PopulateMap : MonoBehaviour {

	public Item currItem;
	public Tilemap tileWorld;
	public TileBase tileBase;
	private Vector3Int tilePosition = new Vector3Int(0,0,0); // init pos 

	// Obtain JSON file 
	void Awake(){
			//string filePath = "Items/Fire.json";
			//string LoadedItem = JsonFileReader.LoadJsonAsResource(filePath);
			//Debug.Log(LoadedItem);
			//currItem = JsonUtility.FromJson<Item>(LoadedItem);  // parse into item type
			//Debug.Log(currItem.item_Name);
	}
	// Use this for initialization
	void Start () {
		//tilePosition.x = currItem.item_PosX;
		//tilePosition.y = currItem.item_PosY;
		//tileWorld.SetTile(tilePosition, tileBase);
	}

    public void MakeTile (Vector3Int cell)
    {
        Debug.Log("In MakeTile\n"); 
        tileWorld.SetTile(cell, tileBase); 
    }

    // Update is called once per frame
    void Update () {
		//int numtiles = tileWorld.GetUsedTilesCount();
		//Debug.Log("Number of tiles");
		//Debug.Log(numtiles);	
	}
}
