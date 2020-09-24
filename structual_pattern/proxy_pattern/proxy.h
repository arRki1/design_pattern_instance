#ifndef _PROXY_
#define _PROXY_

#include "subject.h"
#include "real_subject.h"

class Proxy:public Subject
{

public:
    Proxy();
    virtual ~Proxy();

    void request();

private:
    void pre_request();
    void after_request();
    Subject *m_rs;

};

#endif