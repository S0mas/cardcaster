#pragma once
#include "../Card.hpp"
#include <string>

class BladeSplicer : public Card
{
public:
    BladeSplicer();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
