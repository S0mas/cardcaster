#pragma once
#include "../Card.hpp"
#include <string>

class WallOfOmens : public Card
{
public:
    WallOfOmens();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
