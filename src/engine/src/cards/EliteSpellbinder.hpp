#pragma once
#include "../Card.hpp"
#include <string>

class EliteSpellbinder : public Card
{
public:
    EliteSpellbinder();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
