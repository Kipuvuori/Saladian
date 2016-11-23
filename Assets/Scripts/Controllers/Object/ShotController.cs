using UnityEngine;
using System.Collections;

public class ShotController : ObjectController {

    public float speed = 200f;
    private Rigidbody2D rigid_body;
	public ShotData data;


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
		var renderer = GetComponent<SpriteRenderer> ();

		var collider = GetComponent<BoxCollider2D> ();
		var size = renderer.bounds.size;

		//sprite is 2px wide out of 32px and 8px tall out of 32px
 		collider.size = new Vector2 (size.x/16,size.y/4f);

    }

    // Update is called once per frame
    protected new void Update () {
        base.Update();
	}


    public void shoot(Vector2 position)
    {
        this.gameObject.SetActive(true);
        this.transform.position = position;
        this.rigid_body = this.GetComponent<Rigidbody2D>();
        this.rigid_body.AddForce(this.transform.up * speed);
    }

    void OnCollisionEnter2D(Collision2D col)
    {
		if (col.gameObject.name != this.gameObject.name) {
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
			this.destroy();
		}
    }

    public void OnBecameInvisible()
    {
        Destroy(gameObject);
    }

}
