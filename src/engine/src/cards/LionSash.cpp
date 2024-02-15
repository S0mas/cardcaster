#include "LionSash.hpp"
#include "../include/Engine.hpp"

LionSash::LionSash() : Card{"Lion Sash", ""}
{
}

void LionSash::execute(Engine& engine)
{
}

void LionSash::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(1);
}
