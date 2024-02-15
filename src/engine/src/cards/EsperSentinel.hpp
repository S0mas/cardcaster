#pragma once
#include "../Card.hpp"
#include <string>

class EsperSentinel : public Card
{
public:
    EsperSentinel();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
