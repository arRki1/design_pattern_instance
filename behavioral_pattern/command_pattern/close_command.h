#ifndef _CLOSE_COMMAND_
#define _CLOSE_COMMAND_

#include "command.h"

class CloseCommand:public Command
{

public:
    CloseCommand(Televation *);
    virtual ~CloseCommand();
    void execute();

};

#endif