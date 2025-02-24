#include "procedural_mesh_instance_3d.h"
#include "godot_cpp/classes/immediate_mesh.hpp"
#include "godot_cpp/classes/rendering_server.hpp"
#include "godot_cpp/variant/color.hpp"
#include "godot_cpp/variant/utility_functions.hpp"

void ProceduralMeshInstance3d::_bind_methods() {}

void ProceduralMeshInstance3d::_process() {
  return;
  auto mesh = static_cast<Ref<ImmediateMesh>>(get_mesh());
  if (mesh.is_null())
    return;
  mesh->surface_begin(Mesh::PRIMITIVE_TRIANGLES);
  mesh->surface_set_color({0, 0, 0});
  mesh->surface_add_vertex({x + 0, 0, -1});
  mesh->surface_add_vertex({x + 0, -1, 0});
  mesh->surface_add_vertex({x - 1, 0, 0});
  x += 0.1;
  mesh->surface_end();
  UtilityFunctions::print(123);
}

void ProceduralMeshInstance3d::_notification(int p_what) {
  if (p_what == NOTIFICATION_READY) {
    auto mesh = static_cast<Ref<ImmediateMesh>>(get_mesh());
    if (mesh.is_null())
      return;
    mesh->surface_begin(Mesh::PRIMITIVE_TRIANGLES);
    mesh->surface_set_color(Color(1, 0.388235, 0.278431, 1));
    mesh->surface_add_vertex({x + 0, 0, -1});
    mesh->surface_set_color(Color(1, 0.388235, 0.278431, 1));
    mesh->surface_add_vertex({x + 0, -1, 0});
    mesh->surface_set_color(Color(1, 0.388235, 0.278431, 1));
    mesh->surface_add_vertex({x - 1, 0, 0});
    mesh->surface_end();
    
  }
}

ProceduralMeshInstance3d::ProceduralMeshInstance3d() {}

ProceduralMeshInstance3d::~ProceduralMeshInstance3d() {}
