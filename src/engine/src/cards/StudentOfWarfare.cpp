#include "StudentOfWarfare.hpp"
#include "../include/Engine.hpp"

StudentOfWarfare::StudentOfWarfare() : Card{"Student of Warfare", ""}
{
}

void StudentOfWarfare::execute(Engine& engine)
{
}

void StudentOfWarfare::initImpl()
{
    mana_cost_.setWhiteCost(1);
}
