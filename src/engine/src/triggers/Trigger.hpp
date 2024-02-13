#pragma once
#include "TriggerData.hpp"

#include <memory>

class Trigger final
{
public:
    template<typename TriggerDataType, typename... Args>
    static Trigger createTrigger(Args&& ...args);
    template<typename TriggerDataType>
    TriggerDataType data() const;
    TriggerData::Type type() const;
private:
    Trigger() = default;

private:
    std::shared_ptr<TriggerData> data_;
};

template<typename TriggerDataType, typename... Args>
Trigger Trigger::createTrigger(Args&& ...args)
{
    Trigger t;
    t.data_ = std::make_shared<TriggerDataType>(std::move(args)...);
    return t;
}

template<typename TriggerDataType>
TriggerDataType Trigger::data() const
{
    auto data = data_.get();
    return dynamic_cast<const TriggerDataType&>(*data);
}
