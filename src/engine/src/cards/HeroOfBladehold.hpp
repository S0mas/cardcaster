#pragma once
#include "../Card.hpp"
#include <string>

class HeroOfBladehold : public Card
{
public:
    HeroOfBladehold();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
