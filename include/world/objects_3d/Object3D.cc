#include "Object3D.h"
namespace r3d {

template<typename RigidBody, typename Solver>
Object3D<RigidBody, Solver>::Object3D(RigidBody rigid_body, Solver solver)
    : m_rigid_body(rigid_body), m_solver(solver){}

template<typename RigidBody, typename Solver>
Solver& Object3D<RigidBody, Solver>::getSolver()
{
    return m_solver;
}

template<typename RigidBody, typename Solver>
RigidBody& Object3D<RigidBody, Solver>::getRigidBody()
{
    return m_rigid_body;
}

}