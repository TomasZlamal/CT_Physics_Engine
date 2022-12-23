  #ifndef RENDERING_3D_WORLD_OBJECTS_3D_GENERIC_CUBE_H
  #define RENDERING_3D_WORLD_OBJECTS_3D_GENERIC_CUBE_H
  #include "../rigid_bodies/objects/Quad.h"
  #include "../rigid_bodies/solvers/Quad_solver.h"
  #include "Object3D.h"
  namespace r3d{
  class GenericCube : public Object3D{
  public:
    using Object3D::Object3D;
  };
  }
  #endif