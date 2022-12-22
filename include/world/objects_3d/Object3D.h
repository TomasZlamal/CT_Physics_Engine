#ifndef RENDERING_3D_WORLD_OBJECTS_3D_OBJECT_3D_H
#define RENDERING_3D_WORLD_OBJECTS_3D_OBJECT_3D_H
#include "../rigid_bodies/objects/RigidBody.h"
#include "../rigid_bodies/solvers/Quad_solver.h"



#include "../../util/vec3.h"
#include "../../util/using_directives.h"


namespace r3d{
template <typename RigidBody, typename Solver>
class Object3D{
private:
  RigidBody m_rigid_body;
  Solver m_solver;
public:
  virtual Solver& getSolver() = 0;
  virtual RigidBody& getRigidBody() = 0;

};
}
#endif