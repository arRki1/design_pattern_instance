#ifndef _FACADE_
#define _FACADE_

#include "sysA.h"
#include "sysB.h"
#include "sysC.h"

class Facade
{
public:
    Facade();
    virtual ~Facade();

    void wrap_operation();

private:
    SysA *m_sysA;
    SysB *m_sysB;
    SysC *m_sysC;
};

#endif