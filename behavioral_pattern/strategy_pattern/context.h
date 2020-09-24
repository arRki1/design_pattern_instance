#ifndef __CONTEXT_H__
#define __CONTEXT_H__

#include "strategy.h"

class Context
{

public:
    Context();
    virtual ~Context();
    virtual void set_strategy(Strategy *);
    virtual void algorithm();

private:
    Strategy *m_strategy;
};

#endif