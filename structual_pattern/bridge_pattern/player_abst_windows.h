#ifndef _PLAYER_ABST_WINDOWS_
#define _PLAYER_ABST_WINDOWS_

#include "player_abst.h"

class PlayerAbstWindows: public PlayerAbst
{

public:
    PlayerAbstWindows();
    PlayerAbstWindows(PlayerImpl *);
    virtual ~PlayerAbstWindows();

    void virtual play();

};

#endif