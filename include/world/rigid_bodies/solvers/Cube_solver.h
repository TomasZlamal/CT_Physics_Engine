#ifndef RENDERING_3D_WORLD_RIGID_BODIES_SOLVERS_QUAD_SOLVER_H
#define RENDERING_3D_WORLD_RIGID_BODIES_SOLVERS_QUAD_SOLVER_H
#include "Solver.h"
#include "../objects/Cube.h"
#include "../objects/None.h"
#include "../objects/Pyramid.h"
namespace r3d{
class CubeSolver : public Solver{
public:
  CubeSolver() = default;
  using Solver::Solver;
  void solve(std::shared_ptr<RigidBody> other);
};
}
#endif