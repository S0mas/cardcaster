#pragma once

#include "../Action.hpp"

class Draw : public Action
{
public:
    Draw();

    void impl(Engine& engine) override;



    int player_;
};
