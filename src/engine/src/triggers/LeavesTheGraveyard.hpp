#pragma once

#include "TriggerData.hpp"

class Card;

class LeavesTheGraveyard : public TriggerData
{
public:
    LeavesTheGraveyard(const Card& card);

private:
    const Card& card_;
};
