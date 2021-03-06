#pragma once

#include <cstdint>
#include "IUpdatable.hpp"
#include "IGoalInput.hpp"
#include "IStateEstimator.hpp"
#include "IBoardClock.hpp"

namespace simple_flight {

class IAxisController : public IUpdatable {
public:
    virtual void initialize(unsigned int axis, const IGoalInput* goal_input, const IStateEstimator* state_estimator) = 0;
    virtual void reset() override = 0;
    virtual void update() override = 0;
    virtual TReal getOutput() = 0;
};

} //namespace