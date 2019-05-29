using System.Collections;
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
    private  


	// Obtain JSON file 
	void Awake(){
			string filePath = "Items/Fire.json";
			string LoadedItem = JsonFileReader.LoadJsonAsResource(filePath);
			Debug.Log(LoadedItem);
			currItem = JsonUtility.FromJson<Item>(LoadedItem);  // parse into item type
			Debug.Log(currItem.item_Name);
	}
	// Use this for initialization
	void Start () {
        Debug.Log("THE ORIGIN IS:"); 
        Debug.Log(tileWorld.origin.x);
        tilePosition.x = 0;
        tilePosition.y = 0; 
        //int[] positions_x = new int[10] { 3, 6, -4, 2, 8, -4, 6, 10, -9, 8};
        //int[] positions_y = new int[10] {5, -2, 3, 8, 6, -5, 3, 1, 0, 5}; 

        //for(int i = 0; i < 10; i++)
        //{
        //    tilePosition.x = tileWorld.origin.x + positions_x[i];
        //    tilePosition.y = tileWorld.origin.y + positions_y[i];
         tileWorld.SetTile(tilePosition, tileBase); 
        //}
	}
	
	// Update is called once per frame
	void Update () {
		int numtiles = tileWorld.GetUsedTilesCount();
		Debug.Log("Number of tiles");
		Debug.Log(numtiles);	
	}
}
