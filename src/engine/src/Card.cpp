#include "Card.hpp"

Card::Card()
{

}

Card::Card(std::string&& name, std::string&& description)
    : name_{std::move(name)}
    , description_{std::move(description)}
{
}

Card::~Card() {}

std::vector<Color> Card::colors() const
{
    return colors_;
}

void Card::init()
{
    initImpl();
    colors_ = mana_cost_.color();
}

void Card::reset()
{
    init();
}

const ManaCost& Card::manaCost() const
{
    return mana_cost_;
}

Trigger Card::resolveTriggerReplacementEffects(const Trigger& trigger, Engine& engine)
{
    return trigger_replacement_effects_(trigger, engine);
}

void Card::resolveTriggeredAbbilities(const Trigger& trigger, Engine& engine)
{
    triggered_abilities_(trigger, engine);
}
