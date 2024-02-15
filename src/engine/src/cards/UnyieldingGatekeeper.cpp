#include "UnyieldingGatekeeper.hpp"
#include "../include/Engine.hpp"

UnyieldingGatekeeper::UnyieldingGatekeeper() : Card{"Unyielding Gatekeeper", ""}
{
}

void UnyieldingGatekeeper::execute(Engine& engine)
{
}

void UnyieldingGatekeeper::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(1);
}
