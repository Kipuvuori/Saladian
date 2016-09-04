using UnityEngine;

public class ObjectController : Controller
{
    protected DataObject data { get; set; }
    // Use this for initialization
    protected new void Start()
    {
        base.Start();
        data = new DataObject();
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
