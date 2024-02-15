#include "RecruiterOfTheGuard.hpp"
#include "../include/Engine.hpp"

RecruiterOfTheGuard::RecruiterOfTheGuard() : Card{"Recruiter of the Guard", ""}
{
}

void RecruiterOfTheGuard::execute(Engine& engine)
{
}

void RecruiterOfTheGuard::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(2);
}
