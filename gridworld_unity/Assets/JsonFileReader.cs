using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JsonFileReader {
	public static string LoadJsonAsResource(string path){
		string jsonFilePath = path.Replace(".json", "");
		Debug.Log(jsonFilePath);
		TextAsset loadedJsonfile = Resources.Load<TextAsset>(jsonFilePath); // any text object (such as a JSON file)
		return loadedJsonfile.text;
		// FIX, add file error checker 
	}

}
