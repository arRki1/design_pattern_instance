#ifndef _TELLER_
#define _TELLER_

#include "approval.h"

class Teller:public Approval
{

public:
    Teller();
    virtual ~Teller();

    void review(int amount);
    void setnext(Approval *);

};

#endif