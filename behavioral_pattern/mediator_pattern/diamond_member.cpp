#include <iostream>

#include "diamond_member.h"

using namespace std;

DiamondMember::DiamondMember(int id):MMember(id)
{

}

DiamondMember::~DiamondMember()
{

}

void DiamondMember::set_chatroom(AbstractChatroom *chatroom)
{
    MMember::set_chatroom(chatroom);
}

int DiamondMember::getid()
{
    return MMember::getid();
}

void DiamondMember::sendText(int id, std::string text)
{
    m_chatroom->sendText(id, text);
}

void DiamondMember::sendImage(int id, std::string image)
{
    m_chatroom->sendImage(id, image);
}