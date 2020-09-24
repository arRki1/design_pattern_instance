#ifndef _COMMON_MEMBER_
#define _COMMON_MEMBER_

#include <string>

#include "member.h"

class CommonMember:public MMember
{

public:
    CommonMember(int);
    virtual ~CommonMember();
    virtual void set_chatroom(AbstractChatroom *);
    
    virtual void sendText(int, std::string);

    int getid();

};

#endif