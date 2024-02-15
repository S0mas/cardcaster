#pragma once
#include "../Card.hpp"
#include <string>

class GiverOfRunes : public Card
{
public:
    GiverOfRunes();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
