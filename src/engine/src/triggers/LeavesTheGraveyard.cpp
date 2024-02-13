#include "LeavesTheGraveyard.hpp"

LeavesTheGraveyard::LeavesTheGraveyard(const Card& card)
    : TriggerData(TriggerData::Type::LeavesTheGraveyard)
    , card_{card}
{
}


