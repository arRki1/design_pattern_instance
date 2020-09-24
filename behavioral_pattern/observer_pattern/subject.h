#ifndef __SUBJECT__
#define __SUBJECT__

#include "observer.h"

class Subject
{

public:
    Subject();
    virtual ~Subject();
    virtual void attach(Observer *);
    virtual void detach(Observer *);
    virtual void notify();

};

#endif