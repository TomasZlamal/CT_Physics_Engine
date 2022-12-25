#include "Cube.h"
namespace r3d{
Cube::Cube(){
  m_half_height = {};
  m_half_width = {};
}
Cube::Cube(r3d::point3d half_height, r3d::point3d half_width)
  : m_half_width(half_width), m_half_height(half_height){}
r3d::point3d Cube::getHalfHeight(){
  return m_half_height;
}
r3d::point3d Cube::getHalfWidth(){
  return m_half_width;
}
void Cube::setHalfWidth(r3d::point3d half_width){
  m_half_width = half_width;
}
void Cube::setHalfHeight(r3d::point3d half_height){
  m_half_height = half_height;
}
void Cube::setPosition(vec3 dir) {

}
vec3 Cube::getPosition()
{
  return vec3();
}
}