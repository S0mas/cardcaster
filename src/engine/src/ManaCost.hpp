#pragma once
#include "Color.hpp"
#include <map>
#include <vector>

class ManaCost
{

public:
    ManaCost();

    void setWhiteCost(int count);
    void setRedCost(int count);
    void setBlueCost(int count);
    void setBlackCost(int count);
    void setGreenCost(int count);
    void setGenericCost(int count);
    void setColorlessCost(int count);
    void setPhyrexianWhiteCost(int count);
    void setPhyrexianRedCost(int count);
    void setPhyrexianBlueCost(int count);
    void setPhyrexianBlackCost(int count);
    void setPhyrexianGreenCost(int count);
    void setColorCost(Color color, int count);

    int colorCost(Color color) const;
    std::vector<Color> color() const;

private:
    std::map<Color, int> colors_costs_;
};
