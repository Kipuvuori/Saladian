using UnityEngine;
using UnityEngine.SceneManagement;

public class ShipController : MovementController
{
    public SpriteRenderer sprite_renderer;
    private GameObject parent;
    public ShipData data;

    protected new void Awake()
    {
        base.Awake();
        this.data = new ShipData();
        this.name = ShipData.name;
        //this.sprite_renderer.sprite = Resources.Load<Sprite>("Sprites/Ship");
    }

    // Use this for initialization
    public new void Start () {
        base.Start();
        parent = this.transform.parent.gameObject;
    }

    // Update is called once per frame
    void Update () {
        
    }

    void OnCollisionEnter2D(Collision2D col)
    {
        if (col.gameObject.name == ObstacleData.name)
        {
            this.takeDamage();
        }
    }

    void takeDamage(int amount = 1)
    {
        this.data.health -= amount;
        if(this.data.health <= 0)
        {
            this.destroy();
           
        }
    }

    void OnDestroy()
    {
        if (this.parent.name == PlayerData.name)
        {
            this.parent.GetComponent<PlayerController>().shipDestroyed();
        }
    }



}
