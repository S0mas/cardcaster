#include "Card.hpp"

Card::Card()
{

}

Card::Card(std::string&& name, std::string&& description)
    : name_{std::move(name)}
    , description_{std::move(description)}
{
}

Card::~Card() {}

std::vector<Color> Card::colors() const
{
    return colors_;
}

void Card::resetToInitialProperties()
{
    colors_ = mana_cost_.color();
}
