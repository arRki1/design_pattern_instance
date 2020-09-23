#ifndef _OPEN_COMMAND_
#define _OPEN_COMMAND_

#include "command.h"

class OpenCommand:public Command
{

public:
    OpenCommand(Televation *);
    virtual ~OpenCommand();
    void execute();

};

#endif