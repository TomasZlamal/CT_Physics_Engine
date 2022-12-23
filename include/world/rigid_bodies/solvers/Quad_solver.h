#ifndef RENDERING_3D_WORLD_RIGID_BODIES_SOLVERS_QUAD_SOLVER_H
#define RENDERING_3D_WORLD_RIGID_BODIES_SOLVERS_QUAD_SOLVER_H
#include "Solver.h"
#include "../objects/Quad.h"
#include "../objects/None.h"
#include "../objects/Triangle.h"
namespace r3d{
class QuadrilateralSolver : public Solver{
public:
  QuadrilateralSolver() = default;
  using Solver::Solver;
  void solve(RigidBody* other);
};
}
#endif