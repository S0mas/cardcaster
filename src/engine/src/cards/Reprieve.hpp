#pragma once
#include "../Card.hpp"
#include <string>

class Reprieve : public Card
{
public:
    Reprieve();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
