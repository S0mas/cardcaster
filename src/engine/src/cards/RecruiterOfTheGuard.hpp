#pragma once
#include "../Card.hpp"
#include <string>

class RecruiterOfTheGuard : public Card
{
public:
    RecruiterOfTheGuard();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
