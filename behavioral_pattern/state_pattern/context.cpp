#include <string>

#include "context.h"
#include "state.h"
#include "concrete_stateA.h"

Context::Context(std::string name)
{
    m_name = name;
    m_state = ConcreteStateA::get_instance();
}

Context::~Context()
{

}

void Context::request()
{
    m_state->handle(this);
}

void Context::change_state(State *state)
{
    m_state = state;
}

std::string Context::get_name()
{
    return m_name;
}

void Context::set_name(std::string name)
{
    m_name = name;
}