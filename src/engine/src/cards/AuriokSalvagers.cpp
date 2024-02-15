#include "AuriokSalvagers.hpp"
#include "../include/Engine.hpp"

AuriokSalvagers::AuriokSalvagers() : Card{"Auriok Salvagers", ""}
{
}

void AuriokSalvagers::execute(Engine& engine)
{
}

void AuriokSalvagers::initImpl()
{
    mana_cost_.setWhiteCost(1);
    mana_cost_.setGenericCost(3);
}
