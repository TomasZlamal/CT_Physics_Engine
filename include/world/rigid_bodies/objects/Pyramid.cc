#include "Pyramid.h"
namespace r3d{
Pyramid::Pyramid(r3d::point3d pointA, r3d::point3d pointB, r3d::point3d pointC)
  : m_pointA(pointA), m_pointB(pointB), m_pointC(pointC)
{}
Pyramid::Pyramid()
  : m_pointA{}, m_pointB{}, m_pointC{}{}
r3d::point3d Pyramid::getPointA(){
  return m_pointA;
}
r3d::point3d Pyramid::getPointB(){
  return m_pointB;
}
r3d::point3d Pyramid::getPointC(){
  return m_pointC;
}
r3d::point3d Pyramid::getPointD(){
  return m_pointD;
}
r3d::point3d Pyramid::getPointE(){
  return m_pointE;
}
void Pyramid::setPointA(r3d::point3d pointA){
  m_pointA = pointA;
}
void Pyramid::setPointB(r3d::point3d pointB){
  m_pointB = pointB;
}
void Pyramid::setPointC(r3d::point3d pointC){
  m_pointC = pointC;
}
void Pyramid::setPointD(r3d::point3d pointD){
  m_pointD = pointD;
}
void Pyramid::setPointE(r3d::point3d pointE){
  m_pointE = pointE;
}
}
