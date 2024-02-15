#include "LuminarchAspirant.hpp"
#include "../include/Engine.hpp"

LuminarchAspirant::LuminarchAspirant() : Card{"Luminarch Aspirant", ""}
{
}

void LuminarchAspirant::execute(Engine& engine)
{
}

void LuminarchAspirant::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(1);
}
