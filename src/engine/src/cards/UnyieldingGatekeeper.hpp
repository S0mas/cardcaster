#pragma once
#include "../Card.hpp"
#include <string>

class UnyieldingGatekeeper : public Card
{
public:
    UnyieldingGatekeeper();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
