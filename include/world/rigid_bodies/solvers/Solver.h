#ifndef RENDERING_3D_WORLD_RIGID_BODIES_SOLVERS_SOLVER_H
#define RENDERING_3D_WORLD_RIGID_BODIES_SOLVERS_SOLVER_H
#include <memory>
#include "../objects/RigidBody.h"
#include "../../../util/vec3.h"
namespace r3d{
struct CollisionPoints {
  vec3 A;
  vec3 B;
  vec3 normal; // B-A
  double depth;
  bool hasCollision;
};
class SphereSolver;
class PlaneSolver;
class Solver{
public:
  virtual CollisionPoints testCollision(
    const RigidBody* other,
    const Solver* solver,
    const RigidBody* colliderTransform) const = 0;
  virtual CollisionPoints testCollision(
    const RigidBody* other,
    const PlaneSolver* solver,
    const RigidBody* colliderTransform) const = 0;
  virtual CollisionPoints testCollision(
    const RigidBody* other,
    const SphereSolver* solver,
    const RigidBody* colliderTransform) const = 0;
};
}

#endif