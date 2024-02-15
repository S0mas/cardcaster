#include "EliteSpellbinder.hpp"
#include "../include/Engine.hpp"

EliteSpellbinder::EliteSpellbinder() : Card{"Elite Spellbinder", ""}
{
}

void EliteSpellbinder::execute(Engine& engine)
{
}

void EliteSpellbinder::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(2);
}
