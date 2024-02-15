#pragma once
#include "../Card.hpp"
#include <string>

class Armageddon : public Card
{
public:
    Armageddon();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
