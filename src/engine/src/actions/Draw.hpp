#pragma once

#include "TurnBasedAction.hpp"
#include "../triggers/Trigger.hpp"
#include "../Player.hpp"

class Draw : public TurnBasedAction
{
public:
    Draw(const Player& player);

    void impl(Engine& engine) override;

    std::vector<Trigger> createTriggers() const override;

    const Player& player_;
};
