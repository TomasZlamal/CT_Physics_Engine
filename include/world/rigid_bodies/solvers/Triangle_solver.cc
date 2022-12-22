#include "Triangle_solver.h"
namespace r3d{
void TriangleSolver::TriangleSolver(Triangle triangle)
  : m_rigid_body(triangle){}

void TriangleSolver::solve(Triangle& other){

}
void TriangleSolver::solve(Quadrilateral& other){
  
}
void TriangleSolver::solve(None& other){
  
}
}