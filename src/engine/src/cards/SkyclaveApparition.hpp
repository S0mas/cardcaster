#pragma once
#include "../Card.hpp"
#include <string>

class SkyclaveApparition : public Card
{
public:
    SkyclaveApparition();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
