#pragma once
#include "../Card.hpp"
#include <string>

class SwordsToPlowshares : public Card
{
public:
    SwordsToPlowshares();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
