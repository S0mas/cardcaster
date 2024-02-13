#pragma once

#include "TriggerData.hpp"

class Card;

class EntersTheGraveyard : public TriggerData
{
public:
    EntersTheGraveyard(const Card& card);

private:
    const Card& card_;
};
