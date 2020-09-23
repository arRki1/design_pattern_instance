#ifndef _DIRECTOR_
#define _DIRECTOR_

#include "approval.h"

class Director:public Approval
{

public:
    Director();
    virtual ~Director();

    void review(int amount);
    void setnext(Approval *);

};

#endif