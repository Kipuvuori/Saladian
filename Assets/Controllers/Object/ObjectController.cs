using UnityEngine;
using System.Collections;

public class ObjectController : MonoBehaviour {
    protected DataObject data
    {
        get {
            return this.data;
        }
        set {
            this.data = value;
        }
    }
	// Use this for initialization
	void Start () {
        data = new DataObject();
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
