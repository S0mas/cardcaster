#pragma once

#include "TriggerData.hpp"

class Card;

class LeavesTheBattlefield : public TriggerData
{
public:
    LeavesTheBattlefield(const Card& card);

private:
    const Card& card_;
};
