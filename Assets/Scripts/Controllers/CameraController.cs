using UnityEngine;

public class CameraController : Controller
{
    public Camera main_camera;
    public CameraData data;

    public CameraResolution resolution;

    protected new void Awake()
    {
        base.Awake();
        this.data = new CameraData();
        this.name = CameraData.name;
        this.main_camera = this.GetComponent<Camera>();
        this.init();
    }

    // Use this for initialization
    protected new void Start() {
        base.Start();
    }
	
	// Update is called once per frame
	void Update () {
        this.update_camera_size();
    }

    private void init()
    {
        this.tag = "MainCamera";
        this.transform.position = new Vector3(0, 0, -10);
        this.main_camera.orthographic = true;
        this.main_camera.depth = -1;
        this.main_camera.orthographicSize = 5;
        this.update_camera_size();
    }

    public void update_camera_size()
    {
        this.resolution = new CameraResolution(this.main_camera);
    }
}
