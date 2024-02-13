#pragma once

#include "TriggerData.hpp"

class Player;

class DrawTriggerData : public TriggerData
{
public:
    DrawTriggerData(const Player& player, bool is_from_draw_step = false);

    const Player& whoToDraw() const;
    bool isFromDrawStep() const;

private:
    const Player& who_to_draw_;
    bool is_from_draw_step_{false};
};
