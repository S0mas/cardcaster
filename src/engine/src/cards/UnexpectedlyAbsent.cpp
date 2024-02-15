#include "UnexpectedlyAbsent.hpp"
#include "../include/Engine.hpp"

UnexpectedlyAbsent::UnexpectedlyAbsent() : Card{"Unexpectedly Absent", ""}
{
}

void UnexpectedlyAbsent::execute(Engine& engine)
{
}

void UnexpectedlyAbsent::initImpl()
{
    mana_cost_.setWhiteCost(2);
    //TO FIX LATER
}
