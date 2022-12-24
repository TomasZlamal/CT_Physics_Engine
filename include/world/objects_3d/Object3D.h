#ifndef RENDERING_3D_WORLD_OBJECTS_3D_OBJECT_3D_H
#define RENDERING_3D_WORLD_OBJECTS_3D_OBJECT_3D_H
#include "../rigid_bodies/solvers/Solver.h"
#include "../rigid_bodies/objects/RigidBody.h"

namespace r3d{
class Object3D {
public:
	Object3D() = default;
	virtual std::weak_ptr<Solver> getSolver() = 0;
	virtual std::weak_ptr<RigidBody> getRigidBody() = 0;
};
}
#endif