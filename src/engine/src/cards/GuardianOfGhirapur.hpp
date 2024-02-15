#pragma once
#include "../Card.hpp"
#include <string>

class GuardianOfGhirapur : public Card
{
public:
    GuardianOfGhirapur();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
