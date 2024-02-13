#include "TriggeredAbility.hpp"

TriggeredAbility::TriggeredAbility(TriggerData::Type trigger_type, std::function<void(Engine&)>&& ability)
    : trigger_types_{trigger_type}
    , ability_{std::move(ability)}
{
}

TriggeredAbility::TriggeredAbility(std::vector<TriggerData::Type>&& trigger_types, std::function<void(Engine&)>&& ability)
    : trigger_types_{std::move(trigger_types)}
    , ability_(std::move(ability))
{
}

void TriggeredAbility::operator()(const Trigger& trigger, Engine& engine) const
{
    if(testTrigger(trigger.type()))
    {
        ability_(engine);
    }
}

bool TriggeredAbility::testTrigger(const TriggerData::Type trigger_type) const
{
    return std::ranges::find(trigger_types_, trigger_type) != trigger_types_.cend();
}

////
/// \brief TriggeredAbilities
///

void TriggeredAbilities::operator()(const Trigger& trigger, Engine& engine) const
{
    for(auto const& ability : abilities_)
    {
        ability(trigger, engine);
    }
}

void TriggeredAbilities::addAbility(TriggeredAbility&& ability)
{
    abilities_.push_back(std::move(ability));
}

////
