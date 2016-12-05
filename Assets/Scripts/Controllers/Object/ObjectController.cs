using UnityEngine;

public class ObjectController : Controller
{
  
    protected Animator animator = null;

    private SpriteRenderer sprite_renderer;

    protected new void Awake()
    {
        base.Awake();
        this.animator = GetComponent<Animator>();
        this.sprite_renderer = GetComponent<SpriteRenderer>();
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

    void takeDamage(int amount = 1)
    {
        
    }

    protected void destroy()
    {
        if (this.animator != null && this.animator.HasState(0, Animator.StringToHash("Explosion")))
        {
            SpriteRenderer sprite_renderer = this.GetComponent<SpriteRenderer>();
            if (sprite_renderer != null) sprite_renderer.color = Color.white;
            this.animator.Play("Explosion");
            Destroy(gameObject, this.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).length);
        }
        else Destroy(this.gameObject);
    }

    public Vector2 frontOfSprite()
    {
        if(this.sprite_renderer == null || this.sprite_renderer.sprite == null)
        {
            Debug.LogError("ERROR: ObjectController: frontOfSprit: No sprite rendere or spire!");
            return Vector2.zero;
        }
        return Tools.FrontOfSprite(this.sprite_renderer.sprite, this.transform.position, this.transform.rotation);
    }

}
