#pragma once
#include "../Card.hpp"
#include <string>

class StoneforgeMystic : public Card
{
public:
    StoneforgeMystic();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
