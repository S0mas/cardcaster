#include "UsherOfTheFallen.hpp"
#include "../include/Engine.hpp"

UsherOfTheFallen::UsherOfTheFallen() : Card{"Usher of the Fallen", ""}
{
}

void UsherOfTheFallen::execute(Engine& engine)
{
}

void UsherOfTheFallen::initImpl()
{
    mana_cost_.setWhiteCost(1);
}
