#ifndef RENDERING_3D_WORLD_RIGID_BODIES_OBJECTS_PLANE_H
#define RENDERING_3D_WORLD_RIGID_BODIES_OBJECTS_PLANE_H
#include "RigidBody.h"
namespace r3d {
class Plane : public RigidBody {
private:
	vec3 m_plane;
	double m_distance;
public:
	Plane(vec3 plane, double distance);
	vec3 getPlane();
	void setPlane(vec3 plane);
	double getDistance();
	void setDistance(double distance);
	void setPosition(vec3 dir);
	vec3 getPosition();
};
}
#endif