using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable] // Serializable class into JSON form
public class Item {
	public string item_Name; // building, fire, person (use label to access sprite)
	public int item_PosX; // x location in tilemap
	public int item_PosY; // y location in tilemap
}
