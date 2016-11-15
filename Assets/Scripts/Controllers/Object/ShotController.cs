using UnityEngine;
using System.Collections;

public class ShotController : ObjectController {

    public float speed = 200f;
    private Rigidbody2D rigid_body;

    protected new void Awake()
    {
        base.Awake();
        this.gameObject.SetActive(false);
    }

    // Use this for initialization
    protected new void Start () {
        base.Start();
		var renderer = GetComponent<SpriteRenderer> ();

		var collider = GetComponent<BoxCollider2D> ();
		var size = renderer.bounds.size;

		collider.size = size;
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
        if (col.gameObject.name != this.gameObject.name)
        {
            this.takeDamage();
        }
    }

    void takeDamage(int amount = 1)
    {
        this.destroy();
    }

    public void OnBecameInvisible()
    {
        Destroy(gameObject);
    }

}
