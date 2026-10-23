/* Straight-line functions with calls and guards (batch gen_jb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiAllocSysConfig(int, int, int, int);
int kmiChkActiveListType(int, int, int, int, int);
int kmiCopyDummyGlobalData(int);
int kmiGetDisplayData(int, int, int);
int kmiGetNativeRegOBPSize(int);
int kmiGetPackOBPParam(int, int, int, int, int, int);
int kmiGetVertexBasePointer(int, int, int, int, int, int, int);
int kmiSetTAEnvironment(int, int, int, int, int, int);
int kmiTAallocEx(int, int, int);
int kmCreateVertexBuffer(int a4, int a5, int a6, int a7, int a8);

int kmCreateVertexBuffer(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t3;
    int t5;
    int t10;
    int t21;
    int t27;
    int t28;
    int t30;
    int t32;
    int t33;
    int t35;
    int t37;
    int t36;
    int t39;
    int t40;
    int t41;
    int t58;
    int t64;
    int t115;
    int t68;
    int t71;
    int t75;
    int t83;
    int t86;
    int t88;
    int t89;
    int t90;
    int t92;
    int t93;
    int t94;
    int t99;
    int t103;
    int t124;
    int t56;
    int t100;
    int t101;
    int t102;
    int stk[24];

    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 20)) = a7;
    t0 = *(int *)0xC174C74;
    *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x0)) = (*(int *)0xC174C70);
    *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x4)) = t0;
    t3 = *(int *)0xC174C7C;
    *(unsigned int *)(((((int)stk + 16) + 0x10) + 0x8)) = (*(int *)0xC174C78);
    *(unsigned int *)(((((int)stk + 16) + 0x10) + 0xC)) = t3;
    *(unsigned int *)0xC2B8C94 = 0x1;
    t5 = a5;
    if (((*(int *)0xC2EA684) & 64) != 0) {
        t5 = (a5 + 0x20);
    }
    *(unsigned int *)0xC2B8C40 = a4;
    *(unsigned int *)0xC2B8C44 = t5;
    *(unsigned int *)0xC2B8C48 = (*(int *)(((int)stk + 16)));
    *(unsigned int *)0xC2B8C4C = (*(int *)(((int)stk + 20)));
    *(unsigned int *)0xC2B8C50 = a8;
    if ((*(int *)0xC177A84) != 0x80000000) {
        t10 = *(int *)0xC177A84;
        *(unsigned int *)0xC177A84 = (t10 | 0x100);
        t21 = 0x0;
        if ((t10 | 0x100) == 0xB00) {
            *(unsigned int *)0xC177A84 = 0x80000000;
            t21 = (kmiAllocSysConfig((*(int *)0xC2B8C94), 0x80000000, (t10 | 0x100), a7));
        }
        t124 = t21;
    } else {
        *(unsigned int *)(((int)stk + 24)) = (kmiChkActiveListType(t5, (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 20))), a8, 0x0));
        *(unsigned int *)((a4 + 0x10)) = (*(int *)0xC2EAAE8);
        *(unsigned int *)0xC177A88 = 0x0;
        t27 = 0xC2B8D28;
        for (;;) {
            if ((unsigned int)t27 >= (unsigned int)0xC2B8D38) {
                break;
            }
            *(unsigned int *)((t27 + 0x0)) = 0x0;
            t27 = (t27 + 0x4);
        }
        t28 = *(int *)(((int)stk + 16));
        t30 = kmiGetPackOBPParam(t5, t28, (*(int *)(((int)stk + 20))), a8, 0x0, 0x0);
        *(unsigned int *)(((int)stk + 28)) = t30;
        kmiGetNativeRegOBPSize(t30);
        t32 = *(int *)(((int)stk + 20));
        t33 = *(int *)(((int)stk + 24));
        *(unsigned int *)(((((int)stk + 16) + 0x20) + 0x0)) = t5;
        *(unsigned int *)(((((int)stk + 16) + 0x20) + 0x4)) = t28;
        *(unsigned int *)(((((int)stk + 16) + 0x20) + 0x8)) = (*(int *)(((int)stk + 20)));
        *(unsigned int *)(((((int)stk + 16) + 0x20) + 0xC)) = a8;
        t35 = *(int *)(((((int)stk + 16) + 0x20) + 0x0));
        t37 = t35;
        if (t35 != 0) {
            t36 = *(int *)(((((int)stk + 16) + 0x20) + 0x0));
            *(unsigned int *)(((((int)stk + 16) + 0x20) + 0x0)) = (t36 - 16);
            t37 = (t36 - 16);
        }
        t39 = t37;
        t40 = ((((int)stk + 16) + 0x20) + 0x4);
        t41 = ((((int)stk + 16) + 0x20) + 0x4);
        for (;;) {
            if ((unsigned int)t40 >= (unsigned int)((((int)stk + 16) + 0x20) + 0x10)) {
                break;
            }
            t39 = (*(int *)((t40 + 0x0)));
            if (t39 != 0) {
                t39 = (*(int *)((t41 + 0x0)));
                t39 = (t39 - 16);
                *(unsigned int *)((t41 + 0x0)) = t39;
            }
            t40 = (t40 + 0x4);
            t41 = (t41 + 0x4);
        }
        *(unsigned int *)(((int)stk + 16)) = (((int)stk + 16) + 0x20);
        *(unsigned int *)0xC2B8C44 = (*(int *)(((((int)stk + 16) + 0x20) + 0x0)));
        *(unsigned int *)0xC2B8C48 = (*(int *)((((((int)stk + 16) + 0x20) + 0x4) + 0x0)));
        *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 16) + 0x20) + 0x8);
        *(unsigned int *)0xC2B8C4C = (*(int *)((((((int)stk + 16) + 0x20) + 0x8) + 0x0)));
        *(unsigned int *)0xC2B8C50 = (*(int *)((((((int)stk + 16) + 0x20) + 0xC) + 0x0)));
        *(unsigned int *)(((int)stk + 16)) = (*(int *)(((*(int *)(((int)stk + 16))) + 0x0)));
        *(unsigned int *)(((int)stk + 20)) = (*(int *)((((((int)stk + 16) + 0x20) + 0x4) + 0x0)));
        *(unsigned int *)(((int)stk + 24)) = (*(int *)(((*(int *)(((int)stk + 24))) + 0x0)));
        t56 = (*(int *)((((((int)stk + 16) + 0x20) + 0xC) + 0x0)));
        t58 = 0x2;
        if ((*(int *)0xC2EA9C4) == 1) {
            t58 = 0x1;
        }
        t64 = kmiGetVertexBasePointer((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 24))), t56, 0x0, ((((t33 << 2) << 1) + (((t5 + t28) + t32) + a8)) + 0xA0), (t58));
        t115 = t64;
        if (t64 == 0) {
            kmiGetDisplayData(0xFF, (*(int *)0xC2B8C58), (*(int *)0xC2B8C64));
            t68 = (((t5 + t28) + t32) + a8);
            if ((unsigned int)(((t5 + t28) + t32) + a8) < (unsigned int)0x10000) {
                t68 = 0x10000;
            }
            *(unsigned int *)0xC2B8C98 = ((t68 << 2) + (*(int *)0xC2B8CA4));
            t71 = *(int *)0xC2B8CA0;
            if ((unsigned int)(*(int *)0xC2B8C98) > (unsigned int)((-t71) + 0x200000)) {
                *(unsigned int *)0xC2B8C98 = ((-t71) + 0x200000);
            }
            t75 = kmiTAallocEx((*(int *)0xC2B8C98), 0xC2B8D20, 0xC2B8D24);
            if (t75 == 0) {
                *(unsigned int *)0xC2EAAD8 = (*(int *)0xC2B8C98);
                t83 = kmiSetTAEnvironment(((unsigned int)(*(int *)0xC2EA6EC) >> 7), ((unsigned int)(*(int *)0xC2EA6F0) >> 7), ((unsigned int)(*(int *)0xC2EA6F4) >> 7), ((unsigned int)(*(int *)0xC2EA6F8) >> 7), ((~(*(int *)0xC2B8C58)) & (*(int *)(((int)stk + 28)))), 0x0);
                *(unsigned int *)0xC2B8CF4 = (*(int *)0xC2B8CCC);
                *(unsigned int *)0xC2B8CF8 = (*(int *)0xC2B8CD0);
                t86 = *(int *)0xC2B8CD4;
                *(unsigned int *)0xC2B8CFC = t86;
                *(unsigned int *)0xC2B8D00 = (*(int *)0xC2B8CD8);
                t88 = t83;
                t89 = t86;
                t90 = 0x0;
                for (;;) {
                    if ((unsigned int)t90 >= (unsigned int)0x10) {
                        break;
                    }
                    t88 = t90;
                    t89 = (*(int *)((0xC2B8CF4 + t88)));
                    t90 = (t90 + 0x4);
                    *(unsigned int *)((0xC2B8D08 + t88)) = t89;
                }
                *(unsigned int *)0xC2B8CA8 = 0x0;
                *(unsigned int *)0xC2B8CAC = 0x0;
                *(unsigned int *)0xC2B8CB0 = 0x0;
                *(unsigned int *)0xC2B8CB4 = 0x0;
                *(unsigned int *)0xC2B8CB8 = 0xC2B8CCC;
                *(unsigned int *)0xC2B8CBC = 0xC2B8CF4;
                if ((unsigned int)0x0 < (unsigned int)t58) {
                    t92 = 0xC2B8CCC;
                    t93 = 0xC2B8CC4;
                    t94 = 0x0;
                    for (;;) {
                        t94 = (t94 + 0x1);
                        *(unsigned int *)((t93 + 0x0)) = t92;
                        t92 = (t92 + 0x14);
                        t93 = (t93 + 0x4);
                        if ((unsigned int)t94 >= (unsigned int)t58) {
                            break;
                        }
                    }
                }
                t99 = (kmiCopyDummyGlobalData(t58));
                t103 = 0x0;
                for (;;) {
                    if ((unsigned int)t103 >= (unsigned int)0x10) {
                        break;
                    }
                    t99 = 0xC2B8D28;
                    t101 = (*(int *)0xC2B8CBC);
                    t102 = (*(int *)((t103 + t99)));
                    t101 = (t101 + t103);
                    t100 = (*(int *)((t101 + 0x0)));
                    t102 = (t102 << 2);
                    t103 = (t103 + 0x4);
                    t100 = (t100 + t102);
                    *(unsigned int *)((t101 + 0x0)) = t100;
                }
                *(unsigned int *)((a4 + 0x0)) = 0xC2B8CF4;
                *(unsigned int *)((a4 + 0x4)) = 0xC178304;
                *(unsigned int *)((a4 + 0x8)) = 0xC2B8CA8;
                *(unsigned int *)((a4 + 0xC)) = 0xC2B8CC4;
            }
            t115 = t75;
        }
        t124 = t115;
    }
    return t124;
}
