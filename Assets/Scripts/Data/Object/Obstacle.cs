using System.Collections;
using UnityEngine;

public class Obstacle {
    public Vector2 start_position;
    public int direction;
    public float speed;
    public const float SPEED_MIN = 0.01f;
    public const float SPEED_MAX = 0.5f;
    public const float DISTANCE = 0.1f;
    public float last_move_time = 0;
    public const float OUTSIDE_BUFFER = 0.2f;
}
