#include "BladeSplicer.hpp"
#include "../include/Engine.hpp"

BladeSplicer::BladeSplicer() : Card{"Blade Splicer", ""}
{
}

void BladeSplicer::execute(Engine& engine)
{
}

void BladeSplicer::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(2);
}
