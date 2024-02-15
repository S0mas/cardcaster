#include "GetLost.hpp"
#include "../include/Engine.hpp"

GetLost::GetLost() : Card{"Get Lost", ""}
{
}

void GetLost::execute(Engine& engine)
{
}

void GetLost::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(1);
}
