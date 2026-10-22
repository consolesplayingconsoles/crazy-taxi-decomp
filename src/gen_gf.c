/* Straight-line functions with calls and guards (batch gen_gf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int InsertRankRecord(int, int, int, int);
int FUN_0c0813d0(int);
int syRtcGetDate(int);
int CheckRanking(int a4);

int CheckRanking(int a4)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t23;
    int t28;
    int t29;
    int t30;
    int t39;
    int t40;
    int t41;
    int t47;
    int t48;
    int t49;
    int t53;
    int t45;
    int t37;
    int t26;
    int t27;
    int t21;
    int t22;
    int stk[12] = {0};

    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = *(short *)0xC2A11C4;
    syRtcGetDate((((int)stk + 4) + 0x4));
    *(unsigned char *)(((int)stk + 29)) = 0xFFFFFFFF;
    t2 = *(int *)(((int)stk + 4));
    t3 = *(int *)((t2 + 0x0));
    *(unsigned int *)(((int)stk + 20)) = t3;
    t4 = *(signed char *)0xC179488;
    *(unsigned char *)(((int)stk + 28)) = t4;
    t5 = *(short *)(((int)stk + 8));
    t6 = FUN_0c0813d0((0xFFFFF85A + (unsigned short)t5));
    t7 = *(signed char *)(((int)stk + 10));
    t8 = *(signed char *)(((int)stk + 11));
    t9 = *(signed char *)(((int)stk + 12));
    t10 = *(signed char *)(((int)stk + 13));
    t11 = *(signed char *)(((int)stk + 14));
    *(unsigned int *)(((int)stk + 24)) = (((((((t6 << 16) << 8) | ((((unsigned char)t7 << 16) << 2) << 2)) | ((unsigned char)t8 << 15)) | (((unsigned char)t9 << 8) << 2)) | (((unsigned char)t10 << 2) << 2)) | ((unsigned int)(unsigned char)t11 >> 2));
    t12 = *(int *)0xC2A11DC;
    if (t12 != 0) {
        if (t12 != 1) {
            if (t12 != 2) {
                t13 = *(int *)0xC1EE340;
                *(unsigned char *)(((int)stk + 29)) = t13;
                t14 = *(int *)0xC2A11E0;
                t15 = InsertRankRecord(0x1, (((int)stk + 4) + 0x10), ((short)((short)t14 * (short)0x78) + (((short)((short)t0 * (short)0x788) + 0xC28A4F8) + 0x8)), 0xA);
                t37 = t15;
            } else {
                t16 = *(int *)0xC2A11E0;
                if ((unsigned int)(t16 - 2) < (unsigned int)0x10) {
                    switch (((t16 - 2) << 1)) {
                        case 0:
                        case 8:
                        case 24:
                        {
                            t17 = *(int *)0xC2A11E0;
                            t21 = 0x1;
                            t22 = ((short)((short)(t17 - 2) * (short)0x3C) + (0x3C8 + ((short)((short)t0 * (short)0x788) + 0xC28A4F8)));
                        }
                            break;
                        default:
                        {
                            t18 = *(int *)0xC2A11E0;
                            t21 = 0xFFFFFFFF;
                            t22 = ((short)((short)(t18 - 2) * (short)0x3C) + (0x3C8 + ((short)((short)t0 * (short)0x788) + 0xC28A4F8)));
                        }
                            break;
                    }
                    t26 = t21;
                    t27 = t22;
                } else {
                    t23 = *(int *)0xC2A11E0;
                    t26 = 0x1;
                    t27 = ((short)((short)(t23 - 2) * (short)0x3C) + (0x3C8 + ((short)((short)t0 * (short)0x788) + 0xC28A4F8)));
                }
                t28 = InsertRankRecord(t26, (((int)stk + 4) + 0x10), t27, 0x5);
                if ((int)t28 >= 0) {
                    t29 = *(int *)0xC2A11E0;
                    t30 = *(int *)((((short)((short)t0 * (short)0x788) + 0xC28A4F8) + 0x4));
                    *(unsigned int *)((((short)((short)t0 * (short)0x788) + 0xC28A4F8) + 0x4)) = (t30 | (((int)(t29 - 2) >= 0) ? (0x1 << ((t29 - 2) & 31)) : ((-(int)(t29 - 2) & 31) ? ((int)0x1 >> (-(int)(t29 - 2) & 31)) : ((int)0x1 >> 31))));
                }
                t37 = t28;
            }
            t45 = t37;
        } else {
            t39 = *(int *)0xC1EE340;
            *(unsigned char *)(((int)stk + 29)) = t39;
            t40 = *(int *)0xC2A11E0;
            t41 = InsertRankRecord(0x1, (((int)stk + 4) + 0x10), ((short)((short)t40 * (short)0x78) + (0x1E8 + ((short)((short)t0 * (short)0x788) + 0xC28A4F8))), 0xA);
            t45 = t41;
        }
        t53 = t45;
    } else {
        t47 = *(int *)0xC1EE340;
        *(unsigned char *)(((int)stk + 29)) = t47;
        t48 = *(int *)0xC2A11E0;
        t49 = InsertRankRecord(0x1, (((int)stk + 4) + 0x10), ((short)((short)t48 * (short)0x78) + (((short)((short)t0 * (short)0x788) + 0xC28A4F8) + 0x8)), 0xA);
        t53 = t49;
    }
    return t53;
}
