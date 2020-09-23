#ifndef _COMMAND_
#define _COMMAND_

#include "televation.h"

class Command
{

public:
    Command(Televation *);
    virtual ~Command();
    virtual void execute();

protected:
    Televation *m_televation;

};

#endif