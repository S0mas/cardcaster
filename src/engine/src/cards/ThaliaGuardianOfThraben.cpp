#include "ThaliaGuardianOfThraben.hpp"
#include "../include/Engine.hpp"

ThaliaGuardianOfThraben::ThaliaGuardianOfThraben() : Card{"Thalia, Guardian of Thraben", ""}
{
}

void ThaliaGuardianOfThraben::execute(Engine& engine)
{
}

void ThaliaGuardianOfThraben::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(1);
}
