#ifndef RENDERING_3D_WORLD_RIGID_BODIES_SOLVERS_TRIANGLE_SOLVER_H
#define RENDERING_3D_WORLD_RIGID_BODIES_SOLVERS_TRIANGLE_SOLVER_H
#include "Solver.h"
#include "../objects/Cube.h" 
#include "../objects/None.h"
#include "../objects/Pyramid.h"
namespace r3d{
class PyramidSolver : public Solver{
public:
  PyramidSolver() = default;
  void solve(RigidBody* other);
};
}
#endif