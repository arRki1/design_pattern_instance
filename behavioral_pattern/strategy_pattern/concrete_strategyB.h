#ifndef __CONCRETE_STRATEGY_B_H__
#define __CONCRETE_STRATEGY_B_H__

#include "strategy.h"

class ConcreteStrategyB : public Strategy
{

public:
    ConcreteStrategyB();
    virtual ~ConcreteStrategyB();

    void algorithm();

};

#endif