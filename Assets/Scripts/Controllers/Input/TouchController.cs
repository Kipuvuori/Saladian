using UnityEngine;
using System.Collections;

public class TouchController : InputController {

    protected new void Awake()
    {
        base.Awake();
    }

    // Use this for initialization
    protected new void Start () {
        base.Start();
    }
	
    void Update()
    {
        
        if (Input.touchCount > 0)
        {
            this.touchDown();
        }
        else this.touchUp();
    }

    void touchDown()
    {
        Vector3 position = Input.GetTouch(0).position;
        this.overGameObject(position);
    }
    void touchUp()
    {
        this.releaseGameObject();
    }
}
