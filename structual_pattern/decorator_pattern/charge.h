#ifndef _CHARGE_
#define _CHARGE_

#include "transform.h"

class Charge:public Transform
{

public:
    Charge();
    Charge(Transform *);
    virtual ~Charge();

    void behavior();

protected:
    Transform *m_transform;

};

#endif