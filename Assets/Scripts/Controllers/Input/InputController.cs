using UnityEngine;
using UnityEngine.Events;

public class InputController : Controller
{
    private Camera MainCamera;
    protected GameObject selected;

    public InputData data;
    protected new void Awake()
    {
        base.Awake();
        this.data = new InputData();
        this.name = InputData.name;
        this.MainCamera = SceneController.Camera.GetComponent<Camera>();
        if (this.MainCamera == null) Debug.LogError("No MainCamera for the InputController!");
        this.selected = null;
    }

    // Use this for initialization
    protected new void Start()
    {
        base.Start();
    }

    // Update is called once per frame
    protected new void Update()
    {
        base.Update();

    }
    /*
    Not in use anymore
    public GameObject overGameObject(Vector3 screen_point, UnityAction<Vector2> action = null)
    {
        Vector2 position = this.MainCamera.ScreenToWorldPoint(screen_point);
        RaycastHit2D hitInfo = Physics2D.Raycast(position, Vector2.zero);
        if (hitInfo.collider != null) this.selected = hitInfo.transform.gameObject;
        else this.selected = null;
        if (selected != null)
        {
            if (action != null) action(position);
            return this.selected;
        }
        return null;
    }
    */

    public void releaseGameObject()
    {
        this.selected = null;
    }

    protected void tellPosition(Vector2 position)
    {
        PlayerController player = this.getPlayer();
        if (player != null) player.positionChanged(position);
    }

    protected void shoot()
    {
        PlayerController player = this.getPlayer();
        if (player != null) player.shoot();
    }

    protected bool movePlayer(Vector3 screen_point)
    {
        Vector2 position = this.MainCamera.ScreenToWorldPoint(screen_point);
        RaycastHit2D hitInfo = Physics2D.Raycast(position, Vector2.zero);
        PlayerController player = null;
        if (hitInfo.collider == null || hitInfo.transform.gameObject == null)
        {
            if (this.selected == null) return false;
            player = this.selected.GetComponentInParent<PlayerController>();
        }
        else
        {
            player = hitInfo.transform.gameObject.GetComponentInParent<PlayerController>();
            this.selected = hitInfo.transform.gameObject;
        }
        if (player == null || player.ship == null) return false;
        ShipController ship = player.ship;
        float distance = Mathf.Abs(Vector2.Distance(ship.transform.position, position));
        float radius = Mathf.Abs(ship.spriteRadius());
        if ((radius * 2.0f) < distance) return false;
        player.positionChanged(position);
        return true;
    }


    private PlayerController getPlayer()
    {
        if (this.selected == null)
        {
            Debug.LogError("Trying to get player from null selection");
            return null;
        }
        PlayerController player = this.selected.GetComponentInParent<PlayerController>();
        return player;
    }

    protected void quit()
    {
        SceneController.Quit();
    }

    private void restart()
    {
        SceneController.Restart();
    }
}
