#include "AncestralRecall.hpp"
#include "../include/Engine.hpp"

AncestralRecall::AncestralRecall() : Card{"Ancestrall Recall", "Target player draws 3 cards"}
{
    mana_cost_.setBlueCost(1);
}

void AncestralRecall::execute(Engine& engine)
{
    auto& player = engine.requestToTargetAPlayer();
    engine.requestToDraw(player, 3);
}
