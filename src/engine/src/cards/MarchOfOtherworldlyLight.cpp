#include "MarchOfOtherworldlyLight.hpp"
#include "../include/Engine.hpp"

MarchOfOtherworldlyLight::MarchOfOtherworldlyLight() : Card{"March of Otherworldly Light", ""}
{
}

void MarchOfOtherworldlyLight::execute(Engine& engine)
{
}

void MarchOfOtherworldlyLight::initImpl()
{
    mana_cost_.setWhiteCost(1);
    //TO FIX LATER
}
