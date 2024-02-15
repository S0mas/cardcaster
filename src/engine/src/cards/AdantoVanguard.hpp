#pragma once
#include "../Card.hpp"
#include <string>

class AdantoVanguard : public Card
{
public:
    AdantoVanguard();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
