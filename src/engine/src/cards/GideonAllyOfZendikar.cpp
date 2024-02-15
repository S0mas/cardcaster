#include "GideonAllyOfZendikar.hpp"
#include "../include/Engine.hpp"

GideonAllyOfZendikar::GideonAllyOfZendikar() : Card{"Gideon, Ally of Zendikar", ""}
{
}

void GideonAllyOfZendikar::execute(Engine& engine)
{
}

void GideonAllyOfZendikar::initImpl()
{
    mana_cost_.setWhiteCost(2);
    mana_cost_.setGenericCost(2);
}
