#include <iostream>

#include "concrete_observer.h"

ConcreteObserver::ConcreteObserver()
{

}

ConcreteObserver::~ConcreteObserver()
{

}

void ConcreteObserver::update()
{
    std::cout << "update" << std::endl;
}