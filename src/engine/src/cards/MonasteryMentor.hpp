#pragma once
#include "../Card.hpp"
#include <string>

class MonasteryMentor : public Card
{
public:
    MonasteryMentor();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
