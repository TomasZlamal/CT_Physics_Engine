#include "Solver.h"
namespace r3d {
Solver::Solver(std::shared_ptr<RigidBody> rigid_body)
  : m_rigid_body(rigid_body) {}
}