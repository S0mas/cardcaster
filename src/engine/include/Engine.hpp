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


    bool requestToPayCost(const ManaCost& cost) { return true; }
    void cancelCast() {}

    void handleTrigger(const Trigger& trigger);

    /////
    /// \brief Operations on cards
    ///
    ///

    void cast(Card& card);
    void entersTheBattlefield(Card& card);
    void putIntoTheGraveyard(Card& card);
    void leavesTheBattlefield(Card& card);
    void leavesTheGraveyard(Card& card);

    /////

private:
    std::vector<Player> players_;
    std::vector<std::unique_ptr<Card>> cards_;
    Turn turn_;
};
