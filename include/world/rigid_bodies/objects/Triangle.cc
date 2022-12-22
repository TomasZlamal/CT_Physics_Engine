#include "Triangle.h"
namespace r3d{
Triangle::Triangle(r3d::point3d pointA, r3d::point3d pointB, r3d::point3d pointC)
  : m_pointA(pointA), m_pointB(pointB), m_pointC(pointC)
{}
Triangle::Triangle()
  : m_pointA{}, m_pointB{}, m_pointC{}{}
r3d::point3d Triangle::getPointA(){
  return m_pointA;
}
r3d::point3d Triangle::getPointB(){
  return m_pointB;
}
r3d::point3d Triangle::getPointC(){
  return m_pointC;
}
r3d::point3d Triangle::getPointD(){
  return m_pointD;
}
r3d::point3d Triangle::getPointE(){
  return m_pointE;
}
void Triangle::setPointA(r3d::point3d pointA){
  m_pointA = pointA;
}
void Triangle::setPointB(r3d::point3d pointB){
  m_pointB = pointB;
}
void Triangle::setPointC(r3d::point3d pointC){
  m_pointC = pointC;
}
void Triangle::setPointD(r3d::point3d pointD){
  m_pointD = pointD;
}
void Triangle::setPointE(r3d::point3d pointE){
  m_pointE = pointE;
}
}
