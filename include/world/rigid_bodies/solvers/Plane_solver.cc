#include "Plane_solver.h"
#include "col_det/Detectors.h"
namespace r3d {
CollisionPoints PlaneSolver::testCollision(
  const RigidBody* other,
  const Solver* solver,
  const RigidBody* colliderTransform) const{
  return solver->testCollision(colliderTransform, this, other);
}
CollisionPoints PlaneSolver::testCollision(
  const RigidBody* other,
  const SphereSolver* solver,
  const RigidBody* colliderTransform) const {
  return det::findPlaneSphereCollisionPoints(
    this, *other, solver, *colliderTransform
  );
}
CollisionPoints PlaneSolver::testCollision(
  const RigidBody* other,
  const PlaneSolver* solver,
  const RigidBody* colliderTransform) const {
  return {};
}
}