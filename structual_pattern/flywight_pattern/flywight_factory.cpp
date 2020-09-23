#include <iostream>

#include "flywight_factory.h"

using namespace std;

FlywightFactory::FlywightFactory()
{

}

FlywightFactory::~FlywightFactory()
{

}

Flywight *FlywightFactory::get_flywight(string internal_state)
{
    map<string, Flywight *>::iterator iter = m_fwmap.find(internal_state);
    if(iter == m_fwmap.end())
    {
        Flywight *fw = new Flywight(internal_state);
        m_fwmap.insert(make_pair(internal_state, fw));
        return fw;
    }
    else
    {
        cout << "aready in the pool,use the exist one:" << endl;
        return iter->second;
    }
}