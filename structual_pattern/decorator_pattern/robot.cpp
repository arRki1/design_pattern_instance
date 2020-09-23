#include <iostream>

#include "robot.h"

using namespace std;

Robot::Robot()
{

}

Robot::Robot(Transform *transform):Charge(transform)
{
    
}

Robot::~Robot()
{
    
}

void Robot::say()
{
    cout << "now i can say" << endl;
}

void Robot::behavior()
{
    Charge::behavior();
    say();
}