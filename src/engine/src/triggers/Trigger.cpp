#include "Trigger.hpp"


Trigger Trigger::fromTriggerType(Type type)
{
    return {type};
}

Trigger::Trigger(const Type type)
    : type_{type}
{
}

Trigger::Type Trigger::type() const
{
    return type_;
}
