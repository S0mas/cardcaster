#include "TheWanderingEmperor.hpp"
#include "../include/Engine.hpp"

TheWanderingEmperor::TheWanderingEmperor() : Card{"The Wandering Emperor", ""}
{
}

void TheWanderingEmperor::execute(Engine& engine)
{
}

void TheWanderingEmperor::initImpl()
{
    mana_cost_.setWhiteCost(2);
    mana_cost_.setGenericCost(2);
}
