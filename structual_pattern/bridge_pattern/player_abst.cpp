#include <iostream>

#include "player_abst.h"

using namespace std;

PlayerAbst::PlayerAbst()
{

}

PlayerAbst::PlayerAbst(PlayerImpl *player)
{
    m_player = player;
}

PlayerAbst::~PlayerAbst()
{
    
}

void PlayerAbst::play()
{
    m_player->play();
}