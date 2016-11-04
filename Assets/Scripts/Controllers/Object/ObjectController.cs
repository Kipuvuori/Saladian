using UnityEngine;

public class ObjectController : Controller
{
    protected Animator animator = null;
    protected new void Awake()
    {
        base.Awake();
        this.animator = GetComponent<Animator>();
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
            this.animator.Play("Explosion");
            Destroy(gameObject, this.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).length);
        }
        else Destroy(this.gameObject);
    }
}
