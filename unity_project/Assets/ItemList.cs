using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable] // Serializable class into JSON form
public class ItemList {
	public Item[] items;
}

//JsonUtility.FromJson<ItemList>(...);