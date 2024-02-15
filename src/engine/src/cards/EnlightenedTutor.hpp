#pragma once
#include "../Card.hpp"
#include <string>

class EnlightenedTutor : public Card
{
public:
    EnlightenedTutor();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
