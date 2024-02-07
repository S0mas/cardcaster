#pragma once

#include "Trigger.hpp"

class Card;

class EntersTheGraveyard : public Trigger
{
public:
    EntersTheGraveyard(const Card& card);

private:
    const Card& card_;
};
