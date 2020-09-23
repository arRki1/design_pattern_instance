#include <iostream>

#include "charge.h"

using namespace std;

Charge::Charge()
{

}

Charge::Charge(Transform *transform)
{
    m_transform = transform;
}

Charge::~Charge()
{

}

void Charge::behavior()
{
    m_transform->behavior();
}