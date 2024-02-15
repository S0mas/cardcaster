#pragma once
#include "../Card.hpp"
#include <string>

class UsherOfTheFallen : public Card
{
public:
    UsherOfTheFallen();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
