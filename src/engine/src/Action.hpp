#pragma once

#include "triggers/Trigger.hpp"

#include <functional>
#include <string>
#include <vector>

class Engine;

class Action
{
public:
    Action(bool is_using_stack = true);
    virtual ~Action() = default;

    void execute(Engine& engine);

    bool isUsingStack() const;
    virtual std::vector<Trigger> createTriggers() const = 0;
private:
    virtual void impl(Engine& engine) = 0;

    bool is_using_stack_;
    int source_;
};
