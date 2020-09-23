#include "command.h"

Command::Command(Televation *Televation)
{
    m_televation = Televation;
}

Command::~Command()
{
    delete m_televation;
}

void Command::execute()
{
    
}