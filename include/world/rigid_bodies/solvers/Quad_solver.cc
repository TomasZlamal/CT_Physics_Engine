#include "Quad_solver.h"
namespace r3d{
QuadrilateralSolver::QuadrilateralSolver(Quadrilateral& quad)
: m_quad(quad){}
void QuadrilateralSolver::solve(Quadrilateral& other){
  // TODO Implement solving mechanics for Quadrilaterals
}
// Solver for objects without collisions
void QuadrilateralSolver::solve(None& other){
  // Do nothing, since there is no collision with a None type Rigid body
}
void QuadrilateralSolver::solve(Triangle& other){

}
r3d::QuadrilateralSolver& r3d::QuadrilateralSolver::operator=(const r3d::QuadrilateralSolver& other) {

	memcpy(this, &other, sizeof(&other));
	return *this;	
}
}