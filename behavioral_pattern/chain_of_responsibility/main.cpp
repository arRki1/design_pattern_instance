#include <iostream>

#include "teller.h"
#include "dept_manager.h"
#include "master_manager.h"
#include "director.h"

int main()
{
    Teller *teller = new Teller();
    DeptManager *dept_manager = new DeptManager();
    MasterManager *master_manager = new MasterManager();
    Director *director = new Director();

    // set chain of responsibility
    teller->setnext(dept_manager);
    dept_manager->setnext(master_manager);
    master_manager->setnext(director);

    teller->review(100);
    teller->review(600);
    teller->review(20000);
    teller->review(200000);
    teller->review(2000000);

    return 0;
}