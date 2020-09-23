#include <iostream>

#include "player_abst_linux.h"
#include "player_abst_unix.h"
#include "player_abst_windows.h"
#include "player_impl_avi.h"
#include "player_impl_mpeg.h"
#include "player_impl_rmvb.h"
#include "player_impl_wmv.h"

using namespace std;

int main()
{
    PlayerImpl *player_avi = new PlayerImplAvi();
    PlayerImpl *player_mpeg = new PlayerImplMpeg();
    PlayerImpl *player_rmvb = new PlayerImplRmvb();
    PlayerImpl *player_wmv = new PlayerImplWmv();

    PlayerAbst *player_windows_avi = new PlayerAbstWindows(player_avi);
    PlayerAbst *player_windows_mpeg = new PlayerAbstWindows(player_mpeg);
    PlayerAbst *player_windows_rmvb = new PlayerAbstWindows(player_rmvb);
    PlayerAbst *player_windows_wmv = new PlayerAbstWindows(player_wmv);

    PlayerAbst *player_unix_avi = new PlayerAbstUnix(player_avi);
    PlayerAbst *player_unix_mpeg = new PlayerAbstUnix(player_mpeg);
    PlayerAbst *player_unix_rmvb = new PlayerAbstUnix(player_rmvb);
    PlayerAbst *player_unix_wmv = new PlayerAbstUnix(player_wmv);

    PlayerAbst *player_linux_avi = new PlayerAbstLinux(player_avi);
    PlayerAbst *player_linux_mpeg = new PlayerAbstLinux(player_mpeg);
    PlayerAbst *player_linux_rmvb = new PlayerAbstLinux(player_rmvb);
    PlayerAbst *player_linux_wmv = new PlayerAbstLinux(player_wmv);

    // output
    player_windows_avi->play();
    player_windows_mpeg->play();
    player_windows_rmvb->play();
    player_windows_wmv->play();

    player_unix_avi->play();
    player_unix_mpeg->play();
    player_unix_rmvb->play();
    player_unix_wmv->play();

    player_linux_avi->play();
    player_linux_mpeg->play();
    player_linux_rmvb->play();
    player_linux_wmv->play();

    return 0;
}