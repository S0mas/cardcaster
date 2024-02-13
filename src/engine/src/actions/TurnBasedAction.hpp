#pragma once

#include "../Action.hpp"

class TurnBasedAction : public Action
{
public:
    TurnBasedAction();

    void impl(Engine& engine) override;



    int player_;
};
