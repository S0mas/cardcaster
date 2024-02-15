#pragma once
#include "../Card.hpp"
#include <string>

class LeylineBinding : public Card
{
public:
    LeylineBinding();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
