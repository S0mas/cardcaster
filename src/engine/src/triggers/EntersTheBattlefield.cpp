#include "EntersTheBattlefield.hpp"

EntersTheBattlefield::EntersTheBattlefield(const Card& card)
    : TriggerData(TriggerData::Type::EntersTheBattlefield)
    , card_{card}
{
}


