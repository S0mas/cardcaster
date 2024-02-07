#include "LeavesTheGraveyard.hpp"

LeavesTheGraveyard::LeavesTheGraveyard(const Card& card)
    : Trigger(Trigger::Type::LeavesTheGraveyard)
    , card_{card}
{
}


