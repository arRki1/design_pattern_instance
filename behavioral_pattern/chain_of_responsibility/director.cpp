#include <iostream>

#include "director.h"

using namespace std;

Director::Director()
{

}

Director::~Director()
{

}

void Director::review(int amount)
{
    if(amount > 1000000)
        cout << "can't approve $(" << amount << ")" << endl;
    else
        cout << "approve $(" << amount << ") on Director" << endl;
    
}

void Director::setnext(Approval *next)
{
    Approval::setnext(next);
}