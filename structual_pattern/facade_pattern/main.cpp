#include <iostream>

#include "facade.h"

using namespace std;

int main()
{
    Facade *facade = new Facade();
    facade->wrap_operation();

    return 0;
}