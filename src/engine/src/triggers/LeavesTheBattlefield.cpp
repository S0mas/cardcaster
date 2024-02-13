#include "LeavesTheBattlefield.hpp"

LeavesTheBattlefield::LeavesTheBattlefield(const Card& card)
    : TriggerData(TriggerData::Type::LeavesTheBattlefield)
    , card_{card}
{
}


