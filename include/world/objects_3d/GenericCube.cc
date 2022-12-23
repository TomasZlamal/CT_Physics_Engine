#include "GenericCube.h"
namespace r3d{
GenericCube::GenericCube(Quadrilateral* rigid_body, QuadrilateralSolver* solver)
	:	m_rigid_body(rigid_body), m_solver(solver){}
Solver* GenericCube::getSolver()
{
		return m_solver;
}
RigidBody* GenericCube::getRigidBody()
{
		return m_rigid_body;
}
}