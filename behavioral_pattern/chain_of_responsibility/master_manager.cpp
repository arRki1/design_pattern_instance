#include <iostream>

#include "master_manager.h"

using namespace std;

MasterManager::MasterManager()
{

}

MasterManager::~MasterManager()
{

}

void MasterManager::review(int amount)
{
    if(amount > 100000)
        m_next->review(amount);
    else
        cout << "approve $(" << amount << ") on Master Manager" << endl;
    
}

void MasterManager::setnext(Approval *next)
{
    Approval::setnext(next);
}