/* Straight-line functions with calls and guards (batch gen_ib): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int kmSetHSyncCallback(int, int);
int kmSetVSyncCallback(int, int);
int syChainAddHandler(int a4, int a5, int a6, int a7);

int syChainAddHandler(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t87;
    int t12;
    int t15;
    int t43;
    int t44;
    int t45;
    int t46;
    int t56;
    int t58;
    int t69;
    int t71;
    int t92;
    int t3;
    int stk[12] = {0};

    *(unsigned short *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = _builtin_get_imask();
    *(unsigned short *)(((int)stk + 12)) = t0;
    _builtin_set_imask(0xF);
    t1 = *(short *)(((int)stk + 8));
    t2 = *(int *)((0xC2EBC10 + (((int)t1 >> 4) << 2)));
    t4 = t2;
    t5 = t2;
    for (;;) {
        if (t4 != 0) {
            t6 = *(int *)((t4 + 0xC));
            t3 = t6;
            if ((unsigned int)t3 >= (unsigned int)(a6 | 0x80000000)) {
                break;
            }
            t5 = t4;
            t7 = *(int *)((t4 + 0x4));
            t4 = t7;
            continue;
        }
        break;
    }
    t8 = 0x1;
    for (;;) {
        t9 = *(int *)(((((t8 << 2) << 2) + 0xC2EAC10) + 0xC));
        if ((t9 & 0x80000000) != 0) {
            t8 = (t8 + 0x1);
            if ((unsigned int)t8 >= (unsigned int)0x100) {
                break;
            }
            continue;
        }
        break;
    }
    t87 = 0x0;
    if ((unsigned int)t8 >= (unsigned int)0x100) {
    } else {
        if (t4 == 0) {
            if (t5 == 0) {
                if ((int)t1 < (int)0x900) {
                    t12 = (int)_builtin_get_vbr();
                    *(unsigned int *)(((t12 + ((((0xFFFFFE00 + t1) >> 1) >> 1) >> 1)) + 0x200)) = 0xC1609CA;
                } else {
                    if (t1 == 0x900) {
                        kmSetVSyncCallback(0xC1609EE, 0x0);
                    } else {
                        if (t1 == 0x920) {
                            kmSetHSyncCallback(0xC160A38, 0x0);
                        } else {
                            t15 = (int)_builtin_get_vbr();
                            *(unsigned int *)((t15 + 0x22C)) = 0xC160A5E;
                        }
                    }
                }
                *(unsigned int *)((0xC2EBC10 + (((int)t1 >> 4) << 2))) = (((t8 << 2) << 2) + 0xC2EAC10);
                *(unsigned int *)(((((t8 << 2) << 2) + 0xC2EAC10) + 0x4)) = 0x0;
                t43 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((((t8 << 2) << 2) + 0xC2EAC10) + 0x0)) = t43;
                *(unsigned int *)(((((t8 << 2) << 2) + 0xC2EAC10) + 0x8)) = a7;
                *(unsigned int *)(((((t8 << 2) << 2) + 0xC2EAC10) + 0xC)) = (a6 | 0x80000000);
                t44 = *(short *)(((int)stk + 8));
                if (((int)t1 >> 8) == 10) {
                    t45 = *(int *)0xA05F6920;
                    *(unsigned int *)0xA05F6920 = (t45 | (((int)(((unsigned int)((unsigned int)((unsigned int)(unsigned char)t44 >> 2) >> 2) >> 1) + 0xC) >= 0) ? (0x1 << ((((unsigned int)((unsigned int)((unsigned int)(unsigned char)t44 >> 2) >> 2) >> 1) + 0xC) & 31)) : ((-(int)(((unsigned int)((unsigned int)((unsigned int)(unsigned char)t44 >> 2) >> 2) >> 1) + 0xC) & 31) ? ((int)0x1 >> (-(int)(((unsigned int)((unsigned int)((unsigned int)(unsigned char)t44 >> 2) >> 2) >> 1) + 0xC) & 31)) : ((int)0x1 >> 31))));
                } else {
                    if (((int)t1 >> 8) == 11) {
                        t46 = *(int *)0xA05F6924;
                        *(unsigned int *)0xA05F6924 = (t46 | (((int)((unsigned int)((unsigned int)((unsigned int)(unsigned char)t44 >> 2) >> 2) >> 1) >= 0) ? (0x1 << (((unsigned int)((unsigned int)((unsigned int)(unsigned char)t44 >> 2) >> 2) >> 1) & 31)) : ((-(int)((unsigned int)((unsigned int)((unsigned int)(unsigned char)t44 >> 2) >> 2) >> 1) & 31) ? ((int)0x1 >> (-(int)((unsigned int)((unsigned int)((unsigned int)(unsigned char)t44 >> 2) >> 2) >> 1) & 31)) : ((int)0x1 >> 31))));
                    }
                }
            } else {
                t56 = *(int *)((0xC2EBC10 + (((int)t1 >> 4) << 2)));
                if (t4 == t56) {
                    *(unsigned int *)(((((t8 << 2) << 2) + 0xC2EAC10) + 0x4)) = t4;
                    *(unsigned int *)((0xC2EBC10 + (((int)t1 >> 4) << 2))) = (((t8 << 2) << 2) + 0xC2EAC10);
                } else {
                    *(unsigned int *)((t5 + 0x4)) = (((t8 << 2) << 2) + 0xC2EAC10);
                    *(unsigned int *)(((((t8 << 2) << 2) + 0xC2EAC10) + 0x4)) = t4;
                }
                t58 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((((t8 << 2) << 2) + 0xC2EAC10) + 0x0)) = t58;
                *(unsigned int *)(((((t8 << 2) << 2) + 0xC2EAC10) + 0x8)) = a7;
                *(unsigned int *)(((((t8 << 2) << 2) + 0xC2EAC10) + 0xC)) = (a6 | 0x80000000);
            }
        } else {
            t69 = *(int *)((0xC2EBC10 + (((int)t1 >> 4) << 2)));
            if (t4 == t69) {
                *(unsigned int *)(((((t8 << 2) << 2) + 0xC2EAC10) + 0x4)) = t4;
                *(unsigned int *)((0xC2EBC10 + (((int)t1 >> 4) << 2))) = (((t8 << 2) << 2) + 0xC2EAC10);
            } else {
                *(unsigned int *)((t5 + 0x4)) = (((t8 << 2) << 2) + 0xC2EAC10);
                *(unsigned int *)(((((t8 << 2) << 2) + 0xC2EAC10) + 0x4)) = t4;
            }
            t71 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC2EAC10) + 0x0)) = t71;
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC2EAC10) + 0x8)) = a7;
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC2EAC10) + 0xC)) = (a6 | 0x80000000);
        }
        t87 = t8;
    }
    t92 = *(short *)(((int)stk + 12));
    _builtin_set_imask(((unsigned int)((((unsigned short)t92 & 0xF) << 2) << 2) >> 4));
    return t87;
}
