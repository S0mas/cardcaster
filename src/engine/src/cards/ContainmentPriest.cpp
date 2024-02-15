#include "ContainmentPriest.hpp"
#include "../include/Engine.hpp"

ContainmentPriest::ContainmentPriest() : Card{"Containment Priest", ""}
{
}

void ContainmentPriest::execute(Engine& engine)
{
}

void ContainmentPriest::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(1);
}
