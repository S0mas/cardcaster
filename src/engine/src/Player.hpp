#pragma once

#include "Card.hpp"

#include <memory>
#include <string>
#include <vector>

class Player
{
public:
    Player();

    void draw(int count);

private:
    std::string name_;

    //std::vector<Action> actions_;

    std::vector<std::unique_ptr<Card>> graveyard_;
    std::vector<std::unique_ptr<Card>> hand_;
    std::vector<std::unique_ptr<Card>> exile_;
    std::vector<std::unique_ptr<Card>> library_;
};
