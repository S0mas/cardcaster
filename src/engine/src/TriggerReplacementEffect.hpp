#pragma

#include "triggers/Trigger.hpp"

#include <functional>
#include <vector>

class Engine;

class TriggerReplacementEffect final
{
public:
    using TriggerReplacementEffectCallback = std::function<Trigger(const Trigger&, Engine&)>;

public:
    TriggerReplacementEffect(TriggerData::Type trigger_type, TriggerReplacementEffectCallback&& ability);
    TriggerReplacementEffect(std::vector<TriggerData::Type>&& trigger_types, TriggerReplacementEffectCallback&& ability);

    Trigger operator()(const Trigger&, Engine& engine) const;

private:
    bool testTrigger(TriggerData::Type trigger) const;

private:
    std::vector<TriggerData::Type> trigger_types_;
    TriggerReplacementEffectCallback replacement_effect_;
};


class TriggerReplacementEffects final
{
public:
    Trigger operator()(const Trigger&, Engine& engine) const;

    void addEffect(TriggerReplacementEffect&& effect);
private:
    std::vector<TriggerReplacementEffect> replacement_effects_;
};
