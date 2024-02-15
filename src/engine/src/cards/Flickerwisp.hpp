#pragma once
#include "../Card.hpp"
#include <string>

class Flickerwisp : public Card
{
public:
    Flickerwisp();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
