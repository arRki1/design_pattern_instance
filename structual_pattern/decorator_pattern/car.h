#ifndef _CAR_
#define _CAR_

#include "transform.h"

class Car:public Transform
{

public:
    Car();
    virtual ~Car();

    virtual void move();
    void behavior();

};

#endif