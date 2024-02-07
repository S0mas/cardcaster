#include "Cast.hpp"

Cast::Cast(const Card& card)
    : Trigger(Trigger::Type::Cast)
    , card_{card}
{
}


