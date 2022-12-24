#include "WorldObject.h"
namespace r3d {
WorldObject::WorldObject() {
	m_objects.reserve(10);
	m_time_passed = 0;
	m_isRunning = true;
}
void WorldObject::passTime() {
	for (int i = 0; i < getObjectCount(); i++) {
		Object3D* temp_obj = getVecObjectAt(i).get();
		if (static_cast<r3d::GenericCube*>(temp_obj)) {
			temp_obj = static_cast<r3d::GenericCube*>(temp_obj);

			r3d::Cube* rigid_body 
				= static_cast<r3d::Cube*>(temp_obj->getRigidBody().lock().get());

			r3d::CubeSolver* solver 
				= static_cast<r3d::CubeSolver*>(temp_obj->getSolver().lock().get());

			for (int j = 0; j < getObjectCount(); j++) {
				if (i == j) continue;
				r3d::Object3D* temp_obj2 = getVecObjectAt(j).get();
				r3d::RigidBody* rigid_body = temp_obj2->getRigidBody().lock().get();
				solver->solve(rigid_body);
			}
		}
	}
	m_time_passed++;
}
uint64_t WorldObject::getTimePassed()
{
	return m_time_passed;
}
std::shared_ptr<Object3D> WorldObject::getVecObjectAt(int index) {
	if (index < m_objects.size() && index >= 0) {
		return m_objects[index];
	}
}
uint64_t WorldObject::getObjectCount()
{
	return m_objects.size();
}
void WorldObject::removeAt(uint64_t index)
{
	if (index >= 0 && index < m_objects.size()) {
		m_objects.erase(m_objects.begin() + index);
	}
}
bool WorldObject::isRunning()
{
	return m_isRunning;
}
void WorldObject::stop()
{
	m_isRunning = false;
}
void WorldObject::addObject(Object3D* object) {
	if (dynamic_cast<GenericCube*>(object)) {
		m_objects.push_back(std::shared_ptr<Object3D>(object));
	}
}
}