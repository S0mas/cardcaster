#include "Ending.hpp"
#include "steps/CleanupStep.hpp"
#include "steps/EndStep.hpp"

Ending::Ending()
{
    steps_.push_back(std::make_unique<EndStep>());
    steps_.push_back(std::make_unique<CleanupStep>());
}
