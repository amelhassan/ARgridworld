using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using UnityEditor;

public class convert_to_json : MonoBehaviour {

	// Use this for initialization
	void Start () {
		string path = "Assets/StreamingAssets/data.text"; // fix, change to json ext 
        StreamWriter writer = new StreamWriter(path, true);
        writer.WriteLine(JsonUtility.ToJson(this));
        writer.Close();
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
