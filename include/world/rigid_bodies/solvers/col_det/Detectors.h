#ifndef RENDERING_3D_WORLD_RIGID_BODIES_SOLVERS_COL_DET_DETECTORS_H
#define RENDERING_3D_WORLD_RIGID_BODIES_SOLVERS_COL_DET_DETECTORS_H
#include "../Plane_solver.h"
#include "../../objects/RigidBody.h"
namespace r3d {
class SphereSolver;
}
namespace det {
r3d::CollisionPoints findSphereSphereCollisionPoints(
	const r3d::SphereSolver* a, const r3d::RigidBody& ta,
	const r3d::SphereSolver* b, const r3d::RigidBody& tb);
r3d::CollisionPoints findSpherePlaneCollisionPoints(
	const r3d::SphereSolver* a, const r3d::RigidBody& ta,
	const r3d::PlaneSolver* b, const r3d::RigidBody& tb);
r3d::CollisionPoints findPlaneSphereCollisionPoints(
	const r3d::PlaneSolver* a, const r3d::RigidBody& ta,
	const r3d::SphereSolver* b, const r3d::RigidBody& tb);
}
#endif