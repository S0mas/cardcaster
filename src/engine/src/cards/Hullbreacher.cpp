#include "Hullbreacher.hpp"
#include "../include/Engine.hpp"

Hullbreacher::Hullbreacher() : Card{"Hullbreacher", ""}
{
}

void Hullbreacher::execute(Engine& engine)
{

}

void Hullbreacher::initImpl()
{
    mana_cost_.setBlueCost(1);
    mana_cost_.setGenericCost(2);

    triggered_abilities_.add_ability({Trigger::Type::Draw, [](Engine&){/*replace draw with treasure*/}});
}
