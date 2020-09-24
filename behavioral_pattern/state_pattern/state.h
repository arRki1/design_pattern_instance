#ifndef __STATE__
#define __STATE__

class Context;

class State
{

public:
    State();
    virtual ~State();

    virtual void handle(Context *);

};

#endif