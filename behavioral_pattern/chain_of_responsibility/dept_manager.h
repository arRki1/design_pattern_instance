#ifndef _DEPT_MANAGER_
#define _DEPT_MANAGER_

#include "approval.h"

class DeptManager:public Approval
{

public:
    DeptManager();
    virtual ~DeptManager();

    void review(int amount);
    void setnext(Approval *);

};

#endif