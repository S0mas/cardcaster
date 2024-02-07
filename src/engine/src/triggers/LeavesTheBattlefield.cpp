#include "LeavesTheBattlefield.hpp"

LeavesTheBattlefield::LeavesTheBattlefield(const Card& card)
    : Trigger(Trigger::Type::LeavesTheBattlefield)
    , card_{card}
{
}


