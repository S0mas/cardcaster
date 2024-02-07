#include "AncestralRecall.hpp"
#include "../include/Engine.hpp"

AncestralRecall::AncestralRecall() : Card{"Ancestrall Recall", "Target player draws 3 cards"}
{
}

void AncestralRecall::execute(Engine& engine)
{
    auto& player = engine.requestToTargetAPlayer();
    engine.requestToDraw(player, 3);
}

void AncestralRecall::initImpl()
{
    mana_cost_.setBlueCost(1);
}
