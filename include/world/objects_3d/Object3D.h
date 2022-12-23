#ifndef RENDERING_3D_WORLD_OBJECTS_3D_OBJECT_3D_H
#define RENDERING_3D_WORLD_OBJECTS_3D_OBJECT_3D_H
#include "../rigid_bodies/solvers/Solver.h"
#include "../rigid_bodies/objects/RigidBody.h"

namespace r3d{
class Object3D {
private:
	RigidBody* m_rigid_body;
	Solver* m_solver;
public:
	Object3D(RigidBody* rigid_body, Solver* solver);
	~Object3D();
	Solver* getSolver();
	RigidBody* getRigidBody();
};
}
#endif