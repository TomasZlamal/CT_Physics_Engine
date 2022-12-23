#ifndef RENDERING_3D_WORLD_RIGID_BODIES_SOLVERS_QUAD_SOLVER_H
#define RENDERING_3D_WORLD_RIGID_BODIES_SOLVERS_QUAD_SOLVER_H
#include "Solver.h"
#include "../objects/Quad.h"
#include "../objects/None.h"
#include "../objects/Triangle.h"
class Triangle;
namespace r3d{
class QuadrilateralSolver : public Solver<Quadrilateral>{
private:
  Quadrilateral& m_quad;
public:
  QuadrilateralSolver() = default;
  QuadrilateralSolver(Quadrilateral& quad);
  void solve(Quadrilateral& other);
  void solve(Triangle& other);
  void solve(None& other);
  r3d::QuadrilateralSolver& r3d::QuadrilateralSolver::operator=(const r3d::QuadrilateralSolver& other);
};
}
#endif