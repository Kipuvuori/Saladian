using UnityEngine;
using System.Collections;

public class GameController : MonoBehaviour {
    public static Camera camera
    {
        get {
            return GameObject.Find("Main Camera").GetComponent<Camera>();
        }
    }
	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
