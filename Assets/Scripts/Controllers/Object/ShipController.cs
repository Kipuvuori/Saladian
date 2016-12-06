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
    }

    // Use this for initialization
    public new void Start () {
        base.Start();
        parent = this.transform.parent.gameObject;

		var renderer = GetComponent<SpriteRenderer> ();

		var collider = GetComponent<BoxCollider2D> ();
        //make collider bit smaller than sprite
		var size = renderer.bounds.size*0.85f;

		collider.size = size;
    }

    // Update is called once per frame
    protected new void Update()
    {
        base.Update();
    }

    void OnCollisionEnter2D(Collision2D col)
    {
		if (col.gameObject.name == ObstacleData.name || col.gameObject.name == ShotData.name || col.gameObject.name == ShipData.name)
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
        else if (this.parent.name == EnemyData.name)
        {
            this.parent.GetComponent<EnemyController>().shipTookDamage(amount);
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
        else if (this.parent.name == EnemyData.name)
        {
            this.parent.GetComponent<EnemyController>().shipDestroyed();
        }
    }

    public void shoot()
    {
        GameObject prefab = (GameObject)Resources.Load("Prefabs/Shot", typeof(GameObject));
        GameObject shot = Instantiate(prefab);
        //shot.transform.parent = this.gameObject.transform;
        ShotController controller = shot.GetComponent<ShotController>();
        Quaternion rotation = this.transform.rotation;
        Vector2 location = this.frontOfSprite();
        controller.shoot(location, rotation);
        if (this.animator != null && this.animator.HasState(0, Animator.StringToHash("shot_fx")))
            this.animator.Play("shot_fx");
    }

}
