#ifndef RENDERING_3D_WORLD_RIGID_BODIES_OBJECTS_RIGID_BODY_H
#define RENDERING_3D_WORLD_RIGID_BODIES_OBJECTS_RIGID_BODY_H
#include "../../../util/vec3.h"
namespace r3d{
class RigidBody{
protected:
  vec3 center;
public:
  virtual void setPosition(vec3 dir) = 0;
  virtual vec3 getPosition() = 0;
  // Maybe return a std::vector of various coordinates? or return the center? idk
  // perhaps add an inherited variable "vec3 center" for all derived classes
  // and calculate movements that way
};
}
#endif