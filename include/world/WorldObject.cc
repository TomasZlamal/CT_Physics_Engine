#include "WorldObject.h"
namespace r3d {
WorldObject::WorldObject() {
	m_objects.reserve(10);
	m_time_passed = 0;
}
void WorldObject::passTime() {

}
Object3D* WorldObject::getVecObjectAt(int index) {
	return m_objects[index].get();
}
void WorldObject::addObject(Object3D* object) {
	m_objects.push_back(std::make_shared<Object3D>(object));
}
}
