#include "DrawTrigger.hpp"

DrawTriggerData::DrawTriggerData(const Player& player, const bool is_from_draw_step)
    : TriggerData(TriggerData::Type::Draw)
    , who_to_draw_{player}
    , is_from_draw_step_{is_from_draw_step}
{
}

const Player& DrawTriggerData::whoToDraw() const
{
    return who_to_draw_;
}


bool DrawTriggerData::isFromDrawStep() const
{
    return is_from_draw_step_;
}
