#include "Quad_solver.h"
namespace r3d{
void QuadrilateralSolver::solve(Quadrilateral& quad1, Quadrilateral& quad2){
  // TODO(Before 1.2.2023) Implement solving mechanics for Quadrilaterals
}
// Solver for objects without collisions
void QuadrilateralSolver::solve(Quadrilateral& quad1, None& none){
  // Do nothing, since there is no collision with a None type Rigid body
}
void QuadrilateralSolver::solve(None& none, Quadrilateral& quad1){
  // Do nothing, since there is no collision with a None type Rigid body
}
}