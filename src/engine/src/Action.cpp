#include "Action.hpp"

Action::Action()
{

}

void Action::execute(Engine& engine)
{
    for(auto const& trigger : beforeActrionTriggers_)
    {
        trigger();
    }

    if(insteadOfActrionTriggers_.empty())
    {
        impl(engine);

        for(auto const& trigger : afterActrionTriggers_)
        {
            trigger();
        }
    }
    else
    {
        for(auto const& trigger : insteadOfActrionTriggers_)
        {
            trigger();
        }
    }
}
