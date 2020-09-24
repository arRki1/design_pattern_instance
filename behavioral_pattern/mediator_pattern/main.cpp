#include <iostream>

#include "chat_group.h"
#include "common_member.h"
#include "diamond_member.h"

using namespace std;

int main()
{
    AbstractChatroom *chatgroup = new ChatGroup();
    MMember *common_member = new CommonMember(1);
    MMember *diamond_member = new DiamondMember(2);

    chatgroup->checkin(common_member);
    chatgroup->checkin(diamond_member);

    common_member->sendText(2, "book");
    common_member->sendImage(2, "disk");

    diamond_member->sendText(1, "book");
    diamond_member->sendImage(1, "disk");

    return 0;
}