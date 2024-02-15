#pragma once
#include "../Card.hpp"
#include <string>

class PalaceJailer : public Card
{
public:
    PalaceJailer();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
