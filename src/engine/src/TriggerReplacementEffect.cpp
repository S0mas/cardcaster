#include "TriggerReplacementEffect.hpp"

TriggerReplacementEffect::TriggerReplacementEffect(TriggerData::Type trigger_type, TriggerReplacementEffectCallback&& effect)
    : trigger_types_{trigger_type}
    , replacement_effect_{std::move(effect)}
{
}

TriggerReplacementEffect::TriggerReplacementEffect(std::vector<TriggerData::Type>&& trigger_types, TriggerReplacementEffectCallback&& effect)
    : trigger_types_{std::move(trigger_types)}
    , replacement_effect_(std::move(effect))
{
}

Trigger TriggerReplacementEffect::operator()(const Trigger& trigger, Engine& engine) const
{
    if(testTrigger(trigger.type()))
    {
        return replacement_effect_(trigger, engine);
    }
    return trigger;
}

bool TriggerReplacementEffect::testTrigger(const TriggerData::Type trigger_type) const
{
    return std::ranges::find(trigger_types_, trigger_type) != trigger_types_.cend();
}

////
/// \brief TriggerReplacementEffects
///

Trigger TriggerReplacementEffects::operator()(const Trigger& trigger, Engine& engine) const
{
    auto replacedTrigger = trigger;
    for(auto const& replacement_effect : replacement_effects_)
    {
        replacedTrigger = replacement_effect(replacedTrigger, engine);
    }
    return replacedTrigger;
}

void TriggerReplacementEffects::addEffect(TriggerReplacementEffect&& effect)
{
    replacement_effects_.push_back(std::move(effect));
}

////
