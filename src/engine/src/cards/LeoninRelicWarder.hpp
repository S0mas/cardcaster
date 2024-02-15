#pragma once
#include "../Card.hpp"
#include <string>

class LeoninRelicWarder : public Card
{
public:
    LeoninRelicWarder();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
