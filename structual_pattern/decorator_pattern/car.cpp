#include <iostream>

#include "car.h"

using namespace std;

Car::Car()
{

}

Car::~Car()
{

}

void Car::move()
{
    cout << "now i can move" <<endl;
}

void Car::behavior()
{
    move();
}