#include <iostream>

#include "close_command.h"

using namespace std;

CloseCommand::CloseCommand(Televation *televation):Command(televation)
{

}

CloseCommand::~CloseCommand()
{

}

void CloseCommand::execute()
{
    m_televation->close();
}