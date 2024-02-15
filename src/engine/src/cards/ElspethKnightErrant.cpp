#include "ElspethKnightErrant.hpp"
#include "../include/Engine.hpp"

ElspethKnightErrant::ElspethKnightErrant() : Card{"Elspeth, Knight-Errant", ""}
{
}

void ElspethKnightErrant::execute(Engine& engine)
{
}

void ElspethKnightErrant::initImpl()
{
    mana_cost_.setWhiteCost(2);
    mana_cost_.setGenericCost(2);
}
