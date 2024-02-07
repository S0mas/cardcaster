#pragma once

#include "Trigger.hpp"

class Card;

class LeavesTheGraveyard : public Trigger
{
public:
    LeavesTheGraveyard(const Card& card);

private:
    const Card& card_;
};
