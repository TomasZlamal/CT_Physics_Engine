#ifndef RENDERING_3D_WORLD_RIGID_BODIES_SOLVERS_SOLVER_H
#define RENDERING_3D_WORLD_RIGID_BODIES_SOLVERS_SOLVER_H
#include <memory>
namespace r3d{
template <typename RigidBody>
class Solver{
private:
  std::weak_ptr<RigidBody> m_rigid_body;
public:
  //virtual void solve(RigidBody& other) = 0;
};
}

#endif