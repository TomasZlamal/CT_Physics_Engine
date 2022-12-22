#ifndef RENDERING_3D_WORLD_OBJECTS_3D_CAMERA_H
#define RENDERING_3D_WORLD_OBJECTS_3D_CAMERA_H
#include "../rigid_bodies/objects/None.h"
#include "../../util/using_directives.h"
#include "../../util/vec3.h"
namespace r3d{
class Camera{
private:
  r3d::point3d m_camera_pos;
  // what the camera is "looking" at
  r3d::point3d m_camera_direction;
  r3d::point3d m_camera_up;
public:
  Camera() = delete;
  Camera(r3d::point3d camera_pos, r3d::point3d camera_direction, r3d::point3d camera_up);
};
}
#endif