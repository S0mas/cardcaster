#include "StoneforgeMystic.hpp"
#include "../include/Engine.hpp"

StoneforgeMystic::StoneforgeMystic() : Card{"Stoneforge Mystic", ""}
{
}

void StoneforgeMystic::execute(Engine& engine)
{
}

void StoneforgeMystic::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(1);
}
