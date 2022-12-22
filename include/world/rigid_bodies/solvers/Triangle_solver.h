#ifndef RENDERING_3D_WORLD_RIGID_BODIES_SOLVERS_TRIANGLE_SOLVER_H
#define RENDERING_3D_WORLD_RIGID_BODIES_SOLVERS_TRIANGLE_SOLVER_H
#include "Solver.h"
#include "../objects/Quad.h" 
#include "../objects/None.h"
#include "../objects/Triangle.h"
namespace r3d{
class TriangleSolver : public Solver<Triangle>{
public:
  TriangleSolver();
  TriangleSolver(Triangle triangle);
  void solve(Triangle& other);
  void solve(Quadrilateral& other);
  void solve(None& other);
};
}
#endif