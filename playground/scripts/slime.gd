extends Node2D

var speed = 60
@onready var ray_cast_left: RayCast2D = $RayCastLeft
@onready var ray_cast_right: RayCast2D = $RayCastRight
@onready var animated_sprite_2d: AnimatedSprite2D = $AnimatedSprite2D

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	pass # Replace with function body.


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	if ray_cast_left.is_colliding(): 
		speed = - abs(speed)
		animated_sprite_2d.flip_h = true
	if ray_cast_right.is_colliding():
		speed = abs(speed)
		animated_sprite_2d.flip_h = false
	position.x += speed * delta
