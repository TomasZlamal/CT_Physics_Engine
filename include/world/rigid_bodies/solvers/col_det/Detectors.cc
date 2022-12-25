#include "Detectors.h"
namespace det {
r3d::CollisionPoints findSphereSphereCollisionPoints(
	const r3d::SphereSolver* a, const r3d::RigidBody& ta,
	const r3d::SphereSolver* b, const r3d::RigidBody& tb){
	// IMPLEMENT
}
r3d::CollisionPoints findSpherePlaneCollisionPoints(
	const r3d::SphereSolver* a, const r3d::RigidBody& ta,
	const r3d::PlaneSolver* b, const r3d::RigidBody& tb) {
	// IMPLEMENT
}
r3d::CollisionPoints findPlaneSphereCollisionPoints(
	const r3d::PlaneSolver* a, const r3d::RigidBody& ta,
	const r3d::SphereSolver* b, const r3d::RigidBody& tb) {
	// IMPLEMENT
}
}