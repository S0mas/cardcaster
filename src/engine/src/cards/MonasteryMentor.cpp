#include "MonasteryMentor.hpp"
#include "../include/Engine.hpp"

MonasteryMentor::MonasteryMentor() : Card{"Monastery Mentor", ""}
{
}

void MonasteryMentor::execute(Engine& engine)
{
}

void MonasteryMentor::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(2);
}
