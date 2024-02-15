#include "CouncilsJudgment.hpp"
#include "../include/Engine.hpp"

CouncilsJudgment::CouncilsJudgment() : Card{"Council's Judgment", ""}
{
}

void CouncilsJudgment::execute(Engine& engine)
{
}

void CouncilsJudgment::initImpl()
{
    mana_cost_.setWhiteCost(2);
    mana_cost_.setGenericCost(1);
}
