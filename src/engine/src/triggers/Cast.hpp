#pragma once

#include "TriggerData.hpp"

class Card;

class Cast : public TriggerData
{
public:
    Cast(const Card& card);

private:
    const Card& card_;
};
