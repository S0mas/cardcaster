#pragma once
#include "../Card.hpp"
#include <string>

class MoxPearl : public Card
{
public:
    MoxPearl();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
