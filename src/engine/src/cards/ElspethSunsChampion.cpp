#include "ElspethSunsChampion.hpp"
#include "../include/Engine.hpp"

ElspethSunsChampion::ElspethSunsChampion() : Card{"Elspeth, Sun's Champion", ""}
{
}

void ElspethSunsChampion::execute(Engine& engine)
{
}

void ElspethSunsChampion::initImpl()
{
    mana_cost_.setWhiteCost(2);
    mana_cost_.setGenericCost(4);
}
