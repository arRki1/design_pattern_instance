#include <iostream>

#include "player_abst_linux.h"

using namespace std;

PlayerAbstLinux::PlayerAbstLinux()
{

}

PlayerAbstLinux::PlayerAbstLinux(PlayerImpl *imp):PlayerAbst(imp)
{

}

PlayerAbstLinux::~PlayerAbstLinux()
{

}

void PlayerAbstLinux::play()
{
    m_player->play();
    cout << "on linux\n";
}