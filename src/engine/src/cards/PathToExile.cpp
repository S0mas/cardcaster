#include "PathToExile.hpp"
#include "../include/Engine.hpp"

PathToExile::PathToExile() : Card{"Path to Exile", ""}
{
}

void PathToExile::execute(Engine& engine)
{
}

void PathToExile::initImpl()
{
    mana_cost_.setWhiteCost(1);
}
