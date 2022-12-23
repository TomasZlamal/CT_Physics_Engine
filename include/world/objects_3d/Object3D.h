#ifndef RENDERING_3D_WORLD_OBJECTS_3D_OBJECT_3D_H
#define RENDERING_3D_WORLD_OBJECTS_3D_OBJECT_3D_H


namespace r3d{
template <typename RigidBody, typename Solver>
class Object3D {
private:
		RigidBody m_rigid_body;
		Solver m_solver;
public:
	Object3D() = delete;
	Object3D(RigidBody rigid_body, Solver solver);
	Solver& getSolver();
	RigidBody& getRigidBody();
};
}
#endif