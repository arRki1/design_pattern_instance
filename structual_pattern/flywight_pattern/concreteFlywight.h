#ifndef _CONCRETE_FLYWIGHT_
#define _CONCRETE_FLYWIGHT_

#include <string>
#include "flywight.h"

class ConcreteFlywight:public Flywight
{
public:    
    ConcreteFlywight();
    ConcreteFlywight(std::string internal_state);
    virtual ~ConcreteFlywight();

    virtual void operation(std::string external_state);
};

#endif