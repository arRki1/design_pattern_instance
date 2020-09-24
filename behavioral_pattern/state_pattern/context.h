#ifndef __CONTEXT__
#define __CONTEXT__

class State;

#include <string>

#include "state.h"

class Context
{

public:
    Context(std::string);
    ~Context();

    void change_state(State *);
    void request();

    void set_name(std::string);
    std::string get_name();

private:
    std::string m_name;
    State *m_state;

};

#endif