#include "DrawTrigger.hpp"

DrawTrigger::DrawTrigger(const Player& player)
    : Trigger(Trigger::Type::Draw)
    , whoDrawn_{player}
{
}


