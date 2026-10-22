/* Straight-line functions with calls and guards (batch gen_aca): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int BupSave(int, int, int, int);
int FUN_0c081470(int, int);
int buCalcBackupFileSize(int, int, int);
int buMakeBackupFileImage(int, int);
int buStat(int);
int memmove(int, int, int);
int memset(int, int, int);
int nlFree(int);
int nlMalloc(int);
int MakeBackupHeadInfo(int a4, int a5, int a6, int a7);

int MakeBackupHeadInfo(int a4, int a5, int a6, int a7)
{
    int t5;
    int t8;
    int t9;
    int t21;
    int t10;
    int t19;
    int t16;
    int stk[33] = {0};

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    memset((((int)stk + 4) + 0xC), 0x0, 0x60);
    FUN_0c081470((((int)stk + 4) + 0xC), 0xC09DB5C);
    FUN_0c081470((((int)stk + 4) + 0x1E), 0xC09DB6C);
    memmove((((int)stk + 4) + 0x40), 0xC0EEC73, 0x10);
    *(unsigned int *)(((int)stk + 84)) = 0xC0EEC83;
    *(unsigned int *)(((int)stk + 88)) = 0xC0EECA3;
    *(unsigned short *)(((int)stk + 92)) = 0x3;
    *(unsigned short *)(((int)stk + 94)) = 0x2;
    *(unsigned int *)(((int)stk + 96)) = 0x0;
    *(unsigned short *)(((int)stk + 100)) = 0x0;
    *(unsigned int *)(((int)stk + 104)) = (*(int *)(((int)stk + 4)));
    t5 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 108)) = t5;
    t8 = buCalcBackupFileSize((unsigned short)(*(short *)(((int)stk + 92))), (unsigned short)(*(short *)(((int)stk + 100))), t5);
    *(unsigned int *)(((int)stk + 4)) = t8;
    t9 = nlMalloc(((t8 << 8) << 1));
    t21 = 0xFFFFFFFF;
    if (t9 != 0) {
        t10 = buMakeBackupFileImage(t9, (((int)stk + 4) + 0xC));
        if ((int)t10 > 0) {
            if ((BupSave(a4, (*(int *)(((int)stk + 8))), t9, t10)) != 0) {
                nlFree(t9);
                t16 = 0xFFFFFFFF;
            } else {
                for (;;) {
                    if ((buStat(a4)) != -1) {
                        break;
                    }
                }
                nlFree(t9);
                t16 = 0x0;
            }
            t19 = t16;
        } else {
            nlFree(t9);
            t19 = 0xFFFFFFFF;
        }
        t21 = t19;
    }
    return t21;
}
