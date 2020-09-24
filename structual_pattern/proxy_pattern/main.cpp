#include <iostream>

#include "proxy.h"

using namespace std;

int main()
{
    Subject *proxy = new Proxy();
    proxy->request();

    return 0;
}