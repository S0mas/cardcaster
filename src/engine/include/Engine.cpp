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

#include <iostream>
#include <memory>

Engine::Engine()
{
    players_.push_back({});
    players_.push_back({});

    cards_.push_back(std::make_unique<AncestralRecall>());
    cards_.push_back(std::make_unique<Hullbreacher>());
    cards_.push_back(std::make_unique<EmrakulTheAeonsThorn>());
    cards_.back()->execute(*this);
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

void Engine::handleTrigger(const Trigger& trigger)
{
    for(const auto& card : cards_)
    {
        card->resolveTrigger(trigger, *this);
    }
}

/////
/// \brief Operations on cards
///
///

void Engine::cast(Card& card)
{
    if(requestToPayCost(card.manaCost()))
    {
        card.resolveTrigger(Cast{card}, *this);
    }
    else
    {
        cancelCast();
    }
}

void Engine::entersTheBattlefield(Card& card)
{
    card.resolveTrigger(EntersTheBattlefield{card}, *this);
}

void Engine::entersTheGraveyard(Card& card)
{
    card.resolveTrigger(EntersTheGraveyard{card}, *this);
}

void Engine::leavesTheBattlefield(Card& card)
{
    card.resolveTrigger(LeavesTheBattlefield{card}, *this);
}

void Engine::leavesTheGraveyard(Card& card)
{
    card.resolveTrigger(LeavesTheGraveyard{card}, *this);
}

/////
