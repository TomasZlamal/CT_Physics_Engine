#include "Object3D.h"

namespace r3d {
Object3D::Object3D(double mass, std::shared_ptr<RigidBody> rigid_body, std::shared_ptr<Solver> solver)
	: m_mass(mass), m_force(), m_velocity(), m_rigid_body(rigid_body), m_solver(solver){
}
double Object3D::getMass()
{
	return m_mass;
}
void Object3D::setMass(double mass)
{
	m_mass = mass;
}
vec3 Object3D::getForce()
{
	return m_force;
}
void Object3D::setForce(vec3 force)
{
	m_force = force;
}
void Object3D::setVelocity(vec3 velocity)
{
	m_velocity = velocity;
}
vec3 Object3D::getVelocity()
{
	return m_velocity;
}
objectType Object3D::getObjectType()
{
	return m_objectType;
}
std::weak_ptr<Solver> Object3D::getSolver()
{
	return m_solver;
}
std::weak_ptr<RigidBody> Object3D::getRigidBody()
{
	return m_rigid_body;
}
}