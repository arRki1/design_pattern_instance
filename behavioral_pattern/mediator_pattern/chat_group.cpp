#include <iostream>

#include "chat_group.h"

ChatGroup::ChatGroup()
{
    
}

ChatGroup::~ChatGroup()
{
    
}

void ChatGroup::sendText(int id, std::string text)
{
    std::map<int, MMember *>::iterator iter = m_membermap.find(id);

    if(iter == m_membermap.end())
    {
        std::cout << "can't find member " << id << std::endl;
    }
    else
    {
        std::cout << "send Text[" << text << "] to " << id << std::endl;
        iter->second->receiveText(id, text);
    }
}
    
void ChatGroup::sendImage(int id, std::string image)
{
    std::map<int, MMember *>::iterator iter = m_membermap.find(id);

    if(iter == m_membermap.end())
    {
        std::cout << "can't find member " << id << std::endl;
    }
    else
    {
        std::cout << "send Image[" << image << "] to " << id << std::endl;
        iter->second->receiveImage(id, image);
    }
}

void ChatGroup::checkin(MMember *member)
{
    std::map<int, MMember *>::iterator iter = m_membermap.find(member->getid());

    if(iter == m_membermap.end())
    {
        m_membermap.insert(std::make_pair(member->getid(), member));
        member->set_chatroom(this);
    }
}