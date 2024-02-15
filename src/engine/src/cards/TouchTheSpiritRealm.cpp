#include "TouchTheSpiritRealm.hpp"
#include "../include/Engine.hpp"

TouchTheSpiritRealm::TouchTheSpiritRealm() : Card{"Touch the Spirit Realm", ""}
{
}

void TouchTheSpiritRealm::execute(Engine& engine)
{
}

void TouchTheSpiritRealm::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(2);
}
