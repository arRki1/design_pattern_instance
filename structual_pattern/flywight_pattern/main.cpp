#include <iostream>

#include "concreteFlywight.h"
#include "flywight_factory.h"

using namespace std;

int main()
{
    FlywightFactory *fwf = new FlywightFactory();

    Flywight *fwA =  fwf->get_flywight("A");
    fwA->operation("下象棋");

    Flywight *fwB =  fwf->get_flywight("B");
    fwB->operation("下围棋");

    Flywight *fwC =  fwf->get_flywight("A");
    fwA->operation("下飞行棋");

    return 0;
}