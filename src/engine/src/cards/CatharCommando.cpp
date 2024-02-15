#include "CatharCommando.hpp"
#include "../include/Engine.hpp"

CatharCommando::CatharCommando() : Card{"Cathar Commando", ""}
{
}

void CatharCommando::execute(Engine& engine)
{
}

void CatharCommando::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(1);
}
