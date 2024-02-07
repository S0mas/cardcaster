#pragma once

#include "Trigger.hpp"

class Player;

class DrawTrigger : public Trigger
{
public:
    DrawTrigger(const Player& player);

private:
    const Player& whoDrawn_;
};
