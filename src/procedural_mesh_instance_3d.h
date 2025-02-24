#pragma once
#include <godot_cpp/classes/mesh_instance3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/core/memory.hpp>

using namespace godot;

class ProceduralMeshInstance3d : public MeshInstance3D {
  GDCLASS(ProceduralMeshInstance3d, MeshInstance3D)
  float x = 0.f;

protected:
  static void _bind_methods();
  void _notification(int p_what);

public:
  void _process();
  ProceduralMeshInstance3d();
  ~ProceduralMeshInstance3d();
};