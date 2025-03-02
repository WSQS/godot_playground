extends CharacterBody2D

const SPEED = 500.0
const JUMP_VELOCITY = -300.0
const size = 100
@onready var animated_sprite_2d: AnimatedSprite2D = $AnimatedSprite2D


func _physics_process(delta: float) -> void:
	var dispaly_server := Engine.get_singleton("DisplayServer")
	var window_size = dispaly_server.window_get_size()
	# Get the input direction and handle the movement/deceleration.
	# As good practice, you should replace UI actions with custom gameplay actions.
	var y_direction := Input.get_axis("move_up", "move_down")
	if y_direction:
		velocity.y = y_direction * SPEED
	else:
		velocity.y = move_toward(velocity.y, 0, SPEED)

	move_and_slide()
	position.y = clamp(position.y,0,window_size.y - 100)
	print(position.y)
