#pragma once

#include "Card.hpp"

#include <memory>
#include <string>
#include <vector>

class Player
{
public:
    Player(std::string&& name);

    void draw(int count);
    void drawDuringDrawStep(int count);

    int cardDrawnThisDrawStep() const;

    bool isOpponent(const Player& player) const;

private:
    std::string name_;

    //std::vector<Action> actions_;

    int card_drawn_this_draw_step_{0};
    std::vector<std::unique_ptr<Card>> graveyard_;
    std::vector<std::unique_ptr<Card>> hand_;
    std::vector<std::unique_ptr<Card>> exile_;
    std::vector<std::unique_ptr<Card>> library_;

    friend bool operator<(const Player& lhs, const Player& rhs);
};

inline bool operator<(const Player& lhs, const Player& rhs)
{
    return lhs.name_ < rhs.name_;
}

inline bool operator==(const Player& lhs, const Player& rhs)
{
    return !(lhs < rhs) && !(rhs < lhs);
}

inline bool operator!=(const Player& lhs, const Player& rhs)
{
    return !(lhs == rhs);
}
