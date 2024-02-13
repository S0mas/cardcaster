#pragma once

#include "../src/Card.hpp"
#include "../src/Player.hpp"
#include "../src/turn/Turn.hpp"

#include <stack>
#include <vector>

class Action;

class Engine
{
public:
    Engine();

    Player& requestToTargetAPlayer(Player& playerToMakeAChoice);
    Player& requestToTargetAPlayer();
    void requestToDraw(Player& player, int count);
    void requestToPassPriority();

    Player& activePlayer();

    void proceed();


    bool requestToPayCost(const ManaCost& cost) { return true; }
    void cancelCast() {}

    void resolveTrigger(const Trigger& trigger);
    void pushTriggerToStack(const Trigger& trigger);
    void pushTriggersToStack(const std::vector<Trigger>& triggers);

    bool isDrawStepNow() const;
    void resolveAction(const Action& action);
    void resolveDrawStep();

    /////
    /// \brief Operations on cards
    ///
    ///

    void cast(Card& card);
    void entersTheBattlefield(Card& card);
    void entersTheGraveyard(Card& card);
    void leavesTheBattlefield(Card& card);
    void leavesTheGraveyard(Card& card);

    /////

private:
    std::stack<Trigger> triggers_stack_;
    std::vector<Player> players_;
    std::vector<std::unique_ptr<Card>> cards_;
    Turn turn_;
};
