#ifndef _FLYWIGHT_FACTORY_
#define _FLYWIGHT_FACTORY_

#include <map>
#include <string>

#include "flywight.h"

class FlywightFactory
{
public:
    FlywightFactory();
    virtual ~FlywightFactory();

    Flywight *get_flywight(std::string internal_state);

private:
    std::map<std::string, Flywight *> m_fwmap;
};

#endif