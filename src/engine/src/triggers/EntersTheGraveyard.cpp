#include "EntersTheGraveyard.hpp"

EntersTheGraveyard::EntersTheGraveyard(const Card& card)
    : Trigger(Trigger::Type::EntersTheGraveyard)
    , card_{card}
{
}


