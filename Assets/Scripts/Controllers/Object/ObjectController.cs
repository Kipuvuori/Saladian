using UnityEngine;

public class ObjectController : Controller
{
    protected new void Awake()
    {
        base.Awake();
    }

    // Use this for initialization
    protected new void Start()
    {
        base.Start();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    void takeDamage(int amount = 1)
    {
        
    }

    protected void destroy()
    {
        // TODO: Play animation
        Destroy(this.gameObject);
    }
}
