#include "HeroOfBladehold.hpp"
#include "../include/Engine.hpp"

HeroOfBladehold::HeroOfBladehold() : Card{"Hero of Bladehold", ""}
{
}

void HeroOfBladehold::execute(Engine& engine)
{
}

void HeroOfBladehold::initImpl()
{
    mana_cost_.setWhiteCost(2);
    mana_cost_.setGenericCost(2);
}
