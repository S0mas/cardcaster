#pragma once
#include "../Card.hpp"
#include <string>

class LoranOfTheThirdPath : public Card
{
public:
    LoranOfTheThirdPath();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
