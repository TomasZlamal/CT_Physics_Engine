#ifndef RENDERING_3D_WORLD_RIGID_BODIES_OBJECTS_QUAD_H
#define RENDERING_3D_WORLD_RIGID_BODIES_OBJECTS_QUAD_H
#include "Primitive.h"


#include "include/util/vec3.h"
#include "include/util/using_directives.h"

namespace r3d{
class Quadrilateral : public Primitive{
private:
  // pointA is the left-most, bottom-most point
  r3d::point3d m_pointA;
  // pointB is the right-most, top-most point
  r3d::point3d m_pointB;
public:
  Quadrilateral();
  Quadrilateral(r3d::point3d pointA, r3d::point3d pointB);
};
}
#endif