#ifndef _DIAMOND_MEMBER_
#define _DIAMOND_MEMBER_

#include <string>

#include "member.h"

class DiamondMember:public MMember
{

public:
    DiamondMember(int);
    virtual ~DiamondMember();
    virtual void set_chatroom(AbstractChatroom *);
    
    virtual void sendText(int, std::string);
    virtual void sendImage(int, std::string);

    int getid();

};

#endif