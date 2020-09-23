#include <iostream>

#include "open_command.h"
#include "close_command.h"
#include "change_channel_command.h"
#include "invoker.h"

using namespace std;

int main()
{
    Televation *televation = new Televation();
    Command *open_command = new OpenCommand(televation);
    Command *close_command = new CloseCommand(televation);
    Command *change_channel_command = new ChangeChannelCommand(televation);

    Invoker *open = new Invoker(open_command);
    Invoker *close = new Invoker(close_command);
    Invoker *change_channel = new Invoker(change_channel_command);

    open->call();
    close->call();
    change_channel->call();

    return 0;
}