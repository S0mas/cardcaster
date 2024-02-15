#pragma once
#include "../Card.hpp"
#include <string>

class SeasonedDungeoneer : public Card
{
public:
    SeasonedDungeoneer();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
