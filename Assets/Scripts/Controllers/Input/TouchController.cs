using UnityEngine;
using System.Collections;

public class TouchController : InputController {

    // Use this for initialization
    protected new void Start () {
	
	}
	
    void Update()
    {
        if (Input.touchCount > 0) this.leftButtonDown();
        else this.leftButtonUp();
    }

    void leftButtonDown()
    {
        this.overGameObject(Input.GetTouch(0).position);
    }
    void leftButtonUp()
    {
        this.releaseGameObject();
    }
}
