#pragma once
#include "../Card.hpp"
#include <string>

class GlimmerLens : public Card
{
public:
    GlimmerLens();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
