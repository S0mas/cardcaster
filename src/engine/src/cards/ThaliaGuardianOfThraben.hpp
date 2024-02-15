#pragma once
#include "../Card.hpp"
#include <string>

class ThaliaGuardianOfThraben : public Card
{
public:
    ThaliaGuardianOfThraben();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
