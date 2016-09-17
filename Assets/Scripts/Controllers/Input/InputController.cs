using UnityEngine;

public class InputController : Controller
{
    private Camera MainCamera;
    private GameObject selected;

    public InputData data;
    protected new void Awake()
    {
        base.Awake();
        this.data = new InputData();
        this.name = InputData.name;
        this.MainCamera = GameController.Camera.GetComponent<Camera>();
        if (this.MainCamera == null) Debug.LogError("No MainCamera for the InputController!");
        this.selected = null;
    }

    // Use this for initialization
    protected new void Start()
    {
        base.Start();
    }

    // Update is called once per frame
    void Update()
    {

    }

    public GameObject overGameObject(Vector3 screen_point)
    {
        Vector2 position = this.MainCamera.ScreenToWorldPoint(screen_point);
        RaycastHit2D hitInfo = Physics2D.Raycast(position, Vector2.zero);
        if (hitInfo.collider != null)
        {
            this.selected = hitInfo.transform.gameObject;
            this.tellPosition(position);
            return this.selected;
        }
        else if (selected != null) this.tellPosition(position);
        return null;
    }

    public void releaseGameObject()
    {
        this.selected = null;
    }

    private void tellPosition(Vector2 position)
    {
        if (this.selected == null)
        {
            Debug.LogError("Trying to tell movement to null game object");
            return;
        }
        PlayerController player = this.selected.GetComponentInParent<PlayerController>();
        if (player != null) player.positionChanged(position);
    }
}
