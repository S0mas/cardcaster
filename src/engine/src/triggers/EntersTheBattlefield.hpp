#pragma once

#include "TriggerData.hpp"

class Card;

class EntersTheBattlefield : public TriggerData
{
public:
    EntersTheBattlefield(const Card& card);

private:
    const Card& card_;
};
