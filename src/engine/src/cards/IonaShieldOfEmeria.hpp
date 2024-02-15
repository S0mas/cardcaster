#pragma once
#include "../Card.hpp"
#include <string>

class IonaShieldOfEmeria : public Card
{
public:
    IonaShieldOfEmeria();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
