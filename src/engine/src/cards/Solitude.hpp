#pragma once
#include "../Card.hpp"
#include <string>

class Solitude : public Card
{
public:
    Solitude();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
