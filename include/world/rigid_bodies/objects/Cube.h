#ifndef RENDERING_3D_WORLD_RIGID_BODIES_OBJECTS_QUAD_H
#define RENDERING_3D_WORLD_RIGID_BODIES_OBJECTS_QUAD_H
#include "Primitive.h"


#include "../../../util/vec3.h"
#include "../../../util/using_directives.h"

namespace r3d{
class Cube : public Primitive{
private:
  r3d::point3d m_pointA;
  r3d::point3d m_pointB;
public:
  Cube();
  Cube(r3d::point3d pointA, r3d::point3d pointB);
  r3d::point3d getPointA();
  r3d::point3d getPointB();
  void setPointA(r3d::point3d pointA);
  void setPointB(r3d::point3d pointB);
  void moveObject(vec3 dir);
};
}
#endif