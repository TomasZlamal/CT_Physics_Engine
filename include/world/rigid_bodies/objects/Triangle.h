#ifndef RENDERING_3D_WORLD_RIGID_BODIES_OBJECTS_TRIANGLE_H
#define RENDERING_3D_WORLD_RIGID_BODIES_OBJECTS_TRIANGLE_H
#include "Primitive.h"
#include "../../objects_3d/Object3D.h"
namespace r3d{
class Triangle : public Primitive{
private:
  r3d::point3d m_pointA;
  r3d::point3d m_pointB;
  r3d::point3d m_pointC;
  r3d::point3d m_pointD;
  r3d::point3d m_pointE;
public:
  Triangle();
  Triangle(r3d::point3d pointA, r3d::point3d pointB, r3d::point3d pointC);
  r3d::point3d getPointA();
  r3d::point3d getPointB();
  r3d::point3d getPointC();
  r3d::point3d getPointD();
  r3d::point3d getPointE();
  void setPointA(r3d::point3d pointA);
  void setPointB(r3d::point3d pointB);
  void setPointC(r3d::point3d pointC);
  void setPointD(r3d::point3d pointD);
  void setPointE(r3d::point3d pointE);
};
}
#endif