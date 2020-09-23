#include <iostream>

#include "change_channel_command.h"

using namespace std;

ChangeChannelCommand::ChangeChannelCommand(Televation *televation):Command(televation)
{

}

ChangeChannelCommand::~ChangeChannelCommand()
{

}

void ChangeChannelCommand::execute()
{
    m_televation->change_channel();
}