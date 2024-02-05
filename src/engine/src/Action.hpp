#pragma once

#include <functional>
#include <string>
#include <vector>

class Engine;

class Action
{
public:
    Action();
    virtual ~Action() = default;

    void execute(Engine& engine);

private:
    virtual void impl(Engine& engine) = 0;

    std::vector<std::function<void()>> beforeActrionTriggers_;
    std::vector<std::function<void()>> insteadOfActrionTriggers_;
    std::vector<std::function<void()>> afterActrionTriggers_;


    int source_;
};
