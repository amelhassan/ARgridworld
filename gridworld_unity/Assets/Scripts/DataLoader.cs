using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System.IO; 
public class DataLoader : MonoBehaviour {

	private string gameDataFileName = "data.json";
	// public  

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void LoadGameObject(){
		// json file must be saved in streamingAssets folder 
		string filePath = Path.Combine(Application.streamingAssetsPath, gameDataFileName);
		if (File.Exists(filePath)){
			string dataAsJson = File.ReadAllText(filePath);
			//GameData loadedData = JsonUtility.FromJson<GameData>(dataAsJson);
			//allRoundData = loadedData.allRoundData; // FIX, need to add 
		}
		else {
			Debug.LogError("Cannot load game data ERROR!");
		}
	}
}
