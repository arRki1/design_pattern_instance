#ifndef __CONCRETE_STATE_A__
#define __CONCRETE_STATE_A__

#include "context.h"

class ConcreteStateA:public State
{

public:
    virtual ~ConcreteStateA();

    void handle(Context *);
    static State *get_instance();

private:
    ConcreteStateA();
    static State *m_instance;

};

#endif