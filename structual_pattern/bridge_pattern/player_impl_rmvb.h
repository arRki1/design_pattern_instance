#ifndef _PLAY_IMPL_RMVB_
#define _PLAY_IMPL_RMVB_

#include "player_impl.h"

class PlayerImplRmvb: public PlayerImpl
{

public:
    PlayerImplRmvb();
    virtual ~PlayerImplRmvb();
    
    virtual void play();

};

#endif