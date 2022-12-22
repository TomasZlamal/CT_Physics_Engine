#ifndef RENDERING_3D_UTIL__VEC3_H
#define RENDERING_3D_UTIL__VEC3_H
namespace r3d{
struct vec3{
  double x, y, z;
  vec3() 
    : x(0), y(0), z(0){}
  vec3(double _x, double _y, double _z)
    : x(_x), y(_y), z(_z){}
  vec3 operator+(const vec3& other){
    vec3 out{x + other.x, y + other.y, z + other.z};
    return out;
  }
  void operator+=(const vec3& other){
    x += other.x;
    y += other.y;
    z += other.z;
  }
  vec3 operator-(const vec3& other){
    vec3 out{x - other.x, y - other.y, z - other.z};
    return out;
  }
  vec3 operator-(){
    return vec3{-x, -y, -z};
  }
};
}
#endif