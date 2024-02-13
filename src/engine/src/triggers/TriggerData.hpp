#pragma once

#include <memory>

class TriggerData
{
public:
    enum class Type
    {
        Cast = 0,
        EntersTheBattlefield,
        LeavesTheBattlefield,
        EntersTheGraveyard,
        LeavesTheGraveyard,
        Draw,
        CreateToken
    };

    TriggerData(const Type type);
    virtual ~TriggerData() = default;
    //virtual std::unique_ptr<TriggerData> copy() = 0;
    Type type() const;
private:
    Type type_;
};
