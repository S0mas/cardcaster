#pragma once
#include "../Card.hpp"
#include <string>

class Karakas : public Card
{
public:
    Karakas();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
