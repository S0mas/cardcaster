#pragma once
#include "../Card.hpp"
#include <string>

class Reveillark : public Card
{
public:
    Reveillark();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
