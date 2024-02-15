#include "SwordsToPlowshares.hpp"
#include "../include/Engine.hpp"

SwordsToPlowshares::SwordsToPlowshares() : Card{"Swords to Plowshares", ""}
{
}

void SwordsToPlowshares::execute(Engine& engine)
{
}

void SwordsToPlowshares::initImpl()
{
    mana_cost_.setWhiteCost(1);
}
