#pragma once
#include "../Card.hpp"
#include <string>

class ElspethKnightErrant : public Card
{
public:
    ElspethKnightErrant();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
