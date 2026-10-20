/* Straight-line functions with calls and guards (batch gen_cz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c07fab0(int, int);
int FUN_0c07fd00(int);
int FUN_0c07fd30(int);
int FUN_0c07fd80(int);
int FUN_0c17190c(int);
int FUN_0c171cfe(int, int);
int FUN_0c171d48(int, int);
int FUN_0c171db0(int, int);
int FUN_0c171de4(int, int);
int FUN_0c171ee8(int, int, int);
int FUN_0c1721e0(int, int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int memset(int, int, int);
int mwRnaErrCallFunc(int, ...);
float nlLength(int, int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlTranslateV(int);
int nlsndG2DmaHandleClose(int);
int nlsndStreamGenerateHdInfo(int);
int FUN_0c171b2c(int a4);
int FUN_0c171c0c(int a4);
int FUN_0c14f626(int a4);
float Put_Transporter(int a4);

int FUN_0c171b2c(int a4)
{
    int t0;
    int t1;
    int t2;
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
    int t20;
    int t23;
    int t3;

    if (a4 != 0) {
        t0 = *(int *)((a4 + 0x18));
        if (t0 != 0) {
            t1 = *(short *)((a4 + 0x6));
            t2 = FUN_0c07fd80(t1);
            t3 = t2;
        }
        t6 = t3;
        t7 = 0x0;
        for (;;) {
            t8 = *(int *)((a4 + 0x8));
            if ((int)t7 >= (int)t8) {
                break;
            }
            t9 = *(int *)((((t7 << 2) + (a4 + 0x2C)) + 0x0));
            t10 = nlsndG2DmaHandleClose(t9);
            t6 = t10;
            if ((int)t6 < 0) {
                t11 = mwRnaErrCallFunc(0xC176BE0);
                t6 = t11;
            }
            t7 = (t7 + 0x1);
        }
        t12 = t6;
        t13 = 0x0;
        for (;;) {
            t14 = *(int *)((a4 + 0x8));
            if ((int)t13 >= (int)t14) {
                break;
            }
            t15 = *(int *)((((t13 << 2) + (a4 + 0x34)) + 0x0));
            t16 = nlsndG2DmaHandleClose(t15);
            t12 = t16;
            if ((int)t12 < 0) {
                t17 = mwRnaErrCallFunc(0xC176BE0);
                t12 = t17;
            }
            t13 = (t13 + 0x1);
        }
        t18 = *(short *)((a4 + 0x6));
        FUN_0c07fd00(t18);
        t20 = *(int *)((a4 + 0x1C));
        FUN_0c17190c(t20);
        *(unsigned int *)((a4 + 0x8)) = 0x0;
        *(unsigned int *)((a4 + 0xC)) = 0x0;
        memset(a4, 0x0, 0x68);
        *(unsigned char *)((a4 + 0x4)) = 0x0;
        t23 = 0x0;
    }
    return t23;
}

int FUN_0c171c0c(int a4)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t6;
    int t8;
    int t10;
    int t12;
    int t14;
    int t16;
    int t17;
    int t19;
    int t20;
    int t22;
    int t23;
    int t25;
    int t29;
    int t30;
    int t31;
    int t32;
    int t34;
    int t35;

    t0 = *(signed char *)((a4 + 0x5));
    if (t0 == 0) {
        t1 = *(int *)((a4 + 0x1C));
        t2 = *(int *)((t1 + 0x4));
        nlsndStreamGenerateHdInfo(t2);
        t4 = *(int *)((a4 + 0x14));
        FUN_0c171d48(a4, t4);
        t6 = *(int *)((a4 + 0x10));
        FUN_0c171db0(a4, t6);
        t8 = *(int *)((a4 + 0xC));
        FUN_0c171cfe(a4, t8);
        t10 = *(int *)((a4 + 0x3C));
        FUN_0c171de4(a4, t10);
        t12 = *(int *)(((a4 + 0x40) + 0x0));
        FUN_0c171ee8(a4, 0x0, t12);
        t14 = *(int *)((a4 + 0x44));
        FUN_0c171ee8(a4, 0x1, t14);
        t16 = *(int *)((a4 + 0x4C));
        t17 = *(int *)((a4 + 0x48));
        FUN_0c1721e0(a4, 0x0, t17, t16);
        t19 = *(int *)((a4 + 0x54));
        t20 = *(int *)((a4 + 0x50));
        FUN_0c1721e0(a4, 0x1, t20, t19);
        t22 = *(short *)((a4 + 0x5A));
        t23 = *(short *)((a4 + 0x58));
        FUN_0c1721e0(a4, 0x3, t23, t22);
        t25 = *(int *)((a4 + 0x5C));
        FUN_0c1721e0(a4, 0x2, t25, 0x0);
    }
    t29 = 0x2710;
    for (;;) {
        t29 = (t29 - 0x1);
        if (t29 == 0) {
            break;
        }
    }
    t30 = *(int *)((a4 + 0x1C));
    t31 = *(short *)((a4 + 0x6));
    t32 = *(int *)((t30 + 0x4));
    FUN_0c07fab0(t31, t32);
    t34 = *(short *)((a4 + 0x6));
    t35 = FUN_0c07fd30(t34);
    *(unsigned int *)((a4 + 0x18)) = 0x1;
    return t35;
}

int FUN_0c14f626(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t13;
    int stk[3] = {0};

    t0 = _builtin_get_imask();
    *(unsigned short *)(((int)stk + 4)) = t0;
    _builtin_set_imask(0xF);
    t1 = *(short *)(((int)stk + 4));
    t2 = *(int *)0xC2B9358;
    t3 = *(int *)((t2 + 0x0));
    t4 = t3;
    t5 = t2;
    for (;;) {
        t6 = *(int *)((t4 + 0x4));
        if ((unsigned int)t6 >= (unsigned int)(((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) {
            break;
        }
        if (t4 == t2) {
            _builtin_set_imask(((unsigned int)((((unsigned short)t1 & 0xF) << 2) << 2) >> 4));
            return 0x0;
        }
        t5 = t4;
        t7 = *(int *)((t4 + 0x0));
        t4 = t7;
    }
    t8 = *(int *)((t4 + 0x4));
    if (t8 == (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) {
        t9 = *(int *)((t4 + 0x0));
        *(unsigned int *)((t5 + 0x0)) = t9;
        t13 = t4;
    } else {
        *(unsigned int *)((t4 + 0x4)) = (t8 - (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1));
        *(unsigned int *)(((t4 + ((((t8 - (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) << 2) << 2) << 1)) + 0x4)) = (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1);
        t13 = (t4 + ((((t8 - (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) << 2) << 2) << 1));
    }
    *(unsigned int *)0xC2B9358 = t5;
    _builtin_set_imask(((unsigned int)((((unsigned short)t1 & 0xF) << 2) << 2) >> 4));
    return (t13 + 0x20);
}

float Put_Transporter(int a4)
{
    int t0;
    int t2;
    int t3;
    int t8;
    float t9;
    float u10;
    int t11;
    int t12;
    int t13;
    float u14;
    int t15;
    float u16;
    int t17;
    float u18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t1;
    int t4;
    float u5;
    float u6;
    float u7;
    int t31;
    int t34;
    float u35;
    float u36;
    int t29;
    int stk[14] = {0};

    t0 = 0xC04EF58;
    t2 = a4;
    t3 = 0x0;
    for (;;) {
        t8 = *(int *)0xC0C83EC;
        if ((int)t3 >= (int)t8) {
            break;
        }
        t2 = t3;
        t2 = (t2 << 2);
        t2 = (t2 + t3);
        t2 = (t2 << 2);
        t2 = (short)t2;
        *(unsigned int *)(((int)stk + 4)) = t2;
        t2 = (t2 + 0xC1187E0);
        t9 = nlLength(t2, 0xC179840);
        t0 = t9;
        t0 = 0xC04EF64;
        u5 = t9;
        u7 = t9;
        u10 = *(float *)((t0 + 0x0));
        u6 = u10;
        if (u6 > u7) {
            t11 = nlPushUnitMatrix();
            t0 = t11;
            t12 = *(int *)(((int)stk + 4));
            t4 = t12;
            t4 = (t4 + 0xC1187E0);
            t2 = t4;
            t13 = nlTranslateV(t2);
            t0 = t13;
            t0 = 0x10;
            u14 = *(float *)((t4 + t0));
            u6 = u14;
            u6 = (u6 * 65536.0f);
            u6 = (u6 / 360.0f);
            u6 = (u6 + 0.5f);
            t2 = (int)u6;
            t2 = (t2 & 0xFFFF);
            t15 = nlRotateAY(t2);
            t0 = t15;
            t0 = 0xC;
            u16 = *(float *)((t4 + t0));
            u6 = u16;
            u6 = (u6 * 65536.0f);
            u6 = (u6 / 360.0f);
            u6 = (u6 + 0.5f);
            t2 = (int)u6;
            t2 = (t2 & 0xFFFF);
            t17 = nlRotateAX(t2);
            t0 = t17;
            t0 = 0xC04EF78;
            t4 = t3;
            u18 = *(float *)((t0 + 0x0));
            u6 = u18;
            t4 = (t4 << 2);
            if (u7 > u6) {
                t2 = 0xC4537F8;
                t19 = nlObjPutUseViewMatrix(t2);
                t0 = t19;
                t0 = t4;
                t20 = *(int *)((0xC2A6F60 + t0));
                t0 = t20;
                if (t0 == 1) {
                    t2 = 0xC457018;
                    t21 = nlObjPutUseViewMatrix(t2);
                    t0 = t21;
                }
            } else {
                t2 = 0xC4573C8;
                t22 = nlObjPutUseViewMatrix(t2);
                t0 = t22;
                t0 = t4;
                t23 = *(int *)((0xC2A6F60 + t0));
                t0 = t23;
                if (t0 == 1) {
                    t2 = 0xC45E598;
                    t24 = nlObjPutUseViewMatrix(t2);
                    t0 = t24;
                }
            }
            t2 = 0x1;
            t25 = nlPopMatrix(t2);
            t0 = t25;
            t2 = t4;
            t2 = (t2 + 0xC2A6EE8);
            t26 = *(int *)((t2 + 0x0));
            t1 = (t26 + 0x1);
            *(unsigned int *)((t2 + 0x0)) = (t26 + 0x1);
            if ((int)t1 > (int)0x32) {
                t2 = t4;
                t2 = (t2 + 0xC2A6F60);
                t27 = *(int *)((t2 + 0x0));
                t1 = t27;
                t1 = (t1 + 0x1);
                t0 = 0x2;
                t28 = (int)((int)t1 % (int)t0);
                t0 = t28;
                *(unsigned int *)((t2 + 0x0)) = t0;
                t0 = t4;
                *(unsigned int *)((0xC2A6EE8 + t0)) = 0x0;
            } else {
                t29 = t1;
            }
            t31 = t29;
            t34 = t2;
        } else {
            u35 = u5;
            u36 = u6;
        }
        u5 = u35;
        u6 = u36;
        t1 = t31;
        t3 = (t3 + 0x1);
        t2 = t34;
    }
    return u5;
}
