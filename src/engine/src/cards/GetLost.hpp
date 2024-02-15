#pragma once
#include "../Card.hpp"
#include <string>

class GetLost : public Card
{
public:
    GetLost();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
