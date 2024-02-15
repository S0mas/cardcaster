#include "SkyclaveApparition.hpp"
#include "../include/Engine.hpp"

SkyclaveApparition::SkyclaveApparition() : Card{"Skyclave Apparition", ""}
{
}

void SkyclaveApparition::execute(Engine& engine)
{
}

void SkyclaveApparition::initImpl()
{
    mana_cost_.setWhiteCost(2);
    mana_cost_.setGenericCost(1);
}
