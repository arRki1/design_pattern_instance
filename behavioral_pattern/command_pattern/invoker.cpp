#include <iostream>

#include "invoker.h"

using namespace std;

Invoker::Invoker(Command *comm)
{
    m_comm = comm;
}

Invoker::~Invoker()
{
    delete m_comm;
}

void Invoker::call()
{
    m_comm->execute();
}