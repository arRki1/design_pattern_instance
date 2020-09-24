#include <iostream>

#include "concrete_stateB.h"
#include "context.h"

State *ConcreteStateB::m_instance = NULL;

ConcreteStateB::ConcreteStateB()
{

}

ConcreteStateB::~ConcreteStateB()
{

}

void ConcreteStateB::handle(Context *context)
{
    std::cout << "context[" << context->get_name() << "] handle on state B" << std::endl;
}

State *ConcreteStateB::get_instance()
{
    if(m_instance == NULL)
        m_instance = new ConcreteStateB();
    return m_instance;
}