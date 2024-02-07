#include "TriggeredAbility.hpp"

TriggeredAbility::TriggeredAbility(Trigger&& trigger, std::function<void(Engine&)>&& ability)
    : triggers_{trigger}
    , ability_(std::move(ability)) {}

TriggeredAbility::TriggeredAbility(std::vector<Trigger>&& triggers, std::function<void(Engine&)>&& ability)
    : triggers_{triggers}
    , ability_(std::move(ability)) {}

TriggeredAbility::TriggeredAbility(Trigger::Type trigger, std::function<void(Engine&)>&& ability)
    : TriggeredAbility(Trigger::fromTriggerType(trigger), std::move(ability)) {}


void TriggeredAbility::operator()(const Trigger& trigger, Engine& engine) const
{
    if(testTrigger(trigger))
    {
        ability_(engine);
    }
}

bool TriggeredAbility::testTrigger(const Trigger& trigger) const
{
    return std::ranges::find(triggers_, trigger) != triggers_.cend();
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

void TriggeredAbilities::add_ability(TriggeredAbility&& ability)
{
    abilities_.push_back(std::move(ability));
}

////
