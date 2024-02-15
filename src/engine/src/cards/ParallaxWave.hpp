#pragma once
#include "../Card.hpp"
#include <string>

class ParallaxWave : public Card
{
public:
    ParallaxWave();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
