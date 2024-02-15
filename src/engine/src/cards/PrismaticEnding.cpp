#include "PrismaticEnding.hpp"
#include "../include/Engine.hpp"

PrismaticEnding::PrismaticEnding() : Card{"Prismatic Ending", ""}
{
}

void PrismaticEnding::execute(Engine& engine)
{
}

void PrismaticEnding::initImpl()
{
    mana_cost_.setWhiteCost(1);
    //TO FIX LATER
}
