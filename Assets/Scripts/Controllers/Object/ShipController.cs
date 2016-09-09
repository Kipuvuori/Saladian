using UnityEngine;
using UnityEngine.SceneManagement;

public class ShipController : MovementController
{
    public SpriteRenderer sprite_renderer;
    private Ship data;
    private GameObject parent;

    // Use this for initialization
    protected new void Start () {
        base.Start();
        this.data = new Ship();
        //this.sprite_renderer.sprite = Resources.Load<Sprite>("Sprites/Ship");
        parent = this.transform.parent.gameObject;
    }

    // Update is called once per frame
    void Update () {
        
    }

    void OnCollisionEnter2D(Collision2D col)
    {
        Debug.Log(col.gameObject.name);
        if (col.gameObject.name == "Obstacle")
        {
            Destroy(col.gameObject);
            Destroy(this.gameObject);
            if(this.parent.name == "Player")
            {
                Scene loadedLevel = SceneManager.GetActiveScene();
                SceneManager.LoadScene(loadedLevel.buildIndex);
            }
            
        }
    }



}
