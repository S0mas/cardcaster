#pragma once
#include "../Card.hpp"
#include <string>

class UnexpectedlyAbsent : public Card
{
public:
    UnexpectedlyAbsent();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
