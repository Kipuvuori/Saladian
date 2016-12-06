using UnityEngine;
using System.Collections;

public class TouchController : InputController {

    private bool shooting = false;

    protected new void Awake()
    {
        base.Awake();
    }

    // Use this for initialization
    protected new void Start () {
        base.Start();
    }

    protected new void Update()
    {
        base.Update();
        if (Input.touchCount > 0)
        {
            this.computeFingers();
        }
        else this.noFingers();
    }


    void computeFingers()
    {
        bool moved = false;
        bool shooted = false;
        foreach (Touch touch in Input.touches)
        {
            if (touch.phase != TouchPhase.Ended && touch.phase != TouchPhase.Canceled)
            {
                Vector3 position = touch.position;
                if (moved || !this.movePlayer(position))
                {
                    if (!shooted)
                    {
                        Debug.Log("SHOOOOTTINNNNGGG!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
                        Debug.Log(this.selected);
                        this.shoot();
                        shooted = true;
                        shooting = true;
                    }
                }
                else moved = true;
            }
        }

        if(!shooted) shooting = false;
        if(!moved) this.releaseGameObject();
    }

    
    void noFingers()
    {
        this.releaseGameObject();
        shooting = false;
    }
}
