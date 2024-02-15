#pragma once
#include "../Card.hpp"
#include <string>

class GideonAllyOfZendikar : public Card
{
public:
    GideonAllyOfZendikar();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
