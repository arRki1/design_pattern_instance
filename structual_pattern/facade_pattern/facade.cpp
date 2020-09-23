#include <iostream>

#include "facade.h"

using namespace std;

Facade::Facade()
{
    m_sysA = new SysA();
    m_sysB = new SysB();
    m_sysC = new SysC();
}
    
Facade::~Facade()
{

}

void Facade::wrap_operation()
{
    m_sysA->operation();
    m_sysB->operation();
    m_sysC->operation();
}