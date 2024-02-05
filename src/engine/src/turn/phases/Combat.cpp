#include "Combat.hpp"
#include "steps/BeginningOfCombatStep.hpp"
#include "steps/CombatDamageStep.hpp"
#include "steps/DeclareAttackersStep.hpp"
#include "steps/DeclareBlockersStep.hpp"
#include "steps/EndOfCombatStep.hpp"

Combat::Combat()
{
    steps_.push_back(std::make_unique<BeginningOfCombatStep>());
    steps_.push_back(std::make_unique<DeclareAttackersStep>());
    steps_.push_back(std::make_unique<DeclareBlockersStep>());
    steps_.push_back(std::make_unique<CombatDamageStep>());
    steps_.push_back(std::make_unique<EndOfCombatStep>());
}
