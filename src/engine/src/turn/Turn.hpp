#pragma once
#include "phases/Phase.hpp"

#include <memory>
#include <vector>

class Turn
{
public:
    Turn();


private:
    std::vector<std::unique_ptr<Phase>> phases_;
};
