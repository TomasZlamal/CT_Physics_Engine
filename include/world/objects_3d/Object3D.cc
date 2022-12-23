#include "Object3D.h"
namespace r3d {

Object3D::Object3D(RigidBody* rigid_body, Solver* solver)
    : m_rigid_body(rigid_body), m_solver(solver){}

Object3D::~Object3D()
{
  delete m_rigid_body;
  delete m_solver;
}

Solver* Object3D::getSolver()
{
    return m_solver;
}
RigidBody* Object3D::getRigidBody()
{
    return m_rigid_body;
}

}