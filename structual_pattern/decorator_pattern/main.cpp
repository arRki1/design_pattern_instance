#include <iostream>

#include "car.h"
#include "robot.h"
#include "airplane.h"

using namespace std;

int main()
{
    Transform *transfrom_car = new Car();
    transfrom_car->behavior();

    Transform *transform_robot = new Robot(transfrom_car);
    transform_robot->behavior();

    Transform *transform_airplane = new Airplane(transform_robot);
    transform_airplane->behavior();

    return 0;
}