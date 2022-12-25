#ifndef RENDERING_3D_WORLD_WORLD_OBJECT
#define RENDERING_3D_WORLD_WORLD_OBJECT
#include <vector>
#include "objects_3d/Object3D.h"
#include "rigid_bodies/objects/Cube.h"
#include "rigid_bodies/solvers/Cube_solver.h"
#include "rigid_bodies/objects/Pyramid.h"
#include "rigid_bodies/solvers/Pyramid_solver.h"
#include "objects_3d/GenericCube.h"


namespace r3d {

class WorldObject
{
private:
	std::vector<std::shared_ptr<Object3D>> m_objects;
	vec3 m_gravity = vec3(0, -9.81, 0);
	uint64_t m_time_passed;
	bool m_isRunning;
public:
	WorldObject();
// Get methods
	uint64_t getTimePassed();
	std::shared_ptr<Object3D> getVecObjectAt(int index);
	uint64_t getObjectCount();
	bool isRunning();
// Set methods/methods for interacting with the class
	void removeAt(uint64_t index);
	void stop();
	void addObject(Object3D* object);
	void step(double dt);
};
}
#endif