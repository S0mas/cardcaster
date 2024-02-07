#pragma once

class Trigger
{
public:
    enum class Type
    {
        Cast = 0,
        EntersTheBattlefield,
        LeavesTheBattlefield,
        EntersTheGraveyard,
        LeavesTheGraveyard,
        Draw
    };

    static Trigger fromTriggerType(Type type);

protected:
    Trigger(Type type);
    Type type() const;

    operator Type() const { return type_; }
    friend bool operator<(const Trigger& lhs, const Trigger& rhs);

private:
    Type type_;
};

inline bool operator<(const Trigger& lhs, const Trigger& rhs)
{
    return lhs.type_ < rhs.type_;
}

inline bool operator==(const Trigger& lhs, const Trigger& rhs)
{
    return !(lhs < rhs) && !(rhs < lhs);
}
