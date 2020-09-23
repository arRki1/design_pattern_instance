#ifndef _PLAYER_ABST_LINUX_
#define _PLAYER_ABST_LINUX_

#include "player_abst.h"
#include "player_impl.h"

class PlayerAbstLinux: public PlayerAbst
{

public:
    PlayerAbstLinux();
    PlayerAbstLinux(PlayerImpl *);
    virtual ~PlayerAbstLinux();

    void virtual play();

};

#endif