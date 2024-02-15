#include "MoxPearl.hpp"
#include "../include/Engine.hpp"

MoxPearl::MoxPearl() : Card{"Mox Pearl", ""}
{
}

void MoxPearl::execute(Engine& engine)
{
}

void MoxPearl::initImpl()
{
    mana_cost_.setGenericCost(0);
    //TO FIX LATER
}
