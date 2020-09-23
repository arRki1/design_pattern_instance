#include <iostream>

#include "dept_manager.h"

using namespace std;

DeptManager::DeptManager()
{

}

DeptManager::~DeptManager()
{

}

void DeptManager::review(int amount)
{
    if(amount > 10000)
        m_next->review(amount);
    else
        cout << "approve $(" << amount << ") on Deptartment Manager" << endl;
    
}

void DeptManager::setnext(Approval *next)
{
    Approval::setnext(next);
}