/* Straight-line functions with calls and guards (batch gen_eg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Bezier(int, int, float);
int FUN_0c0771b0(int, int);
int FUN_0c077210(int, int);
int FUN_0c078a70(int, int, int);
int FUN_0c15e820(int);
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
int FUN_0c065bb8(void);

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
    t5 = FUN_0c15e820((t4 * t3));
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

int FUN_0c065bb8(void)
{
    int t2;
    int t13;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    float u40;
    float u41;
    float u42;
    float u43;
    int t49;
    int t50;
    int t51;
    int t54;
    int t57;
    int t59;
    int t85;
    int t87;
    int t86;
    int stk[47] = {0};

    SetCameraMode(0x1);
    nlPushMatrix(0xC179180);
    t2 = *(int *)0xC2AD578;
    if ((int)t2 <= (int)0x7) {
        if ((int)t2 > (int)0x6E) {
            nlSubVector3op((((int)stk + 4) + 0x74), 0xC2AD554, 0xC179840);
            nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x74), (0x8C + ((int)stk + 4)), 1.0f, 0.049999997f);
            camSetEye((0x8C + ((int)stk + 4)), 0x1);
            nlSubVector3op((((int)stk + 4) + 0x74), 0xC2AD560, 0xC17984C);
            nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x74), (0x80 + ((int)stk + 4)), 1.0f, 0.049999997f);
            camSetTarget((0x80 + ((int)stk + 4)), 0x1);
        }
    } else {
        t13 = *(int *)0xC2AD578;
        if ((int)t13 >= (int)0x50) {
            if ((int)t2 > (int)0x6E) {
                nlSubVector3op((((int)stk + 4) + 0x74), 0xC2AD554, 0xC179840);
                nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x74), (0x8C + ((int)stk + 4)), 1.0f, 0.049999997f);
                camSetEye((0x8C + ((int)stk + 4)), 0x1);
                nlSubVector3op((((int)stk + 4) + 0x74), 0xC2AD560, 0xC17984C);
                nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x74), (0x80 + ((int)stk + 4)), 1.0f, 0.049999997f);
                camSetTarget((0x80 + ((int)stk + 4)), 0x1);
            }
        } else {
            t26 = *(int *)0xC0D5410;
            *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x14)) = t26;
            t27 = *(int *)0xC0D540C;
            *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x10)) = t27;
            t28 = *(int *)0xC0D5408;
            *(unsigned int *)(((((int)stk + 4) + 0x50) + 0xC)) = t28;
            t29 = *(int *)0xC0D5404;
            *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x8)) = t29;
            t30 = *(int *)0xC0D5400;
            *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x4)) = t30;
            t31 = *(int *)0xC0D53FC;
            *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x0)) = t31;
            t32 = *(int *)0xC0D541C;
            *(unsigned int *)(((((int)stk + 4) + 0x44) + 0x8)) = t32;
            t33 = *(int *)0xC0D5418;
            *(unsigned int *)(((((int)stk + 4) + 0x44) + 0x4)) = t33;
            t34 = *(int *)0xC0D5414;
            *(unsigned int *)(((((int)stk + 4) + 0x44) + 0x0)) = t34;
            t35 = *(int *)0xC0D5428;
            *(unsigned int *)(((((int)stk + 4) + 0x38) + 0x8)) = t35;
            t36 = *(int *)0xC0D5424;
            *(unsigned int *)(((((int)stk + 4) + 0x38) + 0x4)) = t36;
            t37 = *(int *)0xC0D5420;
            *(unsigned int *)(((((int)stk + 4) + 0x38) + 0x0)) = t37;
            t38 = *(int *)0xC2AD54C;
            t39 = *(signed char *)((t38 + 0x14B));
            if ((t39 & 4) == 0) {
                u40 = *(float *)(((((int)stk + 4) + 0x50) + 0x0));
                *(float *)(((((int)stk + 4) + 0x50) + 0x0)) = (u40 * (-1.0f));
                u41 = *(float *)(((((int)stk + 4) + 0x50) + 0xC));
                *(float *)(((((int)stk + 4) + 0x50) + 0xC)) = (u41 * (-1.0f));
                u42 = *(float *)(((int)stk + 72));
                *(float *)(((int)stk + 72)) = (u42 * (-1.0f));
                u43 = *(float *)(((int)stk + 60));
                *(float *)(((int)stk + 60)) = (u43 * (-1.0f));
            }
            *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x8);
            t49 = *(int *)0xC2AD55C;
            *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x8)) = t49;
            t50 = *(int *)0xC2AD558;
            *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x4)) = t50;
            t51 = *(int *)0xC2AD554;
            *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = t51;
            *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 4) + 0x8) + 0x24);
            FUN_0c0771b0((((int)stk + 4) + 0x44), ((((int)stk + 4) + 0x8) + 0x24));
            FUN_0c077210((((int)stk + 4) + 0x50), (((int)stk + 4) + 0x74));
            t54 = *(int *)(((int)stk + 4));
            FUN_0c078a70(((((int)stk + 4) + 0x8) + 0xC), t54, (((int)stk + 4) + 0x74));
            FUN_0c077210(((((int)stk + 4) + 0x50) + 0xC), (((int)stk + 4) + 0x74));
            t57 = *(int *)(((int)stk + 8));
            FUN_0c078a70(((((int)stk + 4) + 0x8) + 0x18), t57, (((int)stk + 4) + 0x74));
            t59 = *(int *)0xC2AD578;
            Bezier((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x74), ((float)(t59 - 7) / 72.0f));
            nlSubVector3op((((int)stk + 4) + 0x68), (((int)stk + 4) + 0x74), 0xC179840);
            nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x68), (0x8C + ((int)stk + 4)), 1.0f, 0.299999982f);
            camSetEye((0x8C + ((int)stk + 4)), 0x1);
            FUN_0c0771b0((((int)stk + 4) + 0x38), (((int)stk + 4) + 0x74));
            nlSubVector3op((((int)stk + 4) + 0x68), (((int)stk + 4) + 0x74), 0xC17984C);
            nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x68), (0x80 + ((int)stk + 4)), 1.0f, 0.049999997f);
            camSetTarget((0x80 + ((int)stk + 4)), 0x1);
        }
    }
    nlPopMatrix(0x1);
    t85 = *(int *)0xC2AD590;
    t87 = t85;
    if ((t85 & 2) == 0) {
        t86 = camRestore();
        t87 = t86;
    }
    return t87;
}
