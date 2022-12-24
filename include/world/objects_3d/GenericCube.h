#ifndef RENDERING_3D_WORLD_OBJECTS_3D_GENERIC_CUBE_H
#define RENDERING_3D_WORLD_OBJECTS_3D_GENERIC_CUBE_H
#include "../rigid_bodies/objects/Cube.h"
#include "../rigid_bodies/solvers/Cube_solver.h"
#include "Object3D.h"
#include <memory>

namespace r3d{
class GenericCube : public Object3D{
private:
  std::shared_ptr<Cube> m_rigid_body;
  std::shared_ptr<CubeSolver> m_solver;
public:
  GenericCube(Cube* rigid_body, CubeSolver* solver);
  std::weak_ptr<Solver> getSolver();
  std::weak_ptr<RigidBody> getRigidBody();
};
}
#endif