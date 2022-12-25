#ifndef RENDERING_3D_WORLD_RIGID_BODIES_SOLVERS_SOLVER_H
#define RENDERING_3D_WORLD_RIGID_BODIES_SOLVERS_SOLVER_H
#include <memory>
#include "../objects/RigidBody.h"
#include "../../../util/vec3.h"
namespace r3d{
class Solver{
private:
  std::shared_ptr<RigidBody> m_rigid_body;
public:
  Solver(std::shared_ptr<RigidBody> rigid_body);
  virtual vec3 solve(std::shared_ptr<RigidBody> other) = 0;
  // returns in what direction the object should move to
};
}

#endif