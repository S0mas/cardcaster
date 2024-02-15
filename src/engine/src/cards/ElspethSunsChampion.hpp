#pragma once
#include "../Card.hpp"
#include <string>

class ElspethSunsChampion : public Card
{
public:
    ElspethSunsChampion();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
