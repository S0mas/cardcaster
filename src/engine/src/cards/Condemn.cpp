#include "Condemn.hpp"
#include "../include/Engine.hpp"

Condemn::Condemn() : Card{"Condemn", ""}
{
}

void Condemn::execute(Engine& engine)
{
}

void Condemn::initImpl()
{
    mana_cost_.setWhiteCost(1);
}
