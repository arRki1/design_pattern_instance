#ifndef _INVOKER_
#define _INVOKER_

#include "command.h"

class Invoker
{

public:
    Invoker(Command *);
    virtual ~Invoker();

    void call();

private:
    Command *m_comm;

};

#endif