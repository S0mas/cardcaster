#include "LoranOfTheThirdPath.hpp"
#include "../include/Engine.hpp"

LoranOfTheThirdPath::LoranOfTheThirdPath() : Card{"Loran of the Third Path", ""}
{
}

void LoranOfTheThirdPath::execute(Engine& engine)
{
}

void LoranOfTheThirdPath::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(2);
}
