#ifndef __CONCRETE_STATE_B__
#define __CONCRETE_STATE_B__

#include "context.h"

class ConcreteStateB:public State
{

public:
    virtual ~ConcreteStateB();

    void handle(Context *);
    static State *get_instance();

private:
    ConcreteStateB();
    static State *m_instance;

};

#endif