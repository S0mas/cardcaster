#pragma once
#include "../Card.hpp"
#include <string>

class ContainmentPriest : public Card
{
public:
    ContainmentPriest();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
