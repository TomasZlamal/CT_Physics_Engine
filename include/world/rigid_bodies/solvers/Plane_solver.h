#ifndef RENDERING_3D_WORLD_RIGID_BODIES_SOLVERS_PLANE_SOLVER_H
#define RENDERING_3D_WORLD_RIGID_BODIES_SOLVERS_PLANE_SOLVER_H
#include "Solver.h"
#include "../objects/Plane.h"
namespace r3d {
class PlaneSolver : public Solver {
	Plane plane;
  CollisionPoints testCollision(
    const RigidBody* other,
    const Solver* solver,
    const RigidBody* colliderTransform) const override;
  CollisionPoints testCollision(
    const RigidBody* other,
    const PlaneSolver* solver,
    const RigidBody* colliderTransform) const override;
  CollisionPoints testCollision(
    const RigidBody* other,
    const SphereSolver* solver,
    const RigidBody* colliderTransform) const override;
};
}
#endif