#ifndef RENDERING_3D_WORLD_OBJECTS_3D_GENERIC_CUBE_H
#define RENDERING_3D_WORLD_OBJECTS_3D_GENERIC_CUBE_H
#include "Object3D.h"
#include "../rigid_bodies/objects/Quad.h"
#include "../rigid_bodies/solvers/Quad_solver.h"
namespace r3d{
class GenericCube : public Object3D<Quadrilateral, QuadrilateralSolver>{
public:
  GenericCube(r3d::point3d pointA, r3d::point3d pointB);
  Quadrilateral& getRigidBody();
  QuadrilateralSolver& getSolver();
};
}
#endif