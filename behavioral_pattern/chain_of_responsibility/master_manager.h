#ifndef _MASTER_MANAGER_
#define _MASTER_MANAGER_

#include "approval.h"

class MasterManager:public Approval
{

public:
    MasterManager();
    virtual ~MasterManager();

    void review(int amount);
    void setnext(Approval *);

};

#endif