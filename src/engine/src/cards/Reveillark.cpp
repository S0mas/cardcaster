#include "Reveillark.hpp"
#include "../include/Engine.hpp"

Reveillark::Reveillark() : Card{"Reveillark", ""}
{
}

void Reveillark::execute(Engine& engine)
{
}

void Reveillark::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(4);
}
