#pragma once

#include "Trigger.hpp"

class Card;

class Cast : public Trigger
{
public:
    Cast(const Card& card);

private:
    const Card& card_;
};
