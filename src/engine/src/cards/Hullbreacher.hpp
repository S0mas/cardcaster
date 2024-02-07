#pragma once
#include "../Card.hpp"
#include <string>

class Hullbreacher : public Card
{
public:
    Hullbreacher();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
