#include "SeasonedDungeoneer.hpp"
#include "../include/Engine.hpp"

SeasonedDungeoneer::SeasonedDungeoneer() : Card{"Seasoned Dungeoneer", ""}
{
}

void SeasonedDungeoneer::execute(Engine& engine)
{
}

void SeasonedDungeoneer::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(3);
}
