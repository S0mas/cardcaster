#include "EsperSentinel.hpp"
#include "../include/Engine.hpp"

EsperSentinel::EsperSentinel() : Card{"Esper Sentinel", ""}
{
}

void EsperSentinel::execute(Engine& engine)
{
}

void EsperSentinel::initImpl()
{
    mana_cost_.setWhiteCost(1);
}
