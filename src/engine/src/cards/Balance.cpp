#include "Balance.hpp"
#include "../include/Engine.hpp"

Balance::Balance() : Card{"Balance", ""}
{
}

void Balance::execute(Engine& engine)
{
}

void Balance::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(1);
}
