using UnityEngine;
using System.Collections;

public class MouseController : InputController {

    public const int LEFT = 0;
    public const int RIGHT = 1;
    public const int MIDDLE = 2;
    private bool shooting = false;

    protected new void Awake()
    {
        base.Awake();
    }

    // Use this for initialization
    protected new void Start () {
        base.Start();
    }

    // Update is called once per frame
    protected new void Update()
    {
        base.Update();
        if (Input.GetMouseButton(LEFT)) this.leftButtonDown();
        else this.leftButtonUp();
        if (Input.GetMouseButton(RIGHT)) this.rightButtonDown();
        else this.rightButtonUp();
        if (Input.GetMouseButton(MIDDLE)) this.middleButtonDown();
        else this.middleButtonUp();
    }

    void leftButtonDown()
    {
        this.movePlayer(Input.mousePosition, false);
    }
    void leftButtonUp()
    {
        this.releaseGameObject();
    }
    void rightButtonDown()
    {
        if (!shooting)
        {
            this.shoot();
            shooting = true;
        }
    }
    void rightButtonUp()
    {
        shooting = false;
    }
    void middleButtonDown()
    {
    }
    void middleButtonUp()
    {

    }




}
