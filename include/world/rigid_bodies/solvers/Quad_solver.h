#ifndef RENDERING_3D_WORLD_RIGID_BODIES_SOLVERS_QUAD_SOLVER_H
#define RENDERING_3D_WORLD_RIGID_BODIES_SOLVERS_QUAD_SOLVER_H
#include "Solver.h"
#include "../objects/Quad.h"
#include "../objects/None.h"

namespace r3d{
class QuadrilateralSolver : public Solver<Quadrilateral>{
public:
  void solve(Quadrilateral& quad1, Quadrilateral& quad2);
  void solve(Quadrilateral& quad1, None& none);
  void solve(None& none, Quadrilateral& quad1);
};
}
#endif