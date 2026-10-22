/* Straight-line functions with calls and guards (batch gen_zz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c081470(int, int);
int buCalcBackupFileSize(int, int, int);
int buGetLastError(void);
int buMakeBackupFileImage(int, int);
int buSaveFile(int, int, int, int);
int buStat(int);
int memmove(int, int, int);
int memset(int, int, int);
int nlFree(int);
int nlMalloc(int);
int syRtcGetDate(int);
int SaveBackupData(int a4);

int SaveBackupData(int a4)
{
    int t4;
    int t6;
    int t10;
    int t36;
    int t11;
    int t33;
    int t12;
    int t23;
    int t7;
    int t31;
    int t30;
    int stk[38] = {0};

    memset((((int)stk + 12) + 0x14), 0x0, 0x60);
    FUN_0c081470((((int)stk + 12) + 0x14), 0xC0EEC58);
    FUN_0c081470((((int)stk + 12) + 0x26), 0xC0EEC68);
    memmove((((int)stk + 12) + 0x48), 0xC0EEC73, 0x10);
    *(unsigned int *)(((int)stk + 100)) = 0xC0EEC83;
    *(unsigned int *)(((int)stk + 104)) = 0xC0EECA3;
    *(unsigned short *)(((int)stk + 108)) = 0x3;
    *(unsigned short *)(((int)stk + 110)) = 0x2;
    *(unsigned int *)(((int)stk + 112)) = 0x0;
    *(unsigned short *)(((int)stk + 116)) = 0x0;
    t4 = 0xC28A4E8;
    t6 = 0xC28F8A0;
    for (;;) { t7 = *(int *)t4; t4 = (t4 + 4); if ((unsigned int)((0xC28A4E8 + 9648)) < (unsigned int)t4) break; *(unsigned int *)t6 = t7; t6 = (t6 + 4); }
    *(unsigned int *)(((int)stk + 120)) = 0xC28F8A0;
    *(unsigned int *)(((int)stk + 124)) = 0x25B0;
    t10 = buCalcBackupFileSize((unsigned short)(*(short *)(((int)stk + 108))), (unsigned short)(*(short *)(((int)stk + 116))), 0x25B0);
    t36 = 0xFFFF0000;
    if (t10 == 23) {
        t11 = nlMalloc(((t10 << 8) << 1));
        t33 = 0xFFFF0000;
        if (t11 != 0) {
            t12 = buMakeBackupFileImage(t11, (((int)stk + 12) + 0x14));
            if ((int)t12 <= 0) {
                nlFree(t11);
                t31 = 0xFFFF0000;
            } else {
                syRtcGetDate(((int)stk + 12));
                *(unsigned char *)(((((int)stk + 12) + 0xC) + 0x0)) = (*(signed char *)((((int)stk + 12) + 0x0)));
                *(unsigned char *)(((((int)stk + 12) + 0xC) + 0x1)) = (*(signed char *)((((int)stk + 12) + 0x1)));
                *(unsigned char *)(((((int)stk + 12) + 0xC) + 0x2)) = (*(signed char *)((((int)stk + 12) + 0x2)));
                *(unsigned char *)(((((int)stk + 12) + 0xC) + 0x3)) = (*(signed char *)((((int)stk + 12) + 0x3)));
                *(unsigned char *)(((((int)stk + 12) + 0xC) + 0x4)) = (*(signed char *)((((int)stk + 12) + 0x4)));
                *(unsigned char *)(((((int)stk + 12) + 0xC) + 0x5)) = (*(signed char *)((((int)stk + 12) + 0x5)));
                *(unsigned char *)(((((int)stk + 12) + 0xC) + 0x6)) = (*(signed char *)((((int)stk + 12) + 0x6)));
                *(unsigned char *)(((((int)stk + 12) + 0xC) + 0x7)) = (*(signed char *)((((int)stk + 12) + 0x7)));
                t23 = buSaveFile(a4, 0xC09DB4C, t11, t12);
                if (t23 != 0) {
                    nlFree(t11);
                    t30 = t23;
                } else {
                    for (;;) {
                        if ((buStat(a4)) != -1) {
                            break;
                        }
                    }
                    memmove(0xC28CA98, (((int)stk + 12) + 0xC), 0x8);
                    nlFree(t11);
                    t30 = (buGetLastError());
                }
                t31 = t30;
            }
            t33 = t31;
        }
        t36 = t33;
    }
    return t36;
}
