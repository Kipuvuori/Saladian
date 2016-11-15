using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ShipController : MovementController
{
    public SpriteRenderer sprite_renderer;
    private GameObject parent;
    public ShipData data;
    public AudioSource die_sound;

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
    protected new void Update()
    {
        base.Update();
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
        if (this.parent.name == PlayerData.name)
        {
            this.parent.GetComponent<PlayerController>().shipTookDamage(amount);
        }

        if (this.data.health <= 0)
        {
            if (this.die_sound != null) this.die_sound.Play();
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

    public void shoot()
    {
        GameObject prefab = (GameObject)Resources.Load("Prefabs/Shot", typeof(GameObject));
        GameObject shot = Instantiate(prefab);
        shot.transform.parent = this.gameObject.transform;
        ShotController controller = shot.GetComponent<ShotController>();
        Vector2 location = new Vector2(this.transform.position.x, this.transform.position.y + 1*CameraController.scale);
		Debug.Log (1 * CameraController.scale);
        controller.shoot(location);
        if (this.animator != null && this.animator.HasState(0, Animator.StringToHash("shot_fx")))
            this.animator.Play("shot_fx");
    }

}
