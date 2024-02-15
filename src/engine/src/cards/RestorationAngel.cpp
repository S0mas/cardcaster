#include "RestorationAngel.hpp"
#include "../include/Engine.hpp"

RestorationAngel::RestorationAngel() : Card{"Restoration Angel", ""}
{
}

void RestorationAngel::execute(Engine& engine)
{
}

void RestorationAngel::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(3);
}
