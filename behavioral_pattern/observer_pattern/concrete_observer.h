#ifndef __CONCRETE_OBSERVER__
#define __CONCRETE_OBSERVER__

#include "observer.h"

class ConcreteObserver:public Observer
{

public:
    ConcreteObserver();
    virtual ~ConcreteObserver();

    void update();

};

#endif