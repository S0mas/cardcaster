#include "Hullbreacher.hpp"
#include "../include/Engine.hpp"

Hullbreacher::Hullbreacher() : Card{"Hullbreacher", ""}
{
    mana_cost_.setBlueCost(1);
    mana_cost_.setGenericCost(2);
}

void Hullbreacher::execute(Engine& engine)
{

}


