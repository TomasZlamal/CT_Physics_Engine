#include "GenericCube.h"
namespace r3d{
GenericCube::GenericCube(Cube* rigid_body, CubeSolver* solver)
	:	m_rigid_body(rigid_body), m_solver(solver){}
std::weak_ptr<Solver> GenericCube::getSolver()
{
		return m_solver;
}
std::weak_ptr<RigidBody> GenericCube::getRigidBody()
{
		return m_rigid_body;
}
}