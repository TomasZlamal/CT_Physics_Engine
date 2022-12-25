#include "GenericCube.h"
namespace r3d{
GenericCube::GenericCube(double mass, RigidBody* rigid_body, Solver* solver)
	: Object3D(mass, rigid_body, solver) {}
}