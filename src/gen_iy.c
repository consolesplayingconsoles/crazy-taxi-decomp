/* Straight-line functions with calls and guards (batch gen_iy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0813d0(int);
int InsertRankRecord(int, int, int, int);
int syRtcGetDate(int);
int CheckRanking(int a4);

int CheckRanking(int a4)
{
    int t0;
    int t12;
    int t19;
    int t31;
    int t32;
    int t56;
    int t48;
    int t40;
    int t29;
    int t30;
    int t24;
    int t25;
    int stk[12] = {0};

    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = *(short *)0xC2A11C4;
    syRtcGetDate((((int)stk + 4) + 0x4));
    *(unsigned char *)(((int)stk + 29)) = 0xFFFFFFFF;
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((*(int *)(((int)stk + 4))) + 0x0)));
    *(unsigned char *)(((int)stk + 28)) = (*(signed char *)0xC179488);
    *(unsigned int *)(((int)stk + 24)) = ((((((((FUN_0c0813d0((0xFFFFF85A + (unsigned short)(*(short *)(((int)stk + 8)))))) << 16) << 8) | ((((unsigned char)(*(signed char *)(((int)stk + 10))) << 16) << 2) << 2)) | ((unsigned char)(*(signed char *)(((int)stk + 11))) << 15)) | (((unsigned char)(*(signed char *)(((int)stk + 12))) << 8) << 2)) | (((unsigned char)(*(signed char *)(((int)stk + 13))) << 2) << 2)) | ((unsigned int)(unsigned char)(*(signed char *)(((int)stk + 14))) >> 2));
    t12 = *(int *)0xC2A11DC;
    if (t12 != 0) {
        if (t12 != 1) {
            if (t12 != 2) {
                *(unsigned char *)(((int)stk + 29)) = (*(int *)0xC1EE340);
                t40 = (InsertRankRecord(0x1, (((int)stk + 4) + 0x10), ((short)((short)(*(int *)0xC2A11E0) * (short)0x78) + (((short)((short)t0 * (short)0x788) + 0xC28A4F8) + 0x8)), 0xA));
            } else {
                t19 = *(int *)0xC2A11E0;
                if ((unsigned int)(t19 - 2) < (unsigned int)0x10) {
                    switch (((t19 - 2) << 1)) {
                        case 0:
                        case 8:
                        case 24:
                        {
                            t24 = 0x1;
                            t25 = ((short)((short)((*(int *)0xC2A11E0) - 2) * (short)0x3C) + (0x3C8 + ((short)((short)t0 * (short)0x788) + 0xC28A4F8)));
                        }
                            break;
                        default:
                        {
                            t24 = 0xFFFFFFFF;
                            t25 = ((short)((short)((*(int *)0xC2A11E0) - 2) * (short)0x3C) + (0x3C8 + ((short)((short)t0 * (short)0x788) + 0xC28A4F8)));
                        }
                            break;
                    }
                    t29 = t24;
                    t30 = t25;
                } else {
                    t29 = 0x1;
                    t30 = ((short)((short)((*(int *)0xC2A11E0) - 2) * (short)0x3C) + (0x3C8 + ((short)((short)t0 * (short)0x788) + 0xC28A4F8)));
                }
                t31 = InsertRankRecord(t29, (((int)stk + 4) + 0x10), t30, 0x5);
                if ((int)t31 >= 0) {
                    t32 = *(int *)0xC2A11E0;
                    *(unsigned int *)((((short)((short)t0 * (short)0x788) + 0xC28A4F8) + 0x4)) = ((*(int *)((((short)((short)t0 * (short)0x788) + 0xC28A4F8) + 0x4))) | (((int)(t32 - 2) >= 0) ? (0x1 << ((t32 - 2) & 31)) : ((-(int)(t32 - 2) & 31) ? ((int)0x1 >> (-(int)(t32 - 2) & 31)) : ((int)0x1 >> 31))));
                }
                t40 = t31;
            }
            t48 = t40;
        } else {
            *(unsigned char *)(((int)stk + 29)) = (*(int *)0xC1EE340);
            t48 = (InsertRankRecord(0x1, (((int)stk + 4) + 0x10), ((short)((short)(*(int *)0xC2A11E0) * (short)0x78) + (0x1E8 + ((short)((short)t0 * (short)0x788) + 0xC28A4F8))), 0xA));
        }
        t56 = t48;
    } else {
        *(unsigned char *)(((int)stk + 29)) = (*(int *)0xC1EE340);
        t56 = (InsertRankRecord(0x1, (((int)stk + 4) + 0x10), ((short)((short)(*(int *)0xC2A11E0) * (short)0x78) + (((short)((short)t0 * (short)0x788) + 0xC28A4F8) + 0x8)), 0xA));
    }
    return t56;
}
