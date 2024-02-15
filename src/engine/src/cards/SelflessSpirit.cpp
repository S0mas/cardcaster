#include "SelflessSpirit.hpp"
#include "../include/Engine.hpp"

SelflessSpirit::SelflessSpirit() : Card{"Selfless Spirit", ""}
{
}

void SelflessSpirit::execute(Engine& engine)
{
}

void SelflessSpirit::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(1);
}
