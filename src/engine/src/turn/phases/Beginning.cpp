#include "Beginning.hpp"
#include "steps/DrawStep.hpp"
#include "steps/UntapStep.hpp"
#include "steps/UpkeepStep.hpp"

Beginning::Beginning()
{
    steps_.push_back(std::make_unique<UntapStep>());
    steps_.push_back(std::make_unique<UpkeepStep>());
    steps_.push_back(std::make_unique<DrawStep>());
}
