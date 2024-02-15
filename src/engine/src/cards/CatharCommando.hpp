#pragma once
#include "../Card.hpp"
#include <string>

class CatharCommando : public Card
{
public:
    CatharCommando();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
