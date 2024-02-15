#include "LeoninRelicWarder.hpp"
#include "../include/Engine.hpp"

LeoninRelicWarder::LeoninRelicWarder() : Card{"Leonin Relic-Warder", ""}
{
}

void LeoninRelicWarder::execute(Engine& engine)
{
}

void LeoninRelicWarder::initImpl()
{
    mana_cost_.setWhiteCost(2);
}
