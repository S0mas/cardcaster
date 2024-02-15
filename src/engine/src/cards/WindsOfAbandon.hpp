#pragma once
#include "../Card.hpp"
#include <string>

class WindsOfAbandon : public Card
{
public:
    WindsOfAbandon();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
