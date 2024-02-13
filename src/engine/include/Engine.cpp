#pragma once

#include "engine.hpp"
#include "../src/cards/AncestralRecall.hpp"
#include "../src/cards/EmrakulTheAeonsThorn.hpp"
#include "../src/cards/Hullbreacher.hpp"
#include "../src/triggers/Cast.hpp"
#include "../src/triggers/EntersTheBattlefield.hpp"
#include "../src/triggers/EntersTheGraveyard.hpp"
#include "../src/triggers/LeavesTheBattlefield.hpp"
#include "../src/triggers/LeavesTheGraveyard.hpp"
#include "../src/actions/Draw.hpp"
#include <iostream>
#include <memory>

Engine::Engine()
{
    players_.push_back({"P1"});
    players_.push_back({"P2"});

    cards_.push_back(std::make_unique<AncestralRecall>());
    cards_.push_back(std::make_unique<EmrakulTheAeonsThorn>());
    cards_.push_back(std::make_unique<Hullbreacher>());

    for(const auto& card : cards_)
    {
        card->initImpl();
    }

    cards_.back()->setController(players_.at(1));

    resolveDrawStep();
}

Player& Engine::requestToTargetAPlayer(Player& playerToMakeAChoice)
{
    // makeAChoice
    // signal playerBecomesTarget

    return players_.at(0);
}

Player& Engine::requestToTargetAPlayer()
{
    return requestToTargetAPlayer(activePlayer());
}

void Engine::requestToDraw(Player& player, int count)
{
    std::cout << __func__ << std::endl;

    for (int i = 0; i < count; ++i)
    {
//        if(library_.empty())
//        {
//            //signalDrawFromEmptyLib
//            return;
//        }
//        hand_.push_back(std::move(library_.back()));
//        library_.pop_back();
    }
}

//void Engine::draw(Player& player, int count)
//{
//    std::cout << __func__ << std::endl;

////    if(isDrawAllowed())
////    {

////    }

//    for (int i = 0; i < count; ++i)
//    {
////        if(library_.empty())
////        {
////            //signalDrawFromEmptyLib
////            return;
////        }
////        hand_.push_back(std::move(library_.back()));
////        library_.pop_back();
//    }
//}

Player& Engine::activePlayer()
{
    return players_.at(0);
}

void Engine::proceed()
{

}

void Engine::resolveTrigger(const Trigger& trigger)
{
    Trigger replacedTrigger(trigger);
    for(const auto& card : cards_)
    {
        replacedTrigger = card->resolveTriggerReplacementEffects(trigger, *this);
    }
    for(const auto& card : cards_)
    {
        card->resolveTriggeredAbbilities(replacedTrigger, *this);
    }
}

void Engine::pushTriggerToStack(const Trigger& trigger)
{
    triggers_stack_.push(trigger);
}

void Engine::pushTriggersToStack(const std::vector<Trigger>& triggers)
{
    for(const auto& trigger : triggers)
    {
        pushTriggerToStack(trigger);
    }
}

bool Engine::isDrawStepNow() const
{
    return true;
}

void Engine::resolveAction(const Action& action)
{
    if(action.isUsingStack())
    {
        pushTriggersToStack(action.createTriggers());
    }
    else
    {
        for(const auto& trigger : action.createTriggers())
        {
            resolveTrigger(trigger);
        }
    }
}

void Engine::resolveDrawStep()
{
    Draw draw_step_action(activePlayer());
    resolveAction(draw_step_action);
}

/////
/// \brief Operations on cards
///
///

void Engine::cast(Card& card)
{
    if(requestToPayCost(card.manaCost()))
    {
        card.resolveTriggeredAbbilities(Trigger::createTrigger<Cast>(card), *this);
    }
    else
    {
        cancelCast();
    }
}

void Engine::entersTheBattlefield(Card& card)
{
    card.resolveTriggeredAbbilities(Trigger::createTrigger<EntersTheBattlefield>(card), *this);
}

void Engine::entersTheGraveyard(Card& card)
{
    card.resolveTriggeredAbbilities(Trigger::createTrigger<EntersTheGraveyard>(card), *this);
}

void Engine::leavesTheBattlefield(Card& card)
{
    card.resolveTriggeredAbbilities(Trigger::createTrigger<LeavesTheBattlefield>(card), *this);
}

void Engine::leavesTheGraveyard(Card& card)
{
    card.resolveTriggeredAbbilities(Trigger::createTrigger<LeavesTheGraveyard>(card), *this);
}

/////
