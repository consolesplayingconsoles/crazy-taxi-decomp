/* Straight-line functions with calls and guards (batch gen_acz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int buCalcBackupFileSize(int, int, int);
int buGetLastError(int);
int buMakeBackupFileImage(int, int);
int buSaveFile(int, int, int, int, int, int);
int buStat(int);
int memmove(int, int, int);
int memset(int, int, int);
int nlFree(int);
int nlMalloc(int);
int strcpy(int, int);
int syRtcGetDate(int);
int SaveBackupData(int a4);

int SaveBackupData(int a4)
{
    int t4;
    int t6;
    int t10;
    int t28;
    int t11;
    int t25;
    int t12;
    int t15;
    int t7;
    int t23;
    int t22;
    int stk[38];
    int R1100;
    int R1104;
    int R1112;
    int R1120;
    int R1124;

    R1100 = *(int *)((int)stk + 100);
    R1104 = *(int *)((int)stk + 104);
    R1112 = *(int *)((int)stk + 112);
    R1120 = *(int *)((int)stk + 120);
    R1124 = *(int *)((int)stk + 124);

    memset((((int)stk + 12) + 0x14), 0x0, 0x60);
    strcpy((((int)stk + 12) + 0x14), 0xC0EEC58);
    strcpy((((int)stk + 12) + 0x26), 0xC0EEC68);
    memmove((((int)stk + 12) + 0x48), 0xC0EEC73, 0x10);
    R1100 = 0xC0EEC83;
    R1104 = 0xC0EECA3;
    *(unsigned short *)(((int)stk + 108)) = 0x3;
    *(unsigned short *)(((int)stk + 110)) = 0x2;
    R1112 = 0x0;
    *(unsigned short *)(((int)stk + 116)) = 0x0;
    t4 = 0xC28A4E8;
    t6 = 0xC28F8A0;
    for (;;) { t7 = *(int *)t4; t4 = (t4 + 4); if ((unsigned int)((0xC28A4E8 + 9648)) < (unsigned int)t4) break; *(unsigned int *)t6 = t7; t6 = (t6 + 4); }
    R1120 = 0xC28F8A0;
    R1124 = 0x25B0;
    t10 = buCalcBackupFileSize((unsigned short)(*(short *)(((int)stk + 108))), (unsigned short)(*(short *)(((int)stk + 116))), 0x25B0);
    t28 = 0xFFFF0000;
    if (t10 == 23) {
        t11 = nlMalloc(((t10 << 8) << 1));
        t25 = 0xFFFF0000;
        if (t11 != 0) {
            t12 = buMakeBackupFileImage(t11, (((int)stk + 12) + 0x14));
            if ((int)t12 <= 0) {
                nlFree(t11);
                t23 = 0xFFFF0000;
            } else {
                syRtcGetDate(((int)stk + 12));
                { struct mvb8 { char b[8]; }; *(struct mvb8 *)((((int)stk + 12) + 0xC)) = *(struct mvb8 *)(((int)stk + 12)); }
                t15 = buSaveFile(a4, 0xC09DB4C, t11, t12, (((int)stk + 8) + 0x10), 0x80000000);
                if (t15 != 0) {
                    nlFree(t11);
                    t22 = t15;
                } else {
                    for (;;) {
                        if ((buStat(a4)) != -1) {
                            break;
                        }
                    }
                    memmove(0xC28CA98, (((int)stk + 12) + 0xC), 0x8);
                    nlFree(t11);
                    t22 = (buGetLastError(a4));
                }
                t23 = t22;
            }
            t25 = t23;
        }
        t28 = t25;
    }
    return t28;
}
