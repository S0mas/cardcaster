#pragma once

#include <memory>
#include <vector>

#include "steps/Step.hpp"

class Phase
{
public:
    Phase() = default;
    virtual ~Phase() = default;


protected:
    std::vector<std::unique_ptr<Step>> steps_;
};
