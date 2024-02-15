#pragma once
#include "../Card.hpp"
#include <string>

class MotherOfRunes : public Card
{
public:
    MotherOfRunes();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
