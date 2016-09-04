using UnityEngine;

public class InputController : Controller
{
    private Camera MainCamera;
    private GameObject selected;

    // Use this for initialization
    protected new void Start()
    {
        base.Start();
        this.MainCamera = CameraController.MainCamera;
        this.selected = null;
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
        if (this.selected != null) Debug.Log("Released mouse");
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
        else Debug.Log("Player was null");
    }
}
