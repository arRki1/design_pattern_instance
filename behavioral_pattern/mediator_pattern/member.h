#ifndef _MEMBER_
#define _MEMBER_

#include <string>

#include "abstract_chatroom.h"

class MMember
{

public:
    MMember(int);
    virtual ~MMember();
    void set_chatroom(AbstractChatroom *);

    virtual void sendText(int, std::string);
    virtual void sendImage(int, std::string);
    void receiveText(int, std::string);
    void receiveImage(int, std::string);
    int getid();

private:
    int m_id;

protected:
    AbstractChatroom *m_chatroom;

};

#endif