#ifndef RENDERING_3D_WORLD_RIGID_BODIES_OBJECTS_RIGID_BODY_H
#define RENDERING_3D_WORLD_RIGID_BODIES_OBJECTS_RIGID_BODY_H
#include "../../../util/vec3.h"
namespace r3d{
class RigidBody{
public:
  virtual void moveObject(vec3 dir) = 0;
};
}
#endif