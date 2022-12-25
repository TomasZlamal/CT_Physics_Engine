#include "Plane.h"
namespace r3d {
Plane::Plane(vec3 plane, double distance)
	: m_plane(plane), m_distance(distance) {}
vec3 Plane::getPlane(){
	return m_plane;
}
void Plane::setPlane(vec3 plane){
	m_plane = plane;
}
double Plane::getDistance()
{
	return m_distance;
}
void Plane::setDistance(double distance) {
	m_distance = distance;
}
void Plane::setPosition(vec3 dir){
	m_plane = dir;
}
vec3 Plane::getPosition()
{
	return m_plane;
}
}