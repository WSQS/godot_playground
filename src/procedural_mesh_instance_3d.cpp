#include "procdural_mesh_instance_3d.h"
#include "godot_cpp/core/class_db.hpp"
#include "godot_cpp/core/object.hpp"

void ProceduralMeshInstance3d::_bind_methods(){
    ClassDB::bind_method(D_METHOD("set_array_mesh","array_mesh"), &ProceduralMeshInstance3d::set_array_mesh);
    ClassDB::bind_method(D_METHOD("get_array_mesh"), &ProceduralMeshInstance3d::get_array_mesh);
    ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "array_mesh", PROPERTY_HINT_RESOURCE_TYPE, "Mesh"),"set_array_mesh","get_array_mesh");
}

ProceduralMeshInstance3d::ProceduralMeshInstance3d(){

}

ProceduralMeshInstance3d::~ProceduralMeshInstance3d(){
    
}


