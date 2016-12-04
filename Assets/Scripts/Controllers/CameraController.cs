using UnityEngine;

public class CameraController : Controller
{
	public static float pixels_to_units = 1f;
	public static float scale = 1;

	public Vector2 native_resolution = new Vector2(432,768);
	public Camera main_camera;
	public CameraData data;
	public CameraResolution resolution;
    public bool preserver_aspectratio = true;

	private bool scale_set = false;

    private static float desiredRatio = 0f;
    private static Color bg_color = new Color(0.3f, 0, 1, 0.4f);

    static Camera backgroundCam;

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
        this.main_camera.backgroundColor = bg_color;
        this.update_camera_size();
	}

	public void update_camera_size()
	{
        this.resolution = new CameraResolution(this.main_camera);
        this.main_camera.backgroundColor = bg_color;
    }

    protected void set_camera_scale(){
        if (this.main_camera.orthographic)
		{
            float currentRatio = (float)Screen.width / (float)Screen.height;

            if (currentRatio >= desiredRatio)
            {
                // Our resolution has plenty of width, so we just need to use the height to determine the camera size
                Camera.main.orthographicSize = native_resolution.y / 4;

                if (this.preserver_aspectratio) {
                    // Pillarbox
                    float inset = 1.0f - desiredRatio / currentRatio;
                    main_camera.rect = new Rect(inset / 2, 0.0f, 1.0f - inset, 1.0f);
                }
                
            }
            else
            {
                // Our camera needs to zoom out further than just fitting in the height of the image.
                // Determine how much bigger it needs to be, then apply that to our original algorithm.
                float differenceInSize = desiredRatio / currentRatio;
                Camera.main.orthographicSize = native_resolution.y / 4 * differenceInSize;

                if (this.preserver_aspectratio)
                {
                    // Letterbox
                    float inset = 1.0f - desiredRatio / currentRatio;
                    main_camera.rect = new Rect(0.0f, inset / 2, 1.0f, 1.0f - inset);
                }
            }

            if (this.preserver_aspectratio) {
                if (backgroundCam)
                {
                    Destroy(backgroundCam.gameObject);
                }
                if (!backgroundCam)
                {
                    // Make a new camera behind the normal camera which displays black; otherwise the unused space is undefined
                    backgroundCam = new GameObject("BackgroundCam", typeof(Camera)).GetComponent<Camera>();
                    backgroundCam.depth = int.MinValue;
                    backgroundCam.clearFlags = CameraClearFlags.SolidColor;
                    backgroundCam.backgroundColor = Color.black;
                    backgroundCam.cullingMask = 0;
                }
            }
            
            scale = Screen.height / native_resolution.y;
           
            this.scale_set = true;
		}
	}

	public override void onResolutionChanged()
	{
		this.scale_set = false;
	}
}
