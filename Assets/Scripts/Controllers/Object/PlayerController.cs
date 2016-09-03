using UnityEngine;

public class PlayerController : ObjectController {

    private ShipController ship;
    // Use this for initialization
    protected new void Start () {
        base.Start();
        data = new Player();
        this.ship = (ShipController) GetComponent(typeof(ShipController));
        if (this.ship == null) Debug.LogError("No ShipController for the PlayerController. Check the GameObject for missing Script!");
        this.ship.toMiddleOfScreen();
    }
	
	// Update is called once per frame
	void Update () {
        test_movement();
    }

    void test_movement()
    {
        int direction = Random.Range(0, 360);
        this.ship.move(direction, 0.1f);
    }
}
