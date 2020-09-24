#ifndef __CONCRETE_STRATEGY_A_H__
#define __CONCRETE_STRATEGY_A_H__

#include "strategy.h"

class ConcreteStrategyA : public Strategy
{

public:
    ConcreteStrategyA();
    virtual ~ConcreteStrategyA();

    void algorithm();

};

#endif