#include "Flickerwisp.hpp"
#include "../include/Engine.hpp"

Flickerwisp::Flickerwisp() : Card{"Flickerwisp", ""}
{
}

void Flickerwisp::execute(Engine& engine)
{
}

void Flickerwisp::initImpl()
{
    mana_cost_.setWhiteCost(2);
    mana_cost_.setGenericCost(1);
}
