#pragma once
#include "../Card.hpp"
#include <string>

class IntrepidAdversary : public Card
{
public:
    IntrepidAdversary();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
