#include <set>

#include "concrete_subject.h"
#include "observer.h"

ConcreteSubject::ConcreteSubject()
{

}

ConcreteSubject::~ConcreteSubject()
{

}

void ConcreteSubject::attach(Observer *ob)
{
    m_setob.insert(ob);
}

void ConcreteSubject::detach(Observer *ob)
{
    m_setob.erase(ob);
}

void ConcreteSubject::notify()
{
    for(std::set<Observer *>::iterator iter = m_setob.begin(); 
        iter != m_setob.end(); ++iter)
    {
        (*iter)->update();
    }
}

int ConcreteSubject::get_state()
{
    return m_state;
}

void ConcreteSubject::set_state(int state)
{
    m_state = state;
}