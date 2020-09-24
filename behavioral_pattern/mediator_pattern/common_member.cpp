#include <iostream>

#include "common_member.h"

using namespace std;

CommonMember::CommonMember(int id):MMember(id)
{

}

CommonMember::~CommonMember()
{

}

void CommonMember::set_chatroom(AbstractChatroom *chatroom)
{
    MMember::set_chatroom(chatroom);
}

void CommonMember::sendText(int id, std::string text)
{
    m_chatroom->sendText(id, text);
}