#include "GlimmerLens.hpp"
#include "../include/Engine.hpp"

GlimmerLens::GlimmerLens() : Card{"Glimmer Lens", ""}
{
}

void GlimmerLens::execute(Engine& engine)
{
}

void GlimmerLens::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(1);
}
