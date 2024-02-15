#include "GuardianOfGhirapur.hpp"
#include "../include/Engine.hpp"

GuardianOfGhirapur::GuardianOfGhirapur() : Card{"Guardian of Ghirapur", ""}
{
}

void GuardianOfGhirapur::execute(Engine& engine)
{
}

void GuardianOfGhirapur::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(2);
}
