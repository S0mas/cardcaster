#include "ParallaxWave.hpp"
#include "../include/Engine.hpp"

ParallaxWave::ParallaxWave() : Card{"Parallax Wave", ""}
{
}

void ParallaxWave::execute(Engine& engine)
{
}

void ParallaxWave::initImpl()
{
    mana_cost_.setWhiteCost(2);
    mana_cost_.setGenericCost(2);
}
