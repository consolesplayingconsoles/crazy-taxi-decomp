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


float cos(void)
{
    float t0;
    int t1;
    int t2;
    float u10;
    int stk[3] = {0};

    t0 = _in_coss();
    *(float *)(((int)stk + 4)) = t0;
    t1 = *(int *)((((int)stk + 4) + 0x0));
    if ((t1 & 0x7F800000) == 0x7F800000) {
        t2 = *(int *)((((int)stk + 4) + 0x0));
        if ((t2 & 0x7FFFFF) != 0) {
            *(unsigned int *)0xC2B7BA0 = 0x44D;
        } else {
            *(unsigned int *)0xC2B7BA0 = 0x44C;
        }
    }
    u10 = *(float *)(((int)stk + 4));
    return u10;
}


int _fmtout_putstr(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t13;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t20;

    t0 = *(int *)((a6 + 0x0));
    if (t0 == 1) {
        t1 = *(int *)((a6 + 0x4));
        t2 = memmove(t1, a4, a5);
        t3 = *(int *)((a6 + 0x4));
        *(unsigned int *)((a6 + 0x4)) = (t3 + a5);
        t4 = *(int *)((a6 + 0x8));
        *(unsigned int *)((a6 + 0x8)) = (t4 + a5);
        t20 = t2;
    } else {
        t13 = t0;
        if ((int)a5 > 0) {
            t5 = a4;
            t6 = 0x0;
            for (;;) {
                t7 = *(int *)((a6 + 0x4));
                t8 = *(int *)((a6 + 0xC));
                t9 = *(signed char *)((t5 + 0x0));
                t5 = (t5 + 0x1);
                t10 = ((int (*)(int, int, int))(t8))(t9, t7, a6);
                if (t10 != -1) {
                    t11 = *(int *)((a6 + 0x8));
                    t6 = (t6 + 0x1);
                    *(unsigned int *)((a6 + 0x8)) = (t11 + 0x1);
                    
                    continue;
                }
                break;
            }
            t13 = t10;
        }
        t20 = t13;
    }
    return t20;
}


