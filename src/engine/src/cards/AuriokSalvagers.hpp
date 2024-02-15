#pragma once
#include "../Card.hpp"
#include <string>

class AuriokSalvagers : public Card
{
public:
    AuriokSalvagers();

    void execute(Engine& engine) override;

private:
    void initImpl() override;
};
