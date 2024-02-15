#include "MotherOfRunes.hpp"
#include "../include/Engine.hpp"

MotherOfRunes::MotherOfRunes() : Card{"Mother of Runes", ""}
{
}

void MotherOfRunes::execute(Engine& engine)
{
}

void MotherOfRunes::initImpl()
{
    mana_cost_.setWhiteCost(1);
}
