#include "LeylineBinding.hpp"
#include "../include/Engine.hpp"

LeylineBinding::LeylineBinding() : Card{"Leyline Binding", ""}
{
}

void LeylineBinding::execute(Engine& engine)
{
}

void LeylineBinding::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(5);
}
