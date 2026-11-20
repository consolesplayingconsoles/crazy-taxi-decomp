/* Straight-line functions with calls and guards (batch gen_apc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiCalcTABufferSize(int);
int kmiCreateRegionArray(int, int, int, int, int, int);
int kmiSetTAEnvironment(int a4, int a5, int a6, int a7, int a8);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int kmiSetTAEnvironment(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t2;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t16;
    int t17;
    int t19;
    int t20;
    int t26;
    int t27;
    int t22;

    *(unsigned int *)0xC2EA6E8 = a8;
    t0 = 0x1;
    if ((a8 & 0x1) != 0) {
        t0 = 0x0;
    }
    (((struct o0_uint *)0xC2EAB2C)->v) = ((unsigned int)(0x10000 & a8) >> 16);
    (((struct o4_uint *)0xC2EAB2C)->v) = ((unsigned int)((unsigned int)(0x60000 & a8) >> 16) >> 1);
    (((struct o8_uint *)0xC2EAB2C)->v) = ((unsigned int)((unsigned int)((unsigned int)(0x180000 & a8) >> 16) >> 2) >> 1);
    (((struct oC_uint *)0xC2EAB2C)->v) = ((unsigned int)(0x600000 & a8) >> 21);
    (((struct o10_uint *)0xC2EAB2C)->v) = ((unsigned int)(0x1800000 & a8) >> 23);
    (((struct o14_uint *)0xC2EAB2C)->v) = ((unsigned int)((unsigned int)((unsigned int)(a8 & 0x6000000) >> 16) >> 8) >> 1);
    t2 = (((struct oC_int *)0xC2EAACC)->v);
    (((struct o0_uint *)0xC2EAACC)->v) = ((((unsigned int)t2 >> 2) << 1) + ((unsigned int)t2 >> 2));
    t5 = kmiCalcTABufferSize((((((struct o10_int *)0xC2EAACC)->v)) * ((((struct o14_int *)0xC2EAACC)->v))));
    t6 = 0x0;
    t7 = 0x0;
    t8 = 0x0;
    t9 = 0x0;
    for (;;) {
        *(unsigned int *)(((((t9 << 2) << 2) << 1) + 0xC2EAAF0)) = ((*(int *)(((((t9 << 2) << 2) << 1) + 0xC2EAAEC))) + ((((struct oC_int *)0xC2EAACC)->v)));
        if (((*(int *)0xC2EA684) & 32) != 0) {
            if (((((struct o18_int *)0xC2EAACC)->v)) != 0) {
                *(unsigned int *)(((((t9 << 2) << 2) << 1) + 0xC2EAAF0)) = ((*(int *)(((((t9 << 2) << 2) << 1) + 0xC2EAAF0))) - 68);
                t16 = (((struct o14_int *)0xC2EAACC)->v);
                t17 = (((struct o10_int *)0xC2EAACC)->v);
                t22 = ((*(int *)(((((t9 << 2) << 2) << 1) + 0xC2EAAF0))) - ((((((t17 * t16) << 1) + (t17 * t16)) << 2) << 2) << 1));
            } else {
                t19 = (((struct o14_int *)0xC2EAACC)->v);
                t20 = (((struct o10_int *)0xC2EAACC)->v);
                t22 = ((*(int *)(((((t9 << 2) << 2) << 1) + 0xC2EAAF0))) - (((((t20 * t19) << 1) + (t20 * t19)) << 2) << 2));
            }
            *(unsigned int *)(((((t9 << 2) << 2) << 1) + 0xC2EAAF0)) = t22;
        } else {
            t26 = (((struct o14_int *)0xC2EAACC)->v);
            t27 = (((struct o10_int *)0xC2EAACC)->v);
            *(unsigned int *)(((((t9 << 2) << 2) << 1) + 0xC2EAAF0)) = ((*(int *)(((((t9 << 2) << 2) << 1) + 0xC2EAAF0))) - (((((t27 * t26) << 1) + (t27 * t26)) << 2) << 1));
        }
        if (((*(int *)0xC2EA684) & 128) != 0) {
            *(unsigned int *)(((((t9 << 2) << 2) << 1) + 0xC2EAAF0)) = ((*(int *)(((((t9 << 2) << 2) << 1) + 0xC2EAAF0))) - 24);
        }
        if (((((struct o0_int *)0xC2EAB2C)->v)) == 0) {
            *(unsigned int *)(((0xC2EAAF8 + t6) + 0x0)) = (((*(int *)((t6 + 0xC2EAAEC))) + ((((struct o0_int *)0xC2EAACC)->v))) & 0xFFFFFFE0);
            *(unsigned int *)((t6 + 0xC2EAAFC)) = (((*(int *)((t6 + 0xC2EAAF0))) - t5) & 0xFFFFFF80);
            *(unsigned int *)((t6 + 0xC2EAB00)) = ((*(int *)((t6 + 0xC2EAAF8))) + t5);
        } else {
            *(unsigned int *)((t7 + 0xC2EAAF8)) = (((*(int *)((t7 + 0xC2EAAF0))) - t5) & 0xFFFFFF80);
            *(unsigned int *)((t7 + 0xC2EAAFC)) = (((*(int *)((t7 + 0xC2EAAEC))) + ((((struct o0_int *)0xC2EAACC)->v))) & 0xFFFFFFE0);
            *(unsigned int *)((t7 + 0xC2EAB00)) = (*(int *)((t7 + 0xC2EAAF8)));
        }
        *(unsigned int *)((t8 + 0xC2EAB04)) = (*(int *)((t8 + 0xC2EAAEC)));
        *(unsigned int *)((t8 + 0xC2EAB08)) = (((*(int *)((t8 + 0xC2EAAEC))) + ((((struct o0_int *)0xC2EAACC)->v))) - 256);
        t9 = (t9 + 0x1);
        t8 = (t8 + 0x20);
        t7 = (t7 + 0x20);
        t6 = (t6 + 0x20);
        if ((int)t9 < (int)0x2) continue;
        break;
    }
    kmiCreateRegionArray(((((struct o10_int *)0xC2EAACC)->v)), ((((struct o14_int *)0xC2EAACC)->v)), 0x0, 0x1, 0x0, (t0));
    return (kmiCreateRegionArray(((((struct o10_int *)0xC2EAACC)->v)), ((((struct o14_int *)0xC2EAACC)->v)), 0x0, 0x1, 0x1, (t0)));
}
