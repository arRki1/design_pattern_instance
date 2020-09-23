#ifndef _PLAYER_IMPL_WMV_
#define _PLAYER_IMPL_WMV_

#include "player_impl.h"

class PlayerImplWmv: public PlayerImpl
{

public:
    PlayerImplWmv();
    virtual ~PlayerImplWmv();

    virtual void play();
    
};

#endif