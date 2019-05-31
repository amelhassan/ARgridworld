using System.Collections;
using UnityEngine.SceneManagement;
using System.Collections.Generic;
using UnityEngine;

public class menuStart : MonoBehaviour
{
    private void Start()
    {
        void changemenuscene(string scenename)
        {
            SceneManager.LoadScene(scenename);
        }
    }
}
