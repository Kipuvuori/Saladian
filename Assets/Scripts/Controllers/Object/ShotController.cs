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
