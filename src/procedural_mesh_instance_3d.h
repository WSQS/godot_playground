#pragma once
#include "godot_cpp/classes/array_mesh.hpp"
#include <godot_cpp/classes/mesh_instance3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/core/memory.hpp>

using namespace godot;

class ProceduralMeshInstance3d : public MeshInstance3D {
  GDCLASS(ProceduralMeshInstance3d, MeshInstance3D)

protected:
  static void _bind_methods();

public:
  ProceduralMeshInstance3d();
  ~ProceduralMeshInstance3d();
};