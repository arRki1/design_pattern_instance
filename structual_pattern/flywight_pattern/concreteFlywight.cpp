#include <iostream>

#include "concreteFlywight.h"

using namespace std;

ConcreteFlywight::ConcreteFlywight()
{

}

ConcreteFlywight::ConcreteFlywight(string internal_state):Flywight(internal_state)
{

}

ConcreteFlywight::~ConcreteFlywight()
{

}

void ConcreteFlywight::operation(string external_state)
{
    cout << "concrete ";
    Flywight::operation(external_state);
}