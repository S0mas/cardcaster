#pragma once
#include "ManaCost.hpp"

#include <string>

class Engine;

class Card
{
public:
    Card();
    virtual ~Card();
    Card(std::string&& name, std::string&& description);

    std::vector<Color> colors() const;

    void init();
    void reset();
    virtual void execute(Engine& engine) = 0;

    virtual void initImpl() = 0;

protected:
    std::string name_;
    std::string description_;
    std::string image_source_;
    std::vector<Color> colors_;
    ManaCost mana_cost_;
};
