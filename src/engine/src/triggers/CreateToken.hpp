#pragma once

#include "TriggerData.hpp"

class Player;

enum class TokenType
{
    TreasureToken
};


class CreateToken : public TriggerData
{
public:
    CreateToken(const Player& player, TokenType toke_type);

private:
    const Player& controller_;
    TokenType token_type_;
};
