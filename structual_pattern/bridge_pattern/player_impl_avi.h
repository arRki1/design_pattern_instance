#ifndef _PLAYER_IMPL_AVI_
#define _PLAYER_IMPL_AVI_

#include "player_impl.h"

class PlayerImplAvi: public PlayerImpl
{

public:
    PlayerImplAvi();
    virtual ~PlayerImplAvi();

    virtual void play();
    
};

#endif