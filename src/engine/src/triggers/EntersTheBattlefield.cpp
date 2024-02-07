#include "EntersTheBattlefield.hpp"

EntersTheBattlefield::EntersTheBattlefield(const Card& card)
    : Trigger(Trigger::Type::EntersTheBattlefield)
    , card_{card}
{
}


