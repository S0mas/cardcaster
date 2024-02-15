#pragma once
#include "../Card.hpp"
#include <string>

class PathToExile : public Card
{
public:
    PathToExile();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
