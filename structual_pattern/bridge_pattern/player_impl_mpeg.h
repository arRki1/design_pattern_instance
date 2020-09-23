#ifndef _PLAYER_IMPL_MPEG_
#define _PLAYER_IMPL_MPEG_

#include "player_impl.h"

class PlayerImplMpeg: public PlayerImpl
{

public:
    PlayerImplMpeg();
    virtual ~PlayerImplMpeg();

    virtual void play();
    
};

#endif