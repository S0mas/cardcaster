#include "AdelineResplendentCathar.hpp"
#include "../include/Engine.hpp"

AdelineResplendentCathar::AdelineResplendentCathar() : Card{"Adeline, Resplendent Cathar", ""}
{
}

void AdelineResplendentCathar::execute(Engine& engine)
{
}

void AdelineResplendentCathar::initImpl()
{
    mana_cost_.setWhiteCost(2);
    mana_cost_.setGenericCost(1);
}
