using UnityEngine;

public class ShipController : MovementController
{
    private SpriteRenderer sprite_renderer;
    private Ship data;

    // Use this for initialization
    protected new void Start () {
        base.Start();
        this.data = new Ship();
        this.sprite_renderer = GetComponent<SpriteRenderer>();
        this.sprite_renderer.sprite = Resources.Load<Sprite>("Sprites/Ship");
    }

    // Update is called once per frame
    void Update () {
        
    }

}
