#include <iostream>

#include "flywight.h"

using namespace std;

Flywight::Flywight()
{

}

Flywight::Flywight(string internal_state)
{
    m_internal_state = internal_state;
}

Flywight::~Flywight()
{

}

void Flywight::operation(string external_state)
{
    cout << "flywight[" << m_internal_state << "] work on external_state " << external_state << endl;
}