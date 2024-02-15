#include "ThrabenInspector.hpp"
#include "../include/Engine.hpp"

ThrabenInspector::ThrabenInspector() : Card{"Thraben Inspector", ""}
{
}

void ThrabenInspector::execute(Engine& engine)
{
}

void ThrabenInspector::initImpl()
{
    mana_cost_.setWhiteCost(1);
}
