using UnityEngine;

public class CameraController : Controller
{
	public static float pixels_to_units = 1f;
	public static float scale = 1;

	public Vector2 native_resolution = new Vector2(240,160);
	public Camera main_camera;
	public CameraData data;

	public CameraResolution resolution;

	private bool scale_set = false;

	protected new void Awake()
	{
		base.Awake();
		this.data = new CameraData();
		this.name = CameraData.name;
		this.main_camera = this.GetComponent<Camera>();
		this.init();
		this.set_camera_scale ();
    }

	// Use this for initialization
	protected new void Start() {
		base.Start();
	}

	// Update is called once per frame
	protected new void Update()
	{
		base.Update();
		this.update_camera_size();
		if (!this.scale_set)
			this.set_camera_scale ();

	}

	private void init()
	{
		this.tag = "MainCamera";
		this.transform.position = new Vector3(0, 0, -10);
		this.main_camera.orthographic = true;
		this.main_camera.depth = -1;
		this.main_camera.orthographicSize = 80;
		this.update_camera_size();
	}

	public void update_camera_size()
	{
        this.resolution = new CameraResolution(this.main_camera);
	}

	protected void set_camera_scale(){
		if (this.main_camera.orthographic)
		{	
			scale = Screen.height / native_resolution.y;
			pixels_to_units *= scale;
			this.main_camera.orthographicSize = (Screen.height / 2.0f) / pixels_to_units;
			this.scale_set = true;
		}
	}

	public override void onResolutionChanged()
	{
		this.scale_set = false;
	}
}
