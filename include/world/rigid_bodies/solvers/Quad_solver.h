#ifndef RENDERING_3D_WORLD_RIGID_BODIES_SOLVERS_QUAD_SOLVER_H
#define RENDERING_3D_WORLD_RIGID_BODIES_SOLVERS_QUAD_SOLVER_H
#include "Solver.h"
#include "../objects/Quad.h"
#include "../objects/None.h"
#include "../objects/Triangle.h"

namespace r3d{
class QuadrilateralSolver : public Solver<Quadrilateral>{
private:
  Quadrilateral m_quad;
public:
  QuadrilateralSolver(Quadrilateral quad);
  void solve(Quadrilateral& other);
  void solve(None& other);
  void solve(Triangle& other);
};
}
#endif