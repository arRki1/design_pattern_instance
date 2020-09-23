#ifndef _PLAYER_ABST_
#define _PLAYER_ABST_

#include "player_impl.h"

class PlayerAbst
{

public:
    PlayerAbst();
    PlayerAbst(PlayerImpl *);
    virtual ~PlayerAbst();
    
    virtual void play();

protected:
    PlayerImpl *m_player;

};

#endif