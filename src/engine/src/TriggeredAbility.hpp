#pragma

#include "triggers/Trigger.hpp"

#include <functional>
#include <vector>

class Engine;

class TriggeredAbility final
{
public:
    TriggeredAbility(TriggerData::Type trigger_type, std::function<void(Engine&)>&& ability);
    TriggeredAbility(std::vector<TriggerData::Type>&& trigger_types, std::function<void(Engine&)>&& ability);

    void operator()(const Trigger&, Engine& engine) const;

private:
    bool testTrigger(TriggerData::Type trigger_type) const;

private:
    std::vector<TriggerData::Type> trigger_types_;
    std::function<void(Engine&)> ability_;
};


class TriggeredAbilities final
{
public:
    void operator()(const Trigger&, Engine& engine) const;

    void addAbility(TriggeredAbility&& ability);
private:
    std::vector<TriggeredAbility> abilities_;
};
