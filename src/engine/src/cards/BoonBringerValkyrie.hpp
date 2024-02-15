#pragma once
#include "../Card.hpp"
#include <string>

class BoonBringerValkyrie : public Card
{
public:
    BoonBringerValkyrie();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
