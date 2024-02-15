#include "GiverOfRunes.hpp"
#include "../include/Engine.hpp"

GiverOfRunes::GiverOfRunes() : Card{"Giver of Runes", ""}
{
}

void GiverOfRunes::execute(Engine& engine)
{
}

void GiverOfRunes::initImpl()
{
    mana_cost_.setWhiteCost(1);
}
