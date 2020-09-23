#ifndef _CHANGE_CHANNEL_COMMAND_
#define _CHANGE_CHANNEL_COMMAND_

#include "command.h"

class ChangeChannelCommand:public Command
{

public:
    ChangeChannelCommand(Televation *);
    virtual ~ChangeChannelCommand();
    void execute();

};

#endif