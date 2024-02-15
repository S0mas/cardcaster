#pragma once
#include "../Card.hpp"
#include <string>

class TheWanderingEmperor : public Card
{
public:
    TheWanderingEmperor();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
