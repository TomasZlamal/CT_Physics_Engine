#ifndef RENDERING_3D_WORLD_RIGID_BODIES_OBJECTS_QUAD_H
#define RENDERING_3D_WORLD_RIGID_BODIES_OBJECTS_QUAD_H
#include "RigidBody.h"


#include "../../../util/vec3.h"
#include "../../../util/using_directives.h"

namespace r3d{
class Cube : public RigidBody{
private:
  r3d::point3d m_half_width;
  r3d::point3d m_half_height;
public:
  Cube();
  Cube(r3d::point3d half_height, r3d::point3d half_width);
  r3d::point3d getHalfHeight();
  r3d::point3d getHalfWidth();
  void setHalfHeight(r3d::point3d half_height);
  void setHalfWidth(r3d::point3d pointB);
  void setPosition(vec3 dir);
  vec3 getPosition();
};
}
#endif