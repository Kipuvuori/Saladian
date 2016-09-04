using UnityEngine;

public class CameraController : Controller
{

    private const string camera_name = "Main Camera";
    private Camera main_camera;
    public static Camera MainCamera
    {
        get
        {
            return GameObject.Find(camera_name).GetComponent<Camera>();
        }
    }
    // Use this for initialization
    protected new void Start() {
        base.Start();
        this.main_camera = MainCamera;
        this.init();
    }
	
	// Update is called once per frame
	void Update () {
	
	}

    private void init()
    {
        this.tag = "MainCamera";
        this.transform.position = new Vector3(0, 0, -10);
        this.main_camera.orthographic = true;
        this.main_camera.depth = -1;
        this.main_camera.orthographicSize = 5;
    }
}
