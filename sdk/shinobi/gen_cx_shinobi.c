/* Straight-line functions with calls and guards (batch gen_cx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int bootRecvHeader(int, int);
int bootParsePacket(int);
int lcdFillData(int, int);
float _in_coss(void);
int memmove(int, int, int);
int menuCursor(int, int, int);
int menuEnterStep(void);
int menuOpenStep(void);
int menuPutFrame(void);
int menuPutHelpBar(int, float, float);
int menuPutSprites(int, int, int, int);
int pdGetPeripheral(int);
int putLevelCTFontAssist(int, int, int, int, int);
int vibIsReady(void);
int vmsfs_c_dispatch(int);
int vmsfs_c_fiber7(void);
int kmytex_ABSalloc(int a4, int a5, int a6, int a7);
float cos(void);
int bootRunPacket(int a4, int a5);
int _fmtout_putstr(int a4, int a5, int a6);
int menuOptionHandler(void);
int Exec_LCD(void);
int bootInstallVectors(void);
int bootInitTables(void);
struct o3C_uchar { char p[0x3C]; unsigned char v; };


int vmsfs_c_fiber7(void)
{
    return vmsfs_c_dispatch(0x7);
}


