#pragma once
#include "../Card.hpp"
#include <string>

class SerraParagon : public Card
{
public:
    SerraParagon();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
