#ifndef RENDERING_3D_WORLD_OBJECTS_3D_OBJECT_3D_H
#define RENDERING_3D_WORLD_OBJECTS_3D_OBJECT_3D_H
#include "../rigid_bodies/objects/RigidBody.h"



#include "../../util/vec3.h"
#include "../../util/using_directives.h"

namespace r3d{
template <typename RigidBody>
class Object3D{
private:
  RigidBody m_rigid_body;
public:
  Object3D() = default;

};
}
#endif