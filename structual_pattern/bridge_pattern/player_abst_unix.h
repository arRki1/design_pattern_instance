#ifndef _PLAYER_ABST_UNIX_
#define _PLAYER_ABST_UNIX_

#include "player_abst.h"
#include "player_impl.h"

class PlayerAbstUnix: public PlayerAbst
{

public:
    PlayerAbstUnix();
    PlayerAbstUnix(PlayerImpl *);
    virtual ~PlayerAbstUnix();

    void virtual play();

};

#endif