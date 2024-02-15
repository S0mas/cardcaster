#include "Solitude.hpp"
#include "../include/Engine.hpp"

Solitude::Solitude() : Card{"Solitude", ""}
{
}

void Solitude::execute(Engine& engine)
{
}

void Solitude::initImpl()
{
    mana_cost_.setWhiteCost(2);
    mana_cost_.setGenericCost(3);
}
