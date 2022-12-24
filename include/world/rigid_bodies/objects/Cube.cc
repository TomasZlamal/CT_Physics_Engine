#include "Cube.h"
namespace r3d{
Cube::Cube(){
  m_pointA = {};
  m_pointB = {};
}
Cube::Cube(r3d::point3d pointA, r3d::point3d pointB)
  : m_pointA(pointA), m_pointB(pointB){}
r3d::point3d Cube::getPointA(){
  return m_pointA;
}
r3d::point3d Cube::getPointB(){
  return m_pointB;
}
void Cube::setPointA(r3d::point3d pointA){
  m_pointA = pointA;
}
void Cube::setPointB(r3d::point3d pointB){
  m_pointB = pointB;
}
}