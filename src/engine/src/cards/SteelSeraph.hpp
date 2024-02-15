#pragma once
#include "../Card.hpp"
#include <string>

class SteelSeraph : public Card
{
public:
    SteelSeraph();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
