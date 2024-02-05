#pragma once

#include "../src/Card.hpp"
#include "../src/Player.hpp"
#include "../src/turn/Turn.hpp"

#include <vector>

class Engine
{
public:
    Engine();

    Player& requestToTargetAPlayer(Player& playerToMakeAChoice);
    Player& requestToTargetAPlayer();
    void requestToDraw(Player& player, int count);

    Player& activePlayer();

    void resolveAction();

    void proceed();

private:
    std::vector<Player> players_;
    std::vector<std::unique_ptr<Card>> cards_;
    Turn turn_;
};
