#pragma once

#include "Trigger.hpp"

class Card;

class EntersTheBattlefield : public Trigger
{
public:
    EntersTheBattlefield(const Card& card);

private:
    const Card& card_;
};
