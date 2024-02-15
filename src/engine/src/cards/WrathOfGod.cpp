#include "WrathOfGod.hpp"
#include "../include/Engine.hpp"

WrathOfGod::WrathOfGod() : Card{"Wrath of God", ""}
{
}

void WrathOfGod::execute(Engine& engine)
{
}

void WrathOfGod::initImpl()
{
    mana_cost_.setWhiteCost(2);
    mana_cost_.setGenericCost(2);
}
