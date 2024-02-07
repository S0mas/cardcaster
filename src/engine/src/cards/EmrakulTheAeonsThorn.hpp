#pragma once
#include "../Card.hpp"
#include <string>

class EmrakulTheAeonsThorn : public Card
{
public:
    EmrakulTheAeonsThorn();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
