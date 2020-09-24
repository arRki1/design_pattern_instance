#ifndef __OBSERVER__
#define __OBSERVER__

class Observer
{

public:
    Observer();
    virtual ~Observer();

    virtual void update();

};

#endif