#include <iostream>

#include "concrete_stateA.h"
#include "concrete_stateB.h"
#include "context.h"

State *ConcreteStateA::m_instance = NULL;

ConcreteStateA::ConcreteStateA()
{

}

ConcreteStateA::~ConcreteStateA()
{

}

void ConcreteStateA::handle(Context *context)
{
    std::cout << "context[" << context->get_name() << "] handle on state A" << std::endl;
    context->change_state(ConcreteStateB::get_instance());
}

State *ConcreteStateA::get_instance()
{
    if(m_instance == NULL)
        m_instance = new ConcreteStateA();
    return m_instance;
}