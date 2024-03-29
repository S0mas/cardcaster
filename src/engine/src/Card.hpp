#pragma once
#include "ManaCost.hpp"
#include "TriggeredAbility.hpp"
#include "TriggerReplacementEffect.hpp"

#include <functional>
#include <optional>
#include <string>

class Engine;
class Player;

class Card
{
public:
    Card();
    virtual ~Card();
    Card(std::string&& name, std::string&& description);

    std::vector<Color> colors() const;

    void init();
    void reset();
    const ManaCost& manaCost() const;

    Trigger resolveTriggerReplacementEffects(const Trigger& trigger, Engine& engine);
    void resolveTriggeredAbbilities(const Trigger& trigger, Engine& engine);

    virtual void execute(Engine& engine) = 0;

    virtual void initImpl() = 0;

    //dbg
    void setController(const Player& player)
    {
        controller_ = player;
    }

protected:
    std::string name_;
    std::string description_;
    std::string image_source_;
    std::vector<Color> colors_;
    ManaCost mana_cost_;
    TriggerReplacementEffects trigger_replacement_effects_;
    TriggeredAbilities triggered_abilities_;
    std::optional<std::reference_wrapper<const Player>> controller_;
    std::optional<std::reference_wrapper<const Player>> owner_;
};
