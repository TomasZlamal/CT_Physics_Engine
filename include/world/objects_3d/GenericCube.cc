#include "GenericCube.h"
namespace r3d{
GenericCube::GenericCube(double mass, std::shared_ptr<RigidBody> rigid_body, std::shared_ptr<Solver> solver)
	: Object3D(mass, rigid_body, solver) {}
}