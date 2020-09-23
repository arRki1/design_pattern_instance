#include <iostream>

#include "airplane.h"

using namespace std;

Airplane::Airplane()
{

}

Airplane::Airplane(Transform *transform):Charge(transform)
{

}

Airplane::~Airplane()
{

}

void Airplane::fly()
{
    cout << "now i can fly" << endl;
}

void Airplane::behavior()
{
    Charge::behavior();
    fly();
}