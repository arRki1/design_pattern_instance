#ifndef _AIRPLANE_
#define _AIRPLANE_

#include "charge.h"

class Airplane:public Charge
{

public:
    Airplane();
    Airplane(Transform *);
    virtual ~Airplane();

    virtual void fly();
    void behavior();

};

#endif