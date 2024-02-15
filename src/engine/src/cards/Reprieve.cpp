#include "Reprieve.hpp"
#include "../include/Engine.hpp"

Reprieve::Reprieve() : Card{"Reprieve", ""}
{
}

void Reprieve::execute(Engine& engine)
{
}

void Reprieve::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(1);
}
