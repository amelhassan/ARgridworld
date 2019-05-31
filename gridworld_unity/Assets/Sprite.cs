using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sprite : MonoBehaviour
{

    public GameObject tracker; 
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Vector3Int new_pos = new Vector3Int((int)tracker.transform.position.x, 
                                              (int)tracker.transform.position.y,
                                              (int)tracker.transform.position.z + 1);
        transform.position = new_pos; 
     }
}
