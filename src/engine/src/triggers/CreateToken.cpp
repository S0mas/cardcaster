#include "CreateToken.hpp"
#include <iostream>

CreateToken::CreateToken(const Player& player, const TokenType token_type)
    : TriggerData(TriggerData::Type::CreateToken)
    , controller_{player}
    , token_type_{token_type}
{
    std::cout << __func__ << std::endl;
}


