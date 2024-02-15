#pragma once
#include "../Card.hpp"
#include <string>

class ThrabenInspector : public Card
{
public:
    ThrabenInspector();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
