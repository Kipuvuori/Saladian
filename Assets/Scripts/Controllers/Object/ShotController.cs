using UnityEngine;
using System.Collections;

public class ShotController : ObjectController {

    public int speed = 10;
    private Rigidbody2D rigid_body;
    private SpriteRenderer sprite_renderer;
	public ShotData data;
    public AudioSource[] sounds;
    public AudioSource sound_laser;
    public AudioSource sound_hit;

    protected new void Awake()
    {
        base.Awake();
		this.data = new ShotData();
		this.name = ShotData.name;
        this.gameObject.SetActive(false);
    }

    // Use this for initialization
    protected new void Start () {
        base.Start();
		this.sprite_renderer = GetComponent<SpriteRenderer> ();

		var collider = GetComponent<BoxCollider2D> ();
		var size = this.sprite_renderer.bounds.size;

        this.sounds = GetComponents<AudioSource>();
        this.sound_laser = this.sounds[0];
        this.sound_hit = this.sounds[1];

        //sprite is 2px wide out of 32px and 8px tall out of 32px
        collider.size = new Vector2 (size.x/16,size.y/4f);

    }

    // Update is called once per frame
    protected new void Update () {
        base.Update();
    }

    public void shoot(Vector2 position, Quaternion rotation)
    {
        this.gameObject.SetActive(true);
        this.transform.position = position;
        this.rigid_body = this.GetComponent<Rigidbody2D>();
        transform.rotation = rotation;
        Vector2 force = this.transform.up * this.speed;
        this.rigid_body.AddForce(force);
    }

    void OnCollisionEnter2D(Collision2D col)
    {
        if (col.gameObject.name != this.gameObject.name) {
            if (this.sound_hit != null) this.sound_hit.Play();
            this.takeDamage ();
		} else {
			Physics2D.IgnoreCollision (col.collider, this.GetComponent<Collider2D> ());
		}
    }

    void takeDamage(int amount = 1)
    {
		this.data.health -= amount;
		if (this.data.health <= 0)
		{
            //hide the shot. OnBecameInvisible will destroy it
            this.sprite_renderer.enabled = false;
		}
    }

    public void OnBecameInvisible()
    {
        Destroy(gameObject, this.sound_hit.clip.length); //waits till audio is finished playing before destroying.
    }

}
