#ifndef RENDERING_3D_WORLD_RIGID_BODIES_SOLVERS_SOLVER_H
#define RENDERING_3D_WORLD_RIGID_BODIES_SOLVERS_SOLVER_H
namespace r3d{
template <typename RigidBody>
class Solver{
  virtual void solve(RigidBody object1, RigidBody object2) = 0;
};
}

#endif