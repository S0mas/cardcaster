#pragma once
#include "../Card.hpp"
#include <string>

class LuminarchAspirant : public Card
{
public:
    LuminarchAspirant();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
