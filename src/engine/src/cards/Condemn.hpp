#pragma once
#include "../Card.hpp"
#include <string>

class Condemn : public Card
{
public:
    Condemn();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
