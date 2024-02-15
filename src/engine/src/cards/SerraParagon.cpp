#include "SerraParagon.hpp"
#include "../include/Engine.hpp"

SerraParagon::SerraParagon() : Card{"Serra Paragon", ""}
{
}

void SerraParagon::execute(Engine& engine)
{
}

void SerraParagon::initImpl()
{
    mana_cost_.setWhiteCost(2);
    mana_cost_.setGenericCost(2);
}
