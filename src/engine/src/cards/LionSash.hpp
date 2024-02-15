#pragma once
#include "../Card.hpp"
#include <string>

class LionSash : public Card
{
public:
    LionSash();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
