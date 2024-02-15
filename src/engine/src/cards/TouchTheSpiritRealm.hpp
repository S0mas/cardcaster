#pragma once
#include "../Card.hpp"
#include <string>

class TouchTheSpiritRealm : public Card
{
public:
    TouchTheSpiritRealm();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
