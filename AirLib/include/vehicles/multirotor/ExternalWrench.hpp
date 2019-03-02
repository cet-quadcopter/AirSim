#ifndef msr_airlib_ExternalWrench_hpp
#define msr_airlib_ExternalWrench_hpp

#include "common/Common.hpp"
#include "physics/PhysicsBodyVertex.hpp"

namespace msr { namespace airlib {

class ExternalWrench : public PhysicsBodyVertex {
  public:
    Wrench output;
  
  protected:
    virtual void setWrench(Wrench& wrench) override
    {
      wrench.force = Vector3r(output.force);
      wrench.torque = Vector3r(output.torque);
    }
};

}}

#endif