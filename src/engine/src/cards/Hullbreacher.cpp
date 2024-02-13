#include "Hullbreacher.hpp"
#include "../include/Engine.hpp"
#include "../triggers/CreateToken.hpp"
#include "../triggers/DrawTrigger.hpp"

Hullbreacher::Hullbreacher() : Card{"Hullbreacher", ""}
{
}

void Hullbreacher::execute(Engine& engine)
{

}

void Hullbreacher::initImpl()
{
    mana_cost_.setBlueCost(1);
    mana_cost_.setGenericCost(2);


    TriggerReplacementEffect::TriggerReplacementEffectCallback effect = [this](const Trigger& trigger, Engine& engine) -> Trigger
    {
        const auto& draw_trigger_data = trigger.data<DrawTriggerData>();
        const auto is_not_first_from_draw_step = !(draw_trigger_data.isFromDrawStep() && draw_trigger_data.whoToDraw().cardDrawnThisDrawStep() == 0);

        if(draw_trigger_data.whoToDraw().isOpponent(*controller_) && is_not_first_from_draw_step)
        {
            return Trigger::createTrigger<CreateToken>(*controller_, TokenType::TreasureToken);
        }
        return trigger;
    };

    trigger_replacement_effects_.addEffect({TriggerData::Type::Draw, std::move(effect)});
}
