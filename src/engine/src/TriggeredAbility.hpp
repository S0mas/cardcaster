#pragma

#include "triggers/Trigger.hpp"

#include <functional>
#include <vector>

class Engine;

class TriggeredAbility final
{
public:
    TriggeredAbility(Trigger&& trigger, std::function<void(Engine&)>&& ability);
    TriggeredAbility(std::vector<Trigger>&& triggers, std::function<void(Engine&)>&& ability);
    TriggeredAbility(Trigger::Type trigger, std::function<void(Engine&)>&& ability);
    void operator()(const Trigger&, Engine& engine) const;

private:
    bool testTrigger(const Trigger& trigger) const;

private:
    std::vector<Trigger> triggers_;
    std::function<void(Engine&)> ability_;
};


class TriggeredAbilities final
{
public:
    void operator()(const Trigger&, Engine& engine) const;

    void add_ability(TriggeredAbility&& ability);
private:
    std::vector<TriggeredAbility> abilities_;
};
