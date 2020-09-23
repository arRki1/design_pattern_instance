#include <iostream>

#include "teller.h"

using namespace std;

Teller::Teller()
{

}

Teller::~Teller()
{

}

void Teller::review(int amount)
{
    if(amount > 500)
        m_next->review(amount);
    else
        cout << "approve $(" << amount << ") on Teller" << endl;
    
}

void Teller::setnext(Approval *next)
{
    Approval::setnext(next);
}