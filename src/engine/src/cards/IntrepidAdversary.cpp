#include "IntrepidAdversary.hpp"
#include "../include/Engine.hpp"

IntrepidAdversary::IntrepidAdversary() : Card{"Intrepid Adversary", ""}
{
}

void IntrepidAdversary::execute(Engine& engine)
{
}

void IntrepidAdversary::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(1);
}
