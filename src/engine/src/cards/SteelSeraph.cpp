#include "SteelSeraph.hpp"
#include "../include/Engine.hpp"

SteelSeraph::SteelSeraph() : Card{"Steel Seraph", ""}
{
}

void SteelSeraph::execute(Engine& engine)
{
}

void SteelSeraph::initImpl()
{
    mana_cost_.setGenericCost(6);
}
