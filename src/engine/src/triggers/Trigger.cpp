#include "Trigger.hpp"

TriggerData::Type Trigger::type() const
{
    return data_->type();
}
