/* Straight-line functions with calls and guards (batch gen_ei): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c05778a(int, int, float, float);
int FUN_0c074680(void);
int FUN_0c0771b0(int, int);
int FUN_0c089e00(int);
int GetCollision2D(int, float);
int GetCollisionFirst(int, int);
float nlInnerProduct(int, int);
int nlObjPut(int);
int nlObjPutSetFadeColor(float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAZ(int);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int Put_SEGA_LOGO2(void);
int psgPickExitSide(int a4);

int Put_SEGA_LOGO2(void)
{
    int t2;
    float u5;
    float u6;
    int t9;
    float u14;
    int t15;
    int t16;
    int t19;
    int t28;
    int t30;
    int t32;
    int t34;
    float u39;
    float u40;
    int t45;
    int t65;
    int t20;
    int t17;
    int stk[42] = {0};

    nlPushMatrix(0x0);
    nlTranslate(0.0f, 0.0f, -50.0f);
    t2 = *(int *)0xC2A93F4;
    if ((int)t2 >= (int)0x78) {
        nlObjPut(0xC464170);
        *(unsigned int *)0xC2A9300 = 0x200A;
        nlObjPutSetFadeColor(0.0f, 0.0f, 0.0f);
        u5 = *(float *)0xC058FB0;
        u6 = *(float *)0xC058FB4;
        FUN_0c05778a(0xC2A92CC, 0xED, u6, u5);
        nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    } else {
        t9 = 0x0;
        for (;;) {
            nlPushUnitMatrix();
            nlRotateAZ((t9 * 0x1999));
            *(unsigned int *)(((int)stk + 4)) = (signed char)(((t9 << 1) + t9) << 2);
            FUN_0c0771b0(0xC2A93F8, ((signed char)(((t9 << 1) + t9) << 2) + (((int)stk + 4) + 0x4)));
            nlPopMatrix(0x1);
            u14 = *(float *)0xC2A93FC;
            if (u14 > 0.0f) {
                if ((int)t9 >= (int)0x3) {
                    if ((int)t9 > (int)0x7) {
                        t15 = *(short *)((((unsigned char)(((t9 << 2) + t9) << 2) + 0xC2A932C) + 0xC));
                        t17 = (t15 - 0x222);
                    } else {
                        t16 = *(short *)((((unsigned char)(((t9 << 2) + t9) << 2) + 0xC2A932C) + 0xC));
                        t17 = (t16 + 0x222);
                    }
                    t20 = t17;
                } else {
                    t19 = *(short *)((((unsigned char)(((t9 << 2) + t9) << 2) + 0xC2A932C) + 0xC));
                    t20 = (t19 - 0x222);
                }
                *(unsigned short *)((((unsigned char)(((t9 << 2) + t9) << 2) + 0xC2A932C) + 0xC)) = t20;
            }
            nlPushMatrix(0x0);
            t28 = *(int *)(((int)stk + 4));
            nlTranslateV((t28 + (((int)stk + 4) + 0x4)));
            t30 = *(short *)((((unsigned char)(((t9 << 2) + t9) << 2) + 0xC2A932C) + 0xC));
            nlRotateAX((unsigned short)t30);
            t32 = *(int *)((((t9 << 2) + 0xC130D58) + 0x0));
            FUN_0c089e00(t32);
            t34 = *(int *)((((t9 << 2) + 0xC130D58) + 0x0));
            nlObjPut(t34);
            nlPopMatrix(0x1);
            t9 = (t9 + 0x1);
            if ((int)t9 >= (int)0xA) {
                break;
            }
        }
        u39 = *(float *)0xC2A93FC;
        if (u39 > 0.0f) {
            u40 = *(float *)0xC2A93FC;
            *(float *)0xC2A93FC = (u40 - 0.299999982f);
        }
        t45 = *(int *)0xC2A93F4;
        *(unsigned int *)0xC2A93F4 = (t45 + 0x1);
    }
    FUN_0c074680();
    t65 = nlPopMatrix(0x1);
    return t65;
}

int psgPickExitSide(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t9;
    int t10;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    float t20;
    int t21;
    int t23;
    int t24;
    int t31;
    int t26;
    int t27;
    int t28;
    int t34;
    int t35;
    int t43;
    float u36;
    int t38;
    int t39;
    int t40;
    int t47;
    int stk[15] = {0};

    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = *(int *)0xC0D606C;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x8)) = t0;
    t1 = *(int *)0xC0D6068;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x4)) = t1;
    t2 = *(int *)0xC0D6064;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x0)) = t2;
    t3 = *(int *)0xC0D6078;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x8)) = t3;
    t4 = *(int *)0xC0D6074;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x4)) = t4;
    t5 = *(int *)0xC0D6070;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x0)) = t5;
    nlPushMatrix(0xC179180);
    FUN_0c0771b0((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x20));
    FUN_0c0771b0((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x14));
    *(unsigned int *)(((int)stk + 8)) = 0xC2AD204;
    t9 = *(int *)(((int)stk + 4));
    t10 = *(short *)((t9 + 0x140));
    nlSubVector3op((((int)stk + 4) + 0x8), ((short)(((t10 << 1) + t10) << 2) + 0xC13EEE8), 0xC2AD204);
    t12 = *(int *)0xC1EE210;
    t13 = *(int *)0xC1EE214;
    t14 = *(int *)((0xC13F3B0 + (t12 << 2)));
    t15 = *(int *)(((int)stk + 4));
    t16 = *(int *)(((t13 << 2) + t14));
    t17 = *(int *)(((int)stk + 8));
    t18 = *(int *)((t15 + 0x140));
    nlSubVector3op((((int)stk + 4) + 0x8), (t16 + (((t18 << 1) + t18) << 2)), t17);
    t20 = nlInnerProduct((((int)stk + 4) + 0x8), 0xC2AD1E0);
    t21 = 0x0;
    if (!(0.0f > t20)) {
        t21 = 0x1;
    }
    if (t21 == 1) {
        t23 = GetCollision2D((((int)stk + 4) + 0x20), 0.0f);
        t24 = *(int *)((t23 + 0x1C));
        t31 = (((t21 == 0)) ? 1 : 0);
        if (t24 != -1) {
            nlScaleVector((((int)stk + 4) + 0x8), 0xC2AD1E0, 20.0f);
            t26 = GetCollisionFirst((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x8));
            t27 = *(int *)((t26 + 0x1C));
            t28 = t21;
            if (t27 != -1) {
                t28 = (((t21 == 0)) ? 1 : 0);
            }
            t31 = t28;
        }
        t47 = t31;
    } else {
        t34 = GetCollision2D((((int)stk + 4) + 0x14), 0.0f);
        t35 = *(int *)((t34 + 0x1C));
        t43 = (((t21 == 0)) ? 1 : 0);
        if (t35 != -1) {
            u36 = *(float *)0xC070F44;
            nlScaleVector((((int)stk + 4) + 0x8), 0xC2AD1E0, u36);
            t38 = GetCollisionFirst((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
            t39 = *(int *)((t38 + 0x1C));
            t40 = t21;
            if (t39 != -1) {
                t40 = (((t21 == 0)) ? 1 : 0);
            }
            t43 = t40;
        }
        t47 = t43;
    }
    nlPopMatrix(0x1);
    return t47;
}
