#pragma once
#include "../Card.hpp"
#include <string>

class AdelineResplendentCathar : public Card
{
public:
    AdelineResplendentCathar();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
