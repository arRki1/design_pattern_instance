#include <iostream>

#include "player_abst_windows.h"

using namespace std;

PlayerAbstWindows::PlayerAbstWindows()
{

}

PlayerAbstWindows::PlayerAbstWindows(PlayerImpl *imp):PlayerAbst(imp)
{

}

PlayerAbstWindows::~PlayerAbstWindows()
{

}

void PlayerAbstWindows::play()
{
    m_player->play();
    cout << "on windows\n";
}