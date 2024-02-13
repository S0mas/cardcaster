#include "Action.hpp"

Action::Action(const bool is_using_stack)
    : is_using_stack_{is_using_stack}
{

}

void Action::execute(Engine& engine)
{

}


bool Action::isUsingStack() const
{
    return is_using_stack_;
}
