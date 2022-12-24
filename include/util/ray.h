#ifndef RENDERING_3D_UTIL_RAY_H
#define RENDERING_3D_UTIL_RAY_H
#include "vec3.h"
#include "using_directives.h"
namespace r3d {
class ray {
private:
	point3d m_origin;
	point3d m_direction;
public:
	ray() = default;
	ray(const point3d& origin, const point3d& direction)
		: m_origin(origin), m_direction(direction){}
	point3d getOrigin() const { return m_origin;}
	point3d	getDirection() const { return m_direction; }
	point3d at(double t) const {
		return m_origin + t * m_direction;
	}
};
}
#endif