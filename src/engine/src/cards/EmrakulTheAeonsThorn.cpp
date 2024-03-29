#include "EmrakulTheAeonsThorn.hpp"
#include "../include/Engine.hpp"
#include "../triggers/Cast.hpp"

EmrakulTheAeonsThorn::EmrakulTheAeonsThorn() : Card{"EmrakulTheAeonsThorn", ""}
{

}

void EmrakulTheAeonsThorn::execute(Engine& engine)
{

}

void EmrakulTheAeonsThorn::initImpl()
{
    mana_cost_.setBlueCost(1);
    mana_cost_.setGenericCost(2);

    triggered_abilities_.addAbility({TriggerData::Type::Cast, [](Engine&){/*take another turn*/}});
}
