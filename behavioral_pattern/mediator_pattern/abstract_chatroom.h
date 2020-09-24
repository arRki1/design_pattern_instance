#ifndef _ABSTRACT_CHATROOM_
#define _ABSTRACT_CHATROOM_

#include <map>
#include <string>

#include "member.h"

class AbstractChatroom
{

public:
    AbstractChatroom();
    virtual ~AbstractChatroom();

    virtual void sendText(int, std::string);
    virtual void sendImage(int, std::string);
    virtual void checkin(MMember *);

protected:
    std::map<int, MMember *> m_membermap;

};

#endif