using UnityEngine;
using System.Collections;

public class MouseController : InputController {

    public const int LEFT = 0;
    public const int RIGHT = 1;
    public const int MIDDLE = 2;
    
    // Use this for initialization
    protected new void Start () {
        base.Start();
    }
	
	// Update is called once per frame
	void Update () {
        if (Input.GetMouseButton(LEFT)) this.leftButtonDown();
        else this.leftButtonUp();
        if (Input.GetMouseButton(RIGHT)) this.rightButtonDown();
        else this.rightButtonUp();
        if (Input.GetMouseButton(MIDDLE)) this.middleButtonDown();
        else this.middleButtonUp();
    }

    void leftButtonDown()
    {
        this.overGameObject(Input.mousePosition);
    }
    void leftButtonUp()
    {
        this.releaseGameObject();
    }
    void rightButtonDown()
    {
    }
    void rightButtonUp()
    {

    }
    void middleButtonDown()
    {
    }
    void middleButtonUp()
    {

    }




}
