#include "Quad.h"
namespace r3d{
Quadrilateral::Quadrilateral(){
  m_pointA = {};
  m_pointB = {};
}
Quadrilateral::Quadrilateral(r3d::point3d pointA, r3d::point3d pointB)
  : m_pointA(pointA), m_pointB(pointB){}
r3d::point3d Quadrilateral::getPointA(){
  return m_pointA;
}
r3d::point3d Quadrilateral::getPointB(){
  return m_pointB;
}
r3d::point3d Quadrilateral::getPointC(){
  return m_pointC;
}
void Quadrilateral::setPointA(r3d::point3d pointA){
  m_pointA = pointA;
}
void Quadrilateral::setPointB(r3d::point3d pointB){
  m_pointB = pointB;
}
}