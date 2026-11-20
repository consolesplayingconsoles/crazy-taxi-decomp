/* Straight-line functions with calls and guards (batch gen_o): generated from the code and checked by tests. Calls are
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
    int stk[31];
    register int t4;
    register int t6;
    register int t10;
    register int t29;
    register int t12;
    register int t26;
    register int t13;
    register int t18;
    register int t7;
    register int t24;
    register int t23;

    memset((((int)stk + 8) + 0x14), 0x0, 0x60);
    strcpy((((int)stk + 8) + 0x14), 0xC0EEC58);
    strcpy((((int)stk + 8) + 0x26), 0xC0EEC68);
    memmove((((int)stk + 8) + 0x48), 0xC0EEC73, 0x10);
    *(unsigned int *)(((int)stk + 96)) = 0xC0EEC83;
    *(unsigned int *)(((int)stk + 100)) = 0xC0EECA3;
    *(unsigned short *)(((int)stk + 104)) = 0x3;
    *(unsigned short *)(((int)stk + 106)) = 0x2;
    *(unsigned int *)(((int)stk + 108)) = 0x0;
    *(unsigned short *)(((int)stk + 112)) = 0x0;
    t4 = 0xC28A4E8;
    t6 = 0xC28F8A0;
    for (;;) { t7 = *(int *)t4; t4 = (t4 + 4); if ((unsigned int)((0xC28A4E8 + 9648)) < (unsigned int)t4) break; *(unsigned int *)t6 = t7; t6 = (t6 + 4); }
    *(unsigned int *)(((int)stk + 116)) = 0xC28F8A0;
    *(unsigned int *)(((int)stk + 120)) = 0x25B0;
    t10 = buCalcBackupFileSize((unsigned short)(*(short *)(((int)stk + 104))), (unsigned short)(*(short *)(((int)stk + 112))), 0x25B0);
    t29 = 0xFFFF0000;
    if (t10 == 23) {
        t12 = nlMalloc(((t10 << 8) << 1));
        t26 = 0xFFFF0000;
        if (t12 != 0) {
            t13 = buMakeBackupFileImage(t12, (((int)stk + 8) + 0x14));
            if ((int)t13 <= 0) {
                nlFree(t12);
                t24 = 0xFFFF0000;
            } else {
                syRtcGetDate(((int)stk + 8));
                { struct mvb8 { char b[8]; }; *(struct mvb8 *)((((int)stk + 8) + 0xC)) = *(struct mvb8 *)(((int)stk + 8)); }
                *(int *)((int)stk + 4) = 0x80000000;
                *(int *)((int)stk + 0) = (((int)stk + 4) + 0x10);
                t23 = buSaveFile(a4, 0xC09DB4C, t12, t13, (((int)stk + 4) + 0x10), 0x80000000);
                if (t23 != 0) {
                    nlFree(t12);
                } else {
                    for (;;) {
                        t18 = buStat(a4);
                        if (t18 != -1) {
                            break;
                        }
                    }
                    memmove(0xC28CA98, (((int)stk + 8) + 0xC), 0x8);
                    nlFree(t12);
                    t23 = (buGetLastError(a4));
                }
                t24 = t23;
            }
            t26 = t24;
        }
        t29 = t26;
    }
    return t29;
}
