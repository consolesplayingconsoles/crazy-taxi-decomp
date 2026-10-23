/* Straight-line functions with calls and guards (batch gen_eg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Bezier(int, int, float);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlAddVector3op(int, int, int);
int kmiCalcTABufferSize(int);
int SetCameraMode(int);
int camRestore(void);
int camSetEye(int, int);
int camSetTarget(int, int);
int kmiCreateRegionArray(int, int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlSubVector3op(int, int, int);
int kmiSetTAEnvironment(int a4, int a5, int a6, int a7, int a8);
int camGetOffShot4(void);

int kmiSetTAEnvironment(int a4, int a5, int a6, int a7, int a8)
{
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
    int t19;
    int t20;
    int t25;
    int t26;
    int t27;
    int t32;
    int t33;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t50;
    int t51;
    int t52;
    int t54;
    int t55;
    int t57;
    int t58;
    int t59;
    int t21;

    *(unsigned int *)0xC2EA6E8 = a8;
    
    *(unsigned int *)0xC2EAB2C = ((unsigned int)(0x10000 & a8) >> 16);
    *(unsigned int *)0xC2EAB30 = ((unsigned int)((unsigned int)(0x60000 & a8) >> 16) >> 1);
    *(unsigned int *)0xC2EAB34 = ((unsigned int)((unsigned int)((unsigned int)(0x180000 & a8) >> 16) >> 2) >> 1);
    *(unsigned int *)0xC2EAB38 = ((unsigned int)(0x600000 & a8) >> 21);
    *(unsigned int *)0xC2EAB3C = ((unsigned int)(0x1800000 & a8) >> 23);
    *(unsigned int *)0xC2EAB40 = ((unsigned int)((unsigned int)((unsigned int)(a8 & 0x6000000) >> 16) >> 8) >> 1);
    t2 = *(int *)0xC2EAAD8;
    *(unsigned int *)0xC2EAACC = ((((unsigned int)t2 >> 2) << 1) + ((unsigned int)t2 >> 2));
    t3 = *(int *)0xC2EAAE0;
    t4 = *(int *)0xC2EAADC;
    t5 = kmiCalcTABufferSize((t4 * t3));
    t6 = 0x0;
    t7 = 0x0;
    t8 = 0x0;
    t9 = 0x0;
    for (;;) {
        t10 = *(int *)0xC2EAAD8;
        t11 = *(int *)(((((t9 << 2) << 2) << 1) + 0xC2EAAEC));
        *(unsigned int *)(((((t9 << 2) << 2) << 1) + 0xC2EAAF0)) = (t11 + t10);
        t12 = *(int *)0xC2EA684;
        if ((t12 & 32) != 0) {
            t13 = *(int *)0xC2EAAE4;
            if (t13 != 0) {
                t14 = *(int *)(((((t9 << 2) << 2) << 1) + 0xC2EAAF0));
                *(unsigned int *)(((((t9 << 2) << 2) << 1) + 0xC2EAAF0)) = (t14 - 68);
                t15 = *(int *)0xC2EAAE0;
                t16 = *(int *)0xC2EAADC;
                t17 = *(int *)(((((t9 << 2) << 2) << 1) + 0xC2EAAF0));
                t21 = (t17 - ((((((t16 * t15) << 1) + (t16 * t15)) << 2) << 2) << 1));
            } else {
                t18 = *(int *)0xC2EAAE0;
                t19 = *(int *)0xC2EAADC;
                t20 = *(int *)(((((t9 << 2) << 2) << 1) + 0xC2EAAF0));
                t21 = (t20 - (((((t19 * t18) << 1) + (t19 * t18)) << 2) << 2));
            }
            *(unsigned int *)(((((t9 << 2) << 2) << 1) + 0xC2EAAF0)) = t21;
        } else {
            t25 = *(int *)0xC2EAAE0;
            t26 = *(int *)0xC2EAADC;
            t27 = *(int *)(((((t9 << 2) << 2) << 1) + 0xC2EAAF0));
            *(unsigned int *)(((((t9 << 2) << 2) << 1) + 0xC2EAAF0)) = (t27 - (((((t26 * t25) << 1) + (t26 * t25)) << 2) << 1));
        }
        t32 = *(int *)0xC2EA684;
        if ((t32 & 128) != 0) {
            t33 = *(int *)(((((t9 << 2) << 2) << 1) + 0xC2EAAF0));
            *(unsigned int *)(((((t9 << 2) << 2) << 1) + 0xC2EAAF0)) = (t33 - 24);
        }
        t37 = *(int *)0xC2EAB2C;
        if (t37 == 0) {
            t38 = *(int *)0xC2EAACC;
            t39 = *(int *)((t6 + 0xC2EAAEC));
            *(unsigned int *)(((0xC2EAAF8 + t6) + 0x0)) = ((t39 + t38) & 0xFFFFFFE0);
            t40 = *(int *)((t6 + 0xC2EAAF0));
            *(unsigned int *)((t6 + 0xC2EAAFC)) = ((t40 - t5) & 0xFFFFFF80);
            t41 = *(int *)((t6 + 0xC2EAAF8));
            *(unsigned int *)((t6 + 0xC2EAB00)) = (t41 + t5);
        } else {
            t42 = *(int *)((t7 + 0xC2EAAF0));
            *(unsigned int *)((t7 + 0xC2EAAF8)) = ((t42 - t5) & 0xFFFFFF80);
            t43 = *(int *)0xC2EAACC;
            t44 = *(int *)((t7 + 0xC2EAAEC));
            *(unsigned int *)((t7 + 0xC2EAAFC)) = ((t44 + t43) & 0xFFFFFFE0);
            t45 = *(int *)((t7 + 0xC2EAAF8));
            *(unsigned int *)((t7 + 0xC2EAB00)) = t45;
        }
        t50 = *(int *)((t8 + 0xC2EAAEC));
        *(unsigned int *)((t8 + 0xC2EAB04)) = t50;
        t51 = *(int *)0xC2EAACC;
        t52 = *(int *)((t8 + 0xC2EAAEC));
        *(unsigned int *)((t8 + 0xC2EAB08)) = ((t52 + t51) - 256);
        t9 = (t9 + 0x1);
        t8 = (t8 + 0x20);
        t7 = (t7 + 0x20);
        t6 = (t6 + 0x20);
        if ((int)t9 < (int)0x2) continue;
        break;
    }
    t54 = *(int *)0xC2EAAE0;
    t55 = *(int *)0xC2EAADC;
    kmiCreateRegionArray(t55, t54, 0x0);
    t57 = *(int *)0xC2EAAE0;
    t58 = *(int *)0xC2EAADC;
    t59 = kmiCreateRegionArray(t58, t57, 0x0);
    return t59;
}

