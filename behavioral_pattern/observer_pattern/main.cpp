#include <iostream>

#include "concrete_subject.h"
#include "concrete_observer.h"

using namespace std;

int main()
{
    Subject *sbj = new ConcreteSubject();

    Observer *obA = new ConcreteObserver();
    Observer *obB = new ConcreteObserver();

    sbj->attach(obA);
    sbj->attach(obB);
    sbj->notify();

    cout << "================" << endl;

    sbj->detach(obA);
    sbj->notify();

    return 0;
}