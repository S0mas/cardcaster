#pragma once
#include "../Card.hpp"
#include <string>

class PrismaticEnding : public Card
{
public:
    PrismaticEnding();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
