/* Straight-line functions with calls and guards (batch gen_eo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiDiscardRenderPipeline(int, int, int, int);
int kmiFBControl(int, int, int, int, int, int);
int kmiGetProfileInt(int, int, int);
int kmiInitNTSC(void);
int kmiInitPAL(void);
int kmiInitVGA(void);
int kmiWriteDispModeRegisters(void);
int kmSetDisplayMode(int a4, int a5, int a6, int a7);

int kmSetDisplayMode(int a4, int a5, int a6, int a7)
{
    int t2;
    int t8;
    int t18;
    int t20;
    int t109;
    int t43;
    int t56;
    int t50;
    int t71;
    int t75;
    int t11;
    int t67;
    int t29;
    int t61;
    int t93;
    int t84;
    int stk[16];

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 20)) = a7;
    kmiDiscardRenderPipeline(a4, a5, a6, a7);
    t2 = kmiGetProfileInt(0xC175CFC, 0xC175D10, (*(int *)(((int)stk + 12))));
    *(unsigned int *)(((int)stk + 12)) = (kmiGetProfileInt(0xC175CFC, 0xC175D1C, (*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 16)) = (kmiGetProfileInt(0xC175CFC, 0xC175D28, (*(int *)(((int)stk + 16)))));
    *(unsigned int *)0xC2EA69C = (0x3 & t2);
    if ((t2 & 0x42) == 66) {
        *(unsigned int *)(((int)stk + 24)) = t2;
        t8 = ((int (*)(int))((*(int *)0xC2EA8F8)))((((int)stk + 12) + 0xC));
        *(unsigned int *)0xC2EA6B0 = (*(int *)(((int)stk + 28)));
        if (((int)(*(int *)0xC2EA6B0) >= 0) && (t11 = *(int *)0xC2EA6B0, (int)t11 <= (int)0x4)) {
        } else {
            *(unsigned int *)0xC2EA6B0 = 0x1;
        }
    }
    t18 = 0x0;
    if ((a5 != 5) && ((a5 != 4) && ((a5 != 3) && ((a5 != 1) && (a5 != 0))))) {
        t18 = 0x1;
    }
    t20 = 0x0;
    if ((*(int *)(((int)stk + 12))) != 0) {
        t20 = 0x1;
    }
    if ((*(int *)(((int)stk + 16))) != 0) {
        *(unsigned int *)(((int)stk + 12)) = 0x1;
    } else {
        *(unsigned int *)(((int)stk + 12)) = 0x0;
    }
    t109 = t18;
    if (t18 != 0) {
    } else {
        *(unsigned int *)0xC2EA6A0 = t2;
        *(unsigned int *)0xC2EA6A4 = a5;
        *(unsigned int *)0xC2EA6A8 = (*(int *)(((int)stk + 12)));
        *(unsigned int *)0xC2EA6AC = t20;
        if ((*(int *)0xC2EA6A0) == 1) {
            *(unsigned int *)(((int)stk + 20)) = 0x280;
            *(unsigned int *)(((int)stk + 16)) = 0x0;
            *(unsigned int *)0xC2EA9A0 = 0x1E0;
            t67 = 0x1E0;
        } else {
            if ((((*(int *)0xC2EA6A0) & 0x1) != 1) && ((t29 = *(int *)0xC2EA6A0, (t29 & 44) != 0) && (0x1 != 0))) {
                *(unsigned int *)(((int)stk + 16)) = 0x1;
            } else {
                *(unsigned int *)(((int)stk + 16)) = 0x0;
            }
            if (((*(int *)0xC2EA6A0) & 16) != 0) {
                *(unsigned int *)(((int)stk + 20)) = 0x280;
            } else {
                *(unsigned int *)(((int)stk + 20)) = 0x140;
            }
            if (((*(int *)0xC2EA6A0) & 32) != 0) {
                t43 = 0x1E0;
                if (((*(int *)0xC2EA6A0) & 0x42) == 66) {
                    t43 = (*(int *)((((*(int *)0xC2EA6B0) << 2) + 0xC2EAB58)));
                }
                *(unsigned int *)0xC2EA9A0 = (((int)((unsigned int)((int)((unsigned int)t43 + (unsigned int)0x0)) + ((((int)0x0 > (int)t43)) ? 1u : 0u))) >> 1);
                t61 = t43;
            } else {
                t56 = 0xF0;
                if (((*(int *)0xC2EA6A0) & 0x42) == 66) {
                    t50 = *(int *)((((*(int *)0xC2EA6B0) << 2) + 0xC2EAB58));
                    t56 = (((int)((unsigned int)((int)((unsigned int)t50 + (unsigned int)0x0)) + ((((int)0x0 > (int)t50)) ? 1u : 0u))) >> 1);
                }
                *(unsigned int *)0xC2EA9A0 = t56;
                t61 = t56;
            }
            t67 = t61;
        }
        t71 = *(int *)0xC2EA69C;
        if (t71 != 1) {
            if (t71 != 0) {
                t75 = 0x1;
                if (t71 != 2) {
                } else {
                    kmiInitPAL();
                    t75 = 0x0;
                }
                t84 = t75;
            } else {
                kmiInitNTSC();
                t84 = 0x0;
            }
            t93 = t84;
        } else {
            kmiInitVGA();
            t93 = 0x0;
        }
        kmiFBControl((*(int *)(((int)stk + 20))), t67, a5, (*(int *)(((int)stk + 16))), ((*(int *)(((int)stk + 12)))), (t20));
        kmiWriteDispModeRegisters();
        t109 = t93;
    }
    return t109;
}
