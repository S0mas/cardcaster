#include "EntersTheGraveyard.hpp"

EntersTheGraveyard::EntersTheGraveyard(const Card& card)
    : TriggerData(TriggerData::Type::EntersTheGraveyard)
    , card_{card}
{
}


