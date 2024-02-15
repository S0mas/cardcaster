#include "WindsOfAbandon.hpp"
#include "../include/Engine.hpp"

WindsOfAbandon::WindsOfAbandon() : Card{"Winds of Abandon", ""}
{
}

void WindsOfAbandon::execute(Engine& engine)
{
}

void WindsOfAbandon::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(1);
}
