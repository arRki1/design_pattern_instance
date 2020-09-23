#ifndef _FLYWIGHT_
#define _FLYWIGHT_

#include <string>

class Flywight
{
public:    
    Flywight();
    Flywight(std::string internal_state);
    virtual ~Flywight();

    virtual void operation(std::string external_state);

private:
    std::string m_internal_state;
};

#endif