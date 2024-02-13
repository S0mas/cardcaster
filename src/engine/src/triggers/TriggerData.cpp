#include "TriggerData.hpp"


TriggerData::TriggerData(const Type type)
    : type_{type}
{
}

TriggerData::Type TriggerData::type() const
{
    return type_;
}
