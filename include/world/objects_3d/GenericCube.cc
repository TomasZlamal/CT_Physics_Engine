#include "GenericCube.h"
namespace r3d{
GenericCube::GenericCube(r3d::point3d pointA, r3d::point3d pointB){
  m_rigid_body = Quadrilateral{pointA, pointB};
  m_solver = QuadrilateralSolver{m_rigid_body};
}
Quadrilateral& GenericCube::getRigidBody(){
  return m_rigid_body;
}
QuadrilateralSolver& GenericCube::getSolver(){
  return m_solver;
}
}