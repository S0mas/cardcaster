#pragma once
#include "ManaCost.hpp"

#include <algorithm>
#include <ranges>

ManaCost::ManaCost()
{
    for(const auto color : {Color::WHITE, Color::GREEN, Color::RED, Color::BLUE, Color::BLACK, Color::COLORLESS, Color::GENERIC})
    {
        colors_costs_.insert_or_assign(color, 0);
    }
}

void ManaCost::setWhiteCost(const int count)
{
    setColorCost(Color::WHITE, count);
}

void ManaCost::setRedCost(const int count)
{
    setColorCost(Color::RED, count);
}

void ManaCost::setBlueCost(const int count)
{
    setColorCost(Color::BLUE, count);
}

void ManaCost::setBlackCost(const int count)
{
    setColorCost(Color::BLACK, count);
}

void ManaCost::setGreenCost(const int count)
{
    setColorCost(Color::GREEN, count);
}

void ManaCost::setGenericCost(const int count)
{
    setColorCost(Color::GENERIC, count);
}

void ManaCost::setColorlessCost(const int count)
{
    setColorCost(Color::COLORLESS, count);
}

void ManaCost::setColorCost(const Color color, const int count)
{
    colors_costs_.at(color) = count;
}

int ManaCost::colorCost(const Color color) const
{
    return colors_costs_.at(color);
}

std::vector<Color> ManaCost::color() const
{
    auto check_color = [this](const Color color)
    {
        return colors_costs_.at(color) > 0;
    };

    std::vector<Color> colors;
    std::ranges::copy_if(std::vector<Color>{Color::WHITE, Color::GREEN, Color::RED, Color::BLUE, Color::BLACK}, std::back_inserter(colors), check_color);

    return colors;
}
