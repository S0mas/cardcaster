#include "Armageddon.hpp"
#include "../include/Engine.hpp"

Armageddon::Armageddon() : Card{"Armageddon", ""}
{
}

void Armageddon::execute(Engine& engine)
{
}

void Armageddon::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(3);
}
