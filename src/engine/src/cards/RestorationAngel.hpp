#pragma once
#include "../Card.hpp"
#include <string>

class RestorationAngel : public Card
{
public:
    RestorationAngel();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
