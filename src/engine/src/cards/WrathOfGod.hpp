#pragma once
#include "../Card.hpp"
#include <string>

class WrathOfGod : public Card
{
public:
    WrathOfGod();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
