#ifndef RENDERING_3D_WORLD_RIGID_BODIES_SOLVERS_SOLVER_H
#define RENDERING_3D_WORLD_RIGID_BODIES_SOLVERS_SOLVER_H
#include <memory>
#include "../objects/RigidBody.h"
namespace r3d{
class Solver{
private:
  std::shared_ptr<RigidBody> m_rigid_body;
public:
  Solver(RigidBody* rigid_body);
};
}

#endif