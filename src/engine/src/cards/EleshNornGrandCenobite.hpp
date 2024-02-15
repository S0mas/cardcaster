#pragma once
#include "../Card.hpp"
#include <string>

class EleshNornGrandCenobite : public Card
{
public:
    EleshNornGrandCenobite();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
