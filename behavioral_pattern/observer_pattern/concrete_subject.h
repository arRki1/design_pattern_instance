#ifndef __CONCRETE_SUBJECT__
#define __CONCRETE_SUBJECT__

#include <set>

#include "subject.h"
#include "observer.h"

class ConcreteSubject:public Subject
{

public:
    ConcreteSubject();
    virtual ~ConcreteSubject();

    void attach(Observer *);
    void detach(Observer *);
    void notify();
    void set_state(int);
    int get_state();

private:
    std::set<Observer *> m_setob;
    int m_state;

};

#endif