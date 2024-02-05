#include "Turn.hpp"
#include "phases/Beginning.hpp"
#include "phases/Combat.hpp"
#include "phases/Ending.hpp"
#include "phases/Main.hpp"

Turn::Turn()
{
    phases_.push_back(std::make_unique<Beginning>());
    phases_.push_back(std::make_unique<Main>());
    phases_.push_back(std::make_unique<Combat>());
    phases_.push_back(std::make_unique<Main>());
    phases_.push_back(std::make_unique<Ending>());
}
