#ifndef _ROBOT_
#define _ROBOT_

#include "charge.h"

class Robot:public Charge
{

public:
    Robot();
    Robot(Transform *);
    virtual ~Robot();

    void behavior();
    void say();
};

#endif