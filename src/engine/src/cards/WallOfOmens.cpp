#include "WallOfOmens.hpp"
#include "../include/Engine.hpp"

WallOfOmens::WallOfOmens() : Card{"Wall of Omens", ""}
{
}

void WallOfOmens::execute(Engine& engine)
{
}

void WallOfOmens::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(1);
}
