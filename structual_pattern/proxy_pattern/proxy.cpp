#include <iostream>

#include "proxy.h"

using namespace std;

Proxy::Proxy()
{
    m_rs = new RealSubject();
}

Proxy::~Proxy()
{
    delete m_rs;
}

void Proxy::pre_request()
{
    cout << "Proxy::pre_request()" << endl;
}

void Proxy::after_request()
{
    cout << "Proxy::after_request()" << endl;
}

void Proxy::request()
{
    pre_request();
    m_rs->request();
    after_request();
}