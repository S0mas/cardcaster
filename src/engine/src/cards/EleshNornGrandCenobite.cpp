#include "EleshNornGrandCenobite.hpp"
#include "../include/Engine.hpp"

EleshNornGrandCenobite::EleshNornGrandCenobite() : Card{"Elesh Norn, Grand Cenobite", ""}
{
}

void EleshNornGrandCenobite::execute(Engine& engine)
{
}

void EleshNornGrandCenobite::initImpl()
{
    mana_cost_.setWhiteCost(2);
    mana_cost_.setGenericCost(5);
}
