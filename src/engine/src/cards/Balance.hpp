#pragma once
#include "../Card.hpp"
#include <string>

class Balance : public Card
{
public:
    Balance();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
