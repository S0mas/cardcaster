#pragma once
#include "../Card.hpp"
#include <string>

class MarchOfOtherworldlyLight : public Card
{
public:
    MarchOfOtherworldlyLight();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
