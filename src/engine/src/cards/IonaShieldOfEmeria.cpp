#include "IonaShieldOfEmeria.hpp"
#include "../include/Engine.hpp"

IonaShieldOfEmeria::IonaShieldOfEmeria() : Card{"Iona, Shield of Emeria", ""}
{
}

void IonaShieldOfEmeria::execute(Engine& engine)
{
}

void IonaShieldOfEmeria::initImpl()
{
    mana_cost_.setWhiteCost(3);
    mana_cost_.setGenericCost(6);
}
