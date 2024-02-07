#pragma once
#include "../Card.hpp"
#include <string>

class AncestralRecall : public Card
{
public:
    AncestralRecall();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
