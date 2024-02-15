#include "BoonBringerValkyrie.hpp"
#include "../include/Engine.hpp"

BoonBringerValkyrie::BoonBringerValkyrie() : Card{"Boon-Bringer Valkyrie", ""}
{
}

void BoonBringerValkyrie::execute(Engine& engine)
{
}

void BoonBringerValkyrie::initImpl()
{
    mana_cost_.setWhiteCost(2);
    mana_cost_.setGenericCost(3);
}
