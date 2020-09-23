#include <iostream>

#include "player_abst_unix.h"

using namespace std;

PlayerAbstUnix::PlayerAbstUnix()
{

}

PlayerAbstUnix::PlayerAbstUnix(PlayerImpl *imp):PlayerAbst(imp)
{

}

PlayerAbstUnix::~PlayerAbstUnix()
{

}

void PlayerAbstUnix::play()
{
    m_player->play();
    cout << "on unix\n";
}