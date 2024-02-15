#include "Oust.hpp"
#include "../include/Engine.hpp"

Oust::Oust() : Card{"Oust", ""}
{
}

void Oust::execute(Engine& engine)
{
}

void Oust::initImpl()
{
    mana_cost_.setWhiteCost(1);
}
