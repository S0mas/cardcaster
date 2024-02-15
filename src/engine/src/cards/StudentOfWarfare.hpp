#pragma once
#include "../Card.hpp"
#include <string>

class StudentOfWarfare : public Card
{
public:
    StudentOfWarfare();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
