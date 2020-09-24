#include <iostream>

#include "concrete_stateA.h"
#include "concrete_stateB.h"
#include "context.h"

using namespace std;

int main()
{
    Context *context = new Context("test");

    context->request();
    context->request();

    return 0;
}