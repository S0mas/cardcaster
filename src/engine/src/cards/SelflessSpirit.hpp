#pragma once
#include "../Card.hpp"
#include <string>

class SelflessSpirit : public Card
{
public:
    SelflessSpirit();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
