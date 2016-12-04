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

    private static float desiredRatio = 0f;


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
        desiredRatio = this.native_resolution.x / this.native_resolution.y;
    }

	// Update is called once per frame
	protected new void Update()
	{
		base.Update();
		this.update_camera_size();
        if (!this.scale_set) {
            this.set_camera_scale ();
        }

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
            float currentRatio = (float)Screen.width / (float)Screen.height;

            if (currentRatio >= desiredRatio)
            {
                // Our resolution has plenty of width, so we just need to use the height to determine the camera size
                Camera.main.orthographicSize = native_resolution.y / 4;
            }
            else
            {
                // Our camera needs to zoom out further than just fitting in the height of the image.
                // Determine how much bigger it needs to be, then apply that to our original algorithm.
                float differenceInSize = desiredRatio / currentRatio;
                Camera.main.orthographicSize = native_resolution.y / 4 * differenceInSize;
            }

            scale = Screen.height / native_resolution.y;
            //pixels_to_units *= scale;
            //this.main_camera.orthographicSize = (Screen.height / 2.0f) / pixels_to_units;

            Debug.Log(Camera.main.orthographicSize);


            this.scale_set = true;
		}
	}

	public override void onResolutionChanged()
	{
		this.scale_set = false;
	}
}
