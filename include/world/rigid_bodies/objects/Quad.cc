#include "Quad.h"
namespace r3d{
Quadrilateral::Quadrilateral(){
  m_pointA = {};
  m_pointB = {};
}
Quadrilateral::Quadrilateral(r3d::point3d pointA, r3d::point3d pointB)
  : m_pointA(pointA), m_pointB(pointB){}
}