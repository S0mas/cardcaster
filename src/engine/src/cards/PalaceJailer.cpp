#include "PalaceJailer.hpp"
#include "../include/Engine.hpp"

PalaceJailer::PalaceJailer() : Card{"Palace Jailer", ""}
{
}

void PalaceJailer::execute(Engine& engine)
{
}

void PalaceJailer::initImpl()
{
    mana_cost_.setWhiteCost(2);
    mana_cost_.setGenericCost(2);
}
