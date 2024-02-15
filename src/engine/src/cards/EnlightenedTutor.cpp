#include "EnlightenedTutor.hpp"
#include "../include/Engine.hpp"

EnlightenedTutor::EnlightenedTutor() : Card{"Enlightened Tutor", ""}
{
}

void EnlightenedTutor::execute(Engine& engine)
{
}

void EnlightenedTutor::initImpl()
{
    mana_cost_.setWhiteCost(1);
}
