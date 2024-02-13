#include "Draw.hpp"
#include "../include/Engine.hpp"
#include "../triggers/DrawTrigger.hpp"

Draw::Draw(const Player& player)
    : TurnBasedAction()
    , player_{player}
{

}

void Draw::impl(Engine& engine)
{

}


std::vector<Trigger> Draw::createTriggers() const
{
    return {Trigger::createTrigger<DrawTriggerData>(player_, true)};
}
