#pragma once
#include "../Card.hpp"
#include <string>

class Oust : public Card
{
public:
    Oust();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
