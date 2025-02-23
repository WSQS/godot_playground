#pragma once
#include "godot_cpp/classes/array_mesh.hpp"
#include <godot_cpp/core/memory.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/mesh_instance3d.hpp>

using namespace godot;

class ProceduralMeshInstance3d : public MeshInstance3D {
  GDCLASS(ProceduralMeshInstance3d, MeshInstance3D)
  Ref<ArrayMesh> array_mesh = memnew(ArrayMesh);

protected:
  static void _bind_methods();

public:
  ProceduralMeshInstance3d();
  ~ProceduralMeshInstance3d();
  void set_array_mesh(Ref<ArrayMesh> p_array_mesh){
    array_mesh = p_array_mesh;
  };
  Ref<ArrayMesh> get_array_mesh(){
    return array_mesh;
  };
};