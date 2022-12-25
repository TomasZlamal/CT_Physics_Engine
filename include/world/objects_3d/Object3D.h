#ifndef RENDERING_3D_WORLD_OBJECTS_3D_OBJECT_3D_H
#define RENDERING_3D_WORLD_OBJECTS_3D_OBJECT_3D_H
#include "../rigid_bodies/solvers/Solver.h"
#include "../rigid_bodies/objects/RigidBody.h"
#include "../../util/vec3.h"

enum class objectType {
	abstract,
	cube,
	pyramid,
};

namespace r3d{
class Object3D {
protected:
	double m_mass;
	// how much force is applied to the certain object, which is in turn converted to velocity
	vec3 m_force;
	vec3 m_velocity;
	std::shared_ptr<RigidBody> m_rigid_body;
	std::shared_ptr<Solver> m_solver;
	double m_rotation_radians;

	// Debugging variable
public:
	Object3D(double mass, std::shared_ptr<RigidBody> rigid_body, std::shared_ptr<Solver> solver);
	std::weak_ptr<Solver> getSolver();
	std::weak_ptr<RigidBody> getRigidBody();
	double getMass();
	void setMass(double mass);
	vec3 getForce();
	void setForce(vec3 force);
	void setVelocity(vec3 velocity);
	vec3 getVelocity();
	double getRotationRad();
	void setRotationRad(double radians);
};
}
#endif