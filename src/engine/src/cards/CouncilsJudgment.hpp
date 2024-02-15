#pragma once
#include "../Card.hpp"
#include <string>

class CouncilsJudgment : public Card
{
public:
    CouncilsJudgment();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
