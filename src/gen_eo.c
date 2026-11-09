/* Straight-line functions with calls and guards (batch gen_eo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiDiscardRenderPipeline(void);
int kmiFBControl(int, int, int, int, int, int);
int kmiGetProfileInt(int, int, int);
int kmiInitNTSC(void);
int kmiInitPAL(void);
int kmiInitVGA(void);
int kmiWriteDispModeRegisters(void);
int kmSetDisplayMode(int a4, int a5, int a6, int a7);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int kmSetDisplayMode(int a4, int a5, int a6, int a7)
{
    int t2;
    int t8;
    int t18;
    int t20;
    int t109;
    int t50;
    int t71;
    int t11;
    int t67;
    int t29;
    int stk[16];
    int R1012;
    int R1016;
    int R1020;

    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);

    R1012 = a4;
    R1016 = a6;
    R1020 = a7;
    kmiDiscardRenderPipeline();
    t2 = kmiGetProfileInt(0xC175CFC, 0xC175D10, (R1012));
    R1012 = (kmiGetProfileInt(0xC175CFC, 0xC175D1C, (R1020)));
    R1016 = (kmiGetProfileInt(0xC175CFC, 0xC175D28, (R1016)));
    (((struct o0_uint *)0xC2EA69C)->v) = (0x3 & t2);
    if ((t2 & 0x42) == 66) {
        *(unsigned int *)(((int)stk + 24)) = t2;
        t8 = ((int (*)(int))((*(int *)0xC2EA8F8)))((((int)stk + 12) + 0xC));
        (((struct o14_uint *)0xC2EA69C)->v) = (*(int *)(((int)stk + 28)));
        if (((int)((((struct o14_int *)0xC2EA69C)->v)) >= 0) && (t11 = (((struct o14_int *)0xC2EA69C)->v), (int)t11 <= (int)0x4)) {
        } else {
            (((struct o14_uint *)0xC2EA69C)->v) = 0x1;
        }
    }
    t18 = 0x0;
    if ((a5 != 5) && ((a5 != 4) && ((a5 != 3) && ((a5 != 1) && (a5 != 0))))) {
        t18 = 0x1;
    }
    t20 = 0x0;
    if ((R1012) != 0) {
        t20 = 0x1;
    }
    if ((R1016) != 0) {
        R1012 = 0x1;
    } else {
        R1012 = 0x0;
    }
    t109 = t18;
    if (t18 != 0) {
    } else {
        (((struct o4_uint *)0xC2EA69C)->v) = t2;
        (((struct o8_uint *)0xC2EA69C)->v) = a5;
        (((struct oC_uint *)0xC2EA69C)->v) = (R1012);
        (((struct o10_uint *)0xC2EA69C)->v) = t20;
        if (((((struct o4_int *)0xC2EA69C)->v)) == 1) {
            R1020 = 0x280;
            R1016 = 0x0;
            *(unsigned int *)0xC2EA9A0 = 0x1E0;
            t67 = 0x1E0;
        } else {
            if (((((((struct o4_int *)0xC2EA69C)->v)) & 0x1) != 1) && ((t29 = (((struct o4_int *)0xC2EA69C)->v), (t29 & 44) != 0) && (0x1 != 0))) {
                R1016 = 0x1;
            } else {
                R1016 = 0x0;
            }
            if ((((((struct o4_int *)0xC2EA69C)->v)) & 16) != 0) {
                R1020 = 0x280;
            } else {
                R1020 = 0x140;
            }
            if ((((((struct o4_int *)0xC2EA69C)->v)) & 32) != 0) {
                t67 = 0x1E0;
                if ((((((struct o4_int *)0xC2EA69C)->v)) & 0x42) == 66) {
                    t67 = (*(int *)(((((((struct o14_int *)0xC2EA69C)->v)) << 2) + 0xC2EAB58)));
                }
                *(unsigned int *)0xC2EA9A0 = (((int)((unsigned int)((int)((unsigned int)t67 + (unsigned int)0x0)) + ((((int)0x0 > (int)t67)) ? 1u : 0u))) >> 1);
            } else {
                t67 = 0xF0;
                if ((((((struct o4_int *)0xC2EA69C)->v)) & 0x42) == 66) {
                    t50 = *(int *)(((((((struct o14_int *)0xC2EA69C)->v)) << 2) + 0xC2EAB58));
                    t67 = (((int)((unsigned int)((int)((unsigned int)t50 + (unsigned int)0x0)) + ((((int)0x0 > (int)t50)) ? 1u : 0u))) >> 1);
                }
                *(unsigned int *)0xC2EA9A0 = t67;
            }
        }
        t71 = (((struct o0_int *)0xC2EA69C)->v);
        if (t71 != 1) {
            if (t71 != 0) {
                t109 = 0x1;
                if (t71 != 2) {
                } else {
                    kmiInitPAL();
                    t109 = 0x0;
                }
            } else {
                kmiInitNTSC();
                t109 = 0x0;
            }
        } else {
            kmiInitVGA();
            t109 = 0x0;
        }
        kmiFBControl((R1020), t67, a5, (R1016), ((R1012)), (t20));
        kmiWriteDispModeRegisters();
    }
    return t109;
}
