using UnityEngine;

public class CameraController : Controller
{
    private const string camera_name = "Main Camera";
    public static Camera MainCamera
    {
        get
        {
            return GameObject.Find(camera_name).GetComponent<Camera>();
        }
    }
    // Use this for initialization
    protected new void Start () {
        base.Start();
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
