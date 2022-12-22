#include "Camera.h"
namespace r3d{
Camera::Camera(r3d::point3d camera_pos, r3d::point3d camera_direction)
  : m_camera_pos(camera_pos), m_camera_direction(camera_direction){}
}