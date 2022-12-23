#ifndef RENDERING_3D_WORLD_WORLD_OBJECT
#define RENDERING_3D_WORLD_WORLD_OBJECT
#include <vector>
#include "objects_3d/Object3D.h"
#include "rigid_bodies/objects/Quad.h"
#include "rigid_bodies/solvers/Quad_solver.h"
#include "rigid_bodies/objects/Triangle.h"
#include "rigid_bodies/solvers/Triangle_solver.h"
#include "objects_3d/GenericCube.h"
namespace r3d {

class WorldObject
{
private:
	std::vector<std::shared_ptr<Object3D>> m_objects;
	uint64_t m_time_passed;
public:
	WorldObject();
	void addObject(Object3D* object);
	void passTime();
	Object3D* getVecObjectAt(int index);
};
}
#endif