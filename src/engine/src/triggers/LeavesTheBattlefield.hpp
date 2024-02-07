#pragma once

#include "Trigger.hpp"

class Card;

class LeavesTheBattlefield : public Trigger
{
public:
    LeavesTheBattlefield(const Card& card);

private:
    const Card& card_;
};
