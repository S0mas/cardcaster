#include "AdantoVanguard.hpp"
#include "../include/Engine.hpp"

AdantoVanguard::AdantoVanguard() : Card{"Adanto Vanguard", ""}
{
}

void AdantoVanguard::execute(Engine& engine)
{
}

void AdantoVanguard::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(1);
}
