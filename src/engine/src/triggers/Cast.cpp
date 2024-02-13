#include "Cast.hpp"

Cast::Cast(const Card& card)
    : TriggerData(TriggerData::Type::Cast)
    , card_{card}
{
}


