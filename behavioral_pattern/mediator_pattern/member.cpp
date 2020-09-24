#include <iostream>

#include "member.h"

using namespace std;

MMember::MMember(int id)
{
    m_id = id;
}

MMember::~MMember()
{

}

void MMember::set_chatroom(AbstractChatroom *chatroom)
{
    m_chatroom = chatroom;
}

int MMember::getid()
{
    return m_id;
}

void MMember::sendText(int id, string text)
{

}

void MMember::sendImage(int id, string image)
{

}

void MMember::receiveText(int id, string text)
{
    cout << this->getid() << "receive text[" << text << "]" << "from " << id << endl;
}

void MMember::receiveImage(int id, string image)
{
    cout << this->getid() << "receive image[" << image << "]" << "from " << id << endl;
}