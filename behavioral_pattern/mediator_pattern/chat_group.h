#ifndef _CHAT_GROUP_
#define _CHAT_GROUP_

#include "abstract_chatroom.h"

class ChatGroup:public AbstractChatroom
{

public:
    ChatGroup();
    virtual ~ChatGroup();

    virtual void sendText(int, std::string);
    virtual void sendImage(int, std::string);
    virtual void checkin(MMember *);

};

#endif