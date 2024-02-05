#pragma once

#include "Player.hpp"

#include <iostream>

Player::Player() {}

void Player::draw(const int count)
{
    std::cout << __func__ << std::endl;

    for (int i = 0; i < count; ++i)
    {
        if(library_.empty())
        {
            //signalDrawFromEmptyLib
            return;
        }
        hand_.push_back(std::move(library_.back()));
        library_.pop_back();
    }
}

