#ifndef RENDERING_3D_UTIL__VEC3_H
#define RENDERING_3D_UTIL__VEC3_H
namespace r3d{
class vec3{
public:
  double x, y, z;
  vec3() 
    : x(0), y(0), z(0){}
  vec3(double _x, double _y, double _z)
    : x(_x), y(_y), z(_z){}
};
inline vec3 operator+(const vec3& primary, const vec3& other) {
  vec3 out{ primary.x + other.x, primary.y + other.y, primary.z + other.z };
  return out;
}
inline void operator+=(vec3& primary, const vec3& other) {
  primary.x += other.x;
  primary.y += other.y;
  primary.z += other.z;
}
inline vec3 operator-(vec3& primary, const vec3& other) {
  vec3 out{ primary.x - other.x, primary.y - other.y, primary.z - other.z };
  return out;
}
inline vec3 operator-(const vec3& primary) {
  return vec3{ -primary.x, -primary.y, -primary.z };
}
inline vec3 operator*(double t, const vec3& v) {
  return vec3(t * v.x, t * v.y, t * v.z);
}
}
#endif