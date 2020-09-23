#include <iostream>

#include "open_command.h"

using namespace std;

OpenCommand::OpenCommand(Televation *televation):Command(televation)
{

}

OpenCommand::~OpenCommand()
{

}

void OpenCommand::execute()
{
    m_televation->open();
}