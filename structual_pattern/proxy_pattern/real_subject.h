#ifndef _REAL_SUBJECT_
#define _REAL_SUBJECT_

#include "subject.h"

class RealSubject:public Subject
{

public:
    RealSubject();
    virtual ~RealSubject();

    void request();

};

#endif