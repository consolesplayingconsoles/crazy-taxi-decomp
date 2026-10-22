/* Straight-line functions with calls and guards (batch gen_cf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Chat_PickSomeoneUp(void);
int FUN_0c0630a2(int, float);
int nlSqrt(int, int);
int FUN_0c158860(int, int, int);
int ResetFadeColor(void);
int SetColliObj(int, int);
extern void _builtin_prefetch(void *);
int nlAddVector(int, int);
float nlLength(int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlScaleVector(int, int, float);
int pfColor(int, int, int, int);
int pfLocate(float, float);
int pfPutSEGALogo(void);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);
int set_event(int, int);
int FUN_0c062f84(void);
int FUN_0c062d26(void);
int Put_Adv_Rating(void);
void FUN_0c038a00(int a4);
int FUN_0c080ae0(int a4, int a5, int a6);
int FUN_0c022410(int a4);

int FUN_0c062f84(void)
{
    *(unsigned int *)0xC2AD1D0 = 0xC0D44D8;
    *(unsigned int *)0xC2AD1D4 = 0xC0D44E0;
    FUN_0c0630a2(0xC8D5798, 14.0f);
    *(float *)0xC2AD0F8 = (1.0f + 1.0f);
    return 0xF8;
}

int FUN_0c062d26(void)
{
    int t0;

    t0 = *(int *)0xC2AD018;
    if (t0 != 0) {
        if (t0 == 1) {
            FUN_0c0630a2(0xC8E3D50, 0.0f);
        }
    } else {
        FUN_0c0630a2(0xC8D62BC, 0.0f);
    }
    *(float *)0xC2AD0F8 = 10.0f;
    *(unsigned int *)0xC2AD1D0 = 0xC0D44D8;
    *(unsigned int *)0xC2AD1D4 = 0xC0D44E0;
    return Chat_PickSomeoneUp();
}

int Put_Adv_Rating(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    float u9;
    float u13;
    float u17;
    int t25;
    int stk[9] = {0};

    t0 = *(signed char *)0xC0D0AC6;
    *(unsigned char *)((((int)stk + 4) + 0x0)) = t0;
    t1 = *(signed char *)0xC0D0AC7;
    *(unsigned char *)((((int)stk + 4) + 0x1)) = t1;
    t2 = *(signed char *)0xC0D0AC8;
    *(unsigned char *)((((int)stk + 4) + 0x2)) = t2;
    t3 = *(signed char *)0xC0D0AC9;
    *(unsigned char *)((((int)stk + 4) + 0x3)) = t3;
    t4 = *(signed char *)0xC0D0ACA;
    *(unsigned char *)((((int)stk + 4) + 0x4)) = t4;
    t5 = *(signed char *)0xC0D0ACB;
    *(unsigned char *)((((int)stk + 4) + 0x5)) = t5;
    pfSetFont(0x1);
    pfColor(0xFF00FF00, 0xFF00FF00, 0xFF00FF00, 0xFF00FF00);
    pfSize(1.0f, 1.0f);
    u9 = *(float *)0xC2A96D4;
    pfLocate(u9, 70.0f);
    pfPuts(0xC0D0A54);
    pfSize(1.0f, 1.0f);
    u13 = *(float *)0xC2A96D8;
    pfLocate(u13, 200.0f);
    pfPuts(0xC0D0A70);
    pfSize(1.5f, 1.5f);
    u17 = *(float *)0xC2A96DC;
    pfLocate(u17, 250.0f);
    pfPuts(0xC0D0A88);
    pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
    pfSize(1.0f, 1.0f);
    pfLocate(239.0f, 386.0f);
    pfPutSEGALogo();
    nlObjPutSetFadeColor(0.0f, 0.0f, 1.0f);
    t25 = ResetFadeColor();
    return t25;
}

void FUN_0c038a00(int a4)
{
    float t0;
    float u1;
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
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t36;
    int t37;
    int t41;
    int t42;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t81;
    int t82;
    int t86;
    int t87;
    int stk[7] = {0};

    t0 = nlLength((a4 + 0xC), (a4 + 0x58));
    if (!(t0 > (1.0f + 1.0f))) {
        u1 = *(float *)((a4 + 0x40));
        if (0.699999988f > u1) {
            t2 = *(int *)(((a4 + 0xC) + 0x8));
            *(unsigned int *)(((a4 + 0x58) + 0x8)) = t2;
            t3 = *(int *)(((a4 + 0xC) + 0x4));
            *(unsigned int *)(((a4 + 0x58) + 0x4)) = t3;
            t4 = *(int *)(((a4 + 0xC) + 0x0));
            *(unsigned int *)(((a4 + 0x58) + 0x0)) = t4;
            t5 = set_event(0x84, 0xC0385AC);
            if (t5 != 0) {
                t6 = *(int *)((a4 + 0x6C));
                *(unsigned int *)(((t5 + 0x14) + 0x6C)) = t6;
                t7 = *(int *)((a4 + 0x68));
                *(unsigned int *)(((t5 + 0x14) + 0x68)) = t7;
                t8 = *(int *)((a4 + 0x64));
                *(unsigned int *)(((t5 + 0x14) + 0x64)) = t8;
                t9 = *(int *)((a4 + 0x60));
                *(unsigned int *)(((t5 + 0x14) + 0x60)) = t9;
                t10 = *(int *)((a4 + 0x5C));
                *(unsigned int *)(((t5 + 0x14) + 0x5C)) = t10;
                t11 = *(int *)((a4 + 0x58));
                *(unsigned int *)(((t5 + 0x14) + 0x58)) = t11;
                t12 = *(int *)((a4 + 0x54));
                *(unsigned int *)(((t5 + 0x14) + 0x54)) = t12;
                t13 = *(int *)((a4 + 0x50));
                *(unsigned int *)(((t5 + 0x14) + 0x50)) = t13;
                t14 = *(int *)((a4 + 0x4C));
                *(unsigned int *)(((t5 + 0x14) + 0x4C)) = t14;
                t15 = *(int *)((a4 + 0x48));
                *(unsigned int *)(((t5 + 0x14) + 0x48)) = t15;
                t16 = *(int *)((a4 + 0x44));
                *(unsigned int *)(((t5 + 0x14) + 0x44)) = t16;
                t17 = *(int *)((a4 + 0x40));
                *(unsigned int *)(((t5 + 0x14) + 0x40)) = t17;
                t18 = *(int *)((a4 + 0x3C));
                *(unsigned int *)(((t5 + 0x14) + 0x3C)) = t18;
                t19 = *(int *)((a4 + 0x38));
                *(unsigned int *)(((t5 + 0x14) + 0x38)) = t19;
                t20 = *(int *)((a4 + 0x34));
                *(unsigned int *)(((t5 + 0x14) + 0x34)) = t20;
                t21 = *(int *)((a4 + 0x30));
                *(unsigned int *)(((t5 + 0x14) + 0x30)) = t21;
                t22 = *(int *)((a4 + 0x2C));
                *(unsigned int *)(((t5 + 0x14) + 0x2C)) = t22;
                t23 = *(int *)((a4 + 0x28));
                *(unsigned int *)(((t5 + 0x14) + 0x28)) = t23;
                t24 = *(int *)((a4 + 0x24));
                *(unsigned int *)(((t5 + 0x14) + 0x24)) = t24;
                t25 = *(int *)((a4 + 0x20));
                *(unsigned int *)(((t5 + 0x14) + 0x20)) = t25;
                t26 = *(int *)((a4 + 0x1C));
                *(unsigned int *)(((t5 + 0x14) + 0x1C)) = t26;
                t27 = *(int *)((a4 + 0x18));
                *(unsigned int *)(((t5 + 0x14) + 0x18)) = t27;
                t28 = *(int *)((a4 + 0x14));
                *(unsigned int *)(((t5 + 0x14) + 0x14)) = t28;
                t29 = *(int *)((a4 + 0x10));
                *(unsigned int *)(((t5 + 0x14) + 0x10)) = t29;
                t30 = *(int *)((a4 + 0xC));
                *(unsigned int *)(((t5 + 0x14) + 0xC)) = t30;
                t31 = *(int *)((a4 + 0x8));
                *(unsigned int *)(((t5 + 0x14) + 0x8)) = t31;
                t32 = *(int *)((a4 + 0x4));
                *(unsigned int *)(((t5 + 0x14) + 0x4)) = t32;
                t33 = *(int *)((a4 + 0x0));
                *(unsigned int *)(((t5 + 0x14) + 0x0)) = t33;
                nlScaleVector(((int)stk + 4), ((t5 + 0x14) + 0x3C), -8.0f);
                nlAddVector((t5 + 0x14), ((int)stk + 4));
                *(unsigned int *)(((t5 + 0x14) + 0x28)) = ((t5 + 0x14) + 0x30);
                *(unsigned int *)(((t5 + 0x14) + 0x54)) = 0xC0EDC08;
                t36 = *(int *)0xC0EE1BC;
                t37 = *(int *)((t36 + 0x0));
                *(unsigned int *)(((t5 + 0x14) + 0x64)) = t37;
                SetColliObj((t5 + 0x14), 0x10);
                nlScaleVector(((int)stk + 4), (a4 + 0x3C), 11.0f);
                nlAddVector(a4, ((int)stk + 4));
                *(unsigned int *)((a4 + 0x54)) = 0xC0EDCBC;
                t41 = *(int *)0xC0EE1D0;
                t42 = *(int *)((t41 + 0x0));
                *(unsigned int *)((a4 + 0x64)) = t42;
            }
        } else {
            t44 = *(int *)(((a4 + 0xC) + 0x8));
            *(unsigned int *)(((a4 + 0x58) + 0x8)) = t44;
            t45 = *(int *)(((a4 + 0xC) + 0x4));
            *(unsigned int *)(((a4 + 0x58) + 0x4)) = t45;
            t46 = *(int *)(((a4 + 0xC) + 0x0));
            *(unsigned int *)(((a4 + 0x58) + 0x0)) = t46;
        }
    } else {
        t47 = *(int *)(((a4 + 0xC) + 0x8));
        *(unsigned int *)(((a4 + 0x58) + 0x8)) = t47;
        t48 = *(int *)(((a4 + 0xC) + 0x4));
        *(unsigned int *)(((a4 + 0x58) + 0x4)) = t48;
        t49 = *(int *)(((a4 + 0xC) + 0x0));
        *(unsigned int *)(((a4 + 0x58) + 0x0)) = t49;
        t50 = set_event(0x84, 0xC0385AC);
        if (t50 != 0) {
            t51 = *(int *)((a4 + 0x6C));
            *(unsigned int *)(((t50 + 0x14) + 0x6C)) = t51;
            t52 = *(int *)((a4 + 0x68));
            *(unsigned int *)(((t50 + 0x14) + 0x68)) = t52;
            t53 = *(int *)((a4 + 0x64));
            *(unsigned int *)(((t50 + 0x14) + 0x64)) = t53;
            t54 = *(int *)((a4 + 0x60));
            *(unsigned int *)(((t50 + 0x14) + 0x60)) = t54;
            t55 = *(int *)((a4 + 0x5C));
            *(unsigned int *)(((t50 + 0x14) + 0x5C)) = t55;
            t56 = *(int *)((a4 + 0x58));
            *(unsigned int *)(((t50 + 0x14) + 0x58)) = t56;
            t57 = *(int *)((a4 + 0x54));
            *(unsigned int *)(((t50 + 0x14) + 0x54)) = t57;
            t58 = *(int *)((a4 + 0x50));
            *(unsigned int *)(((t50 + 0x14) + 0x50)) = t58;
            t59 = *(int *)((a4 + 0x4C));
            *(unsigned int *)(((t50 + 0x14) + 0x4C)) = t59;
            t60 = *(int *)((a4 + 0x48));
            *(unsigned int *)(((t50 + 0x14) + 0x48)) = t60;
            t61 = *(int *)((a4 + 0x44));
            *(unsigned int *)(((t50 + 0x14) + 0x44)) = t61;
            t62 = *(int *)((a4 + 0x40));
            *(unsigned int *)(((t50 + 0x14) + 0x40)) = t62;
            t63 = *(int *)((a4 + 0x3C));
            *(unsigned int *)(((t50 + 0x14) + 0x3C)) = t63;
            t64 = *(int *)((a4 + 0x38));
            *(unsigned int *)(((t50 + 0x14) + 0x38)) = t64;
            t65 = *(int *)((a4 + 0x34));
            *(unsigned int *)(((t50 + 0x14) + 0x34)) = t65;
            t66 = *(int *)((a4 + 0x30));
            *(unsigned int *)(((t50 + 0x14) + 0x30)) = t66;
            t67 = *(int *)((a4 + 0x2C));
            *(unsigned int *)(((t50 + 0x14) + 0x2C)) = t67;
            t68 = *(int *)((a4 + 0x28));
            *(unsigned int *)(((t50 + 0x14) + 0x28)) = t68;
            t69 = *(int *)((a4 + 0x24));
            *(unsigned int *)(((t50 + 0x14) + 0x24)) = t69;
            t70 = *(int *)((a4 + 0x20));
            *(unsigned int *)(((t50 + 0x14) + 0x20)) = t70;
            t71 = *(int *)((a4 + 0x1C));
            *(unsigned int *)(((t50 + 0x14) + 0x1C)) = t71;
            t72 = *(int *)((a4 + 0x18));
            *(unsigned int *)(((t50 + 0x14) + 0x18)) = t72;
            t73 = *(int *)((a4 + 0x14));
            *(unsigned int *)(((t50 + 0x14) + 0x14)) = t73;
            t74 = *(int *)((a4 + 0x10));
            *(unsigned int *)(((t50 + 0x14) + 0x10)) = t74;
            t75 = *(int *)((a4 + 0xC));
            *(unsigned int *)(((t50 + 0x14) + 0xC)) = t75;
            t76 = *(int *)((a4 + 0x8));
            *(unsigned int *)(((t50 + 0x14) + 0x8)) = t76;
            t77 = *(int *)((a4 + 0x4));
            *(unsigned int *)(((t50 + 0x14) + 0x4)) = t77;
            t78 = *(int *)((a4 + 0x0));
            *(unsigned int *)(((t50 + 0x14) + 0x0)) = t78;
            nlScaleVector(((int)stk + 4), ((t50 + 0x14) + 0x3C), -8.0f);
            nlAddVector((t50 + 0x14), ((int)stk + 4));
            *(unsigned int *)(((t50 + 0x14) + 0x28)) = ((t50 + 0x14) + 0x30);
            *(unsigned int *)(((t50 + 0x14) + 0x54)) = 0xC0EDC08;
            t81 = *(int *)0xC0EE1BC;
            t82 = *(int *)((t81 + 0x0));
            *(unsigned int *)(((t50 + 0x14) + 0x64)) = t82;
            SetColliObj((t50 + 0x14), 0x10);
            nlScaleVector(((int)stk + 4), (a4 + 0x3C), 11.0f);
            nlAddVector(a4, ((int)stk + 4));
            *(unsigned int *)((a4 + 0x54)) = 0xC0EDCBC;
            t86 = *(int *)0xC0EE1D0;
            t87 = *(int *)((t86 + 0x0));
            *(unsigned int *)((a4 + 0x64)) = t87;
        }
    }
}

int FUN_0c080ae0(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t9;
    int t8;
    int t10;
    int t11;
    int t12;
    int t36;
    int t13;
    int t14;
    int t15;
    int t16;
    float u18;
    float u19;
    float u20;
    float u21;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t32;
    int t33;
    int t34;
    int t35;
    float u23;
    int stk[20] = {0};

    t0 = *(int *)0xC2AF370;
    t1 = *(int *)((t0 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = (t1 << 2);
    t2 = *(int *)0xC2AF368;
    t3 = *(int *)((t0 + 0x4));
    t4 = *(int *)(((t1 << 2) + t2));
    *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    *(unsigned int *)(((int)stk + 4)) = ((t4 & 0x3FFFFFF) | 0xE0000000);
    t5 = *(int *)0xC2AF36C;
    FUN_0c158860(((t4 & 0x3FFFFFF) | 0xE0000000), t5, t3);
    t7 = *(int *)(((int)stk + 4));
    _builtin_prefetch((void *)t7);
    t9 = t7;
    if (t3 == 64) {
        t8 = *(int *)(((int)stk + 4));
        _builtin_prefetch((void *)(t8 + 0x20));
        t9 = (t8 + 0x20);
    }
    t10 = *(int *)0xC2AF368;
    t11 = *(int *)(((int)stk + 8));
    t12 = *(int *)((t11 + t10));
    *(unsigned int *)((t11 + t10)) = (t12 + (((unsigned int)t3 >> 2) << 2));
    *(unsigned int *)(((int)stk + 12)) = 0xE0000000;
    *(unsigned int *)(((int)stk + 8)) = ((((a5 << 2) << 1) + 0xC0D6954) + 0x4);
    t36 = t10;
    if ((int)a4 > 0) {
        t13 = t9;
        t14 = a4;
        t15 = a6;
        do {
            if (t14 == 1) {
                t13 = 0xF0000000;
                *(unsigned int *)(((int)stk + 12)) = t13;
            }
            t16 = *(int *)0xC2B7944;
            if (t16 != 0) {
                nlSqrt(t15, (((int)stk + 4) + 0xC));
                u18 = *(float *)(((int)stk + 24));
                u23 = u18;
            } else {
                u19 = *(float *)((t15 + 0x0));
                *(float *)(((int)stk + 16)) = u19;
                u20 = *(float *)((t15 + 0x4));
                *(float *)(((int)stk + 20)) = u20;
                u21 = *(float *)((t15 + 0x8));
                u23 = u21;
            }
            t13 = 0xFF000038;
            *(float *)(((int)stk + 24)) = (1.0f / u23);
            t24 = *(int *)(((int)stk + 8));
            t25 = *(int *)((t24 + 0x0));
            t26 = *(int *)((t15 + (t25 << 2)));
            *(unsigned int *)(((int)stk + 28)) = t26;
            t27 = *(int *)0xC2AF370;
            t28 = *(int *)((t27 + 0x0));
            *(unsigned int *)(((int)stk + 4)) = (t28 << 2);
            t29 = *(int *)0xC2AF368;
            t30 = *(int *)(((t28 << 2) + t29));
            *(unsigned int *)((t13 + 0x0)) = ((unsigned int)((unsigned int)t30 >> 16) >> 8);
            *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t30 >> 16) >> 8);
            FUN_0c158860(((t30 & 0x3FFFFFF) | 0xE0000000), (((int)stk + 4) + 0x8), 0x20);
            _builtin_prefetch((void *)((t30 & 0x3FFFFFF) | 0xE0000000));
            t32 = *(int *)0xC2AF368;
            t14 = (t14 - 1);
            t33 = *(int *)(((int)stk + 4));
            t34 = *(int *)((t33 + t32));
            t13 = t34;
            t13 = (t13 + 0x20);
            *(unsigned int *)((t33 + t32)) = t13;
            t35 = *(int *)(((((a5 << 2) << 1) + 0xC0D6954) + 0x0));
            t15 = (t15 + (t35 << 2));
        } while ((int)t14 > 0);
        t36 = t32;
    }
    return t36;
}

int FUN_0c022410(int a4)
{
    float u0;
    float u1;
    float u2;
    float u3;
    float u4;
    float u5;
    float u6;
    float u7;
    int t8;
    int t9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t76;
    int t77;
    int t78;
    int t79;
    int t85;
    int t86;
    int t87;
    int t88;
    int t98;
    float u99;
    float u100;
    float u101;
    float u102;
    float u103;
    float u104;
    float u105;
    float u106;
    int t124;
    float u112;
    float u113;
    float u117;
    float u114;
    float u121;
    float u118;
    int t122;
    float u123;
    float u17;
    float u18;
    float u110;
    float u111;

    u0 = *(float *)(((0x84 + (0x1A0 + a4)) + 0x44));
    u1 = *(float *)(((0x1A0 + a4) + 0x44));
    u2 = *(float *)((a4 + 0x138));
    u3 = *(float *)((a4 + 0x130));
    u4 = *(float *)(((0x18C + (0x1A0 + a4)) + 0x44));
    u5 = *(float *)(((0x108 + (0x1A0 + a4)) + 0x44));
    u6 = *(float *)((a4 + 0x134));
    u7 = *(float *)((a4 + 0x14C));
    t8 = *(short *)((a4 + 0x198));
    *(unsigned short *)((a4 + 0x198)) = (int)((float)t8 + ((((((u0 + u1) * (u3 + u2)) - ((u4 + u5) * (u6 - u2))) * u7) / 6.28317976f) * 65535.0f));
    t9 = *(int *)((a4 + 0x3B0));
    if (t9 == 4) {
        u10 = *(float *)((a4 + 0x194));
        u11 = (((-u10) + 1.0f) * 0.099999994f);
        if ((((-u10) + 1.0f) * 0.099999994f) > 0.049999997f) {
            u11 = 0.049999997f;
        }
        u12 = u11;
        if (0.0f > u11) {
            u12 = 0.0f;
        }
        u17 = 0.829999983f;
        u18 = u12;
    } else {
        u13 = *(float *)((a4 + 0x194));
        u14 = (((-u13) + 1.0f) * 0.099999994f);
        if ((((-u13) + 1.0f) * 0.099999994f) > 0.0799999982f) {
            u14 = 0.0799999982f;
        }
        u15 = u14;
        if (0.0f > u14) {
            u15 = 0.0f;
        }
        u17 = 0.729999959f;
        u18 = u15;
    }
    t20 = *(short *)((a4 + 0x198));
    *(unsigned short *)((a4 + 0x198)) = (int)((float)t20 * (u18 + u17));
    t21 = *(short *)((a4 + 0x198));
    *(float *)((a4 + 0x4C)) = ((float)t21 * 9.58737946e-05f);
    t22 = *(int *)0xC1EE234;
    if (t22 == 1) {
        t23 = *(int *)((a4 + 0x54));
        if (t23 != 0) {
            t24 = *(int *)((a4 + 0x54));
            if (t24 == 3) {
                *(unsigned short *)((a4 + 0x198)) = 0x0;
                *(unsigned short *)((a4 + 0xF8)) = 0x0;
            }
        } else {
            *(unsigned short *)((a4 + 0x198)) = 0x0;
            *(unsigned short *)((a4 + 0xF8)) = 0x0;
        }
    }
    t32 = *(short *)((a4 + 0xF8));
    t33 = *(short *)((a4 + 0x198));
    t34 = *(short *)(((0x84 + a4) + 0x2));
    *(unsigned short *)(((0x84 + a4) + 0x2)) = (t34 + (t33 + t32));
    t35 = *(short *)(((0x84 + a4) + 0x0));
    t36 = *(short *)((a4 + 0xF6));
    t37 = *(short *)((a4 + 0x19C));
    *(unsigned short *)(((0x84 + a4) + 0x0)) = (t35 + (t37 + t36));
    t38 = *(short *)((a4 + 0xFA));
    t39 = *(short *)((a4 + 0x19A));
    t40 = *(short *)(((0x84 + a4) + 0x4));
    *(unsigned short *)(((0x84 + a4) + 0x4)) = (t40 + (t39 + t38));
    t41 = *(signed char *)0xC08ADAC;
    *(unsigned char *)(((0xF6 + a4) + 0x0)) = t41;
    t42 = *(signed char *)0xC08ADAD;
    *(unsigned char *)(((0xF6 + a4) + 0x1)) = t42;
    t43 = *(signed char *)0xC08ADAE;
    *(unsigned char *)(((0xF6 + a4) + 0x2)) = t43;
    t44 = *(signed char *)0xC08ADAF;
    *(unsigned char *)(((0xF6 + a4) + 0x3)) = t44;
    t45 = *(signed char *)0xC08ADB0;
    *(unsigned char *)(((0xF6 + a4) + 0x4)) = t45;
    t46 = *(signed char *)0xC08ADB1;
    *(unsigned char *)(((0xF6 + a4) + 0x5)) = t46;
    t47 = *(short *)(((0x84 + a4) + 0x0));
    if ((int)t47 > (int)0x2100) {
        *(unsigned short *)(((0x84 + a4) + 0x0)) = 0x2100;
        t48 = *(short *)((a4 + 0x19C));
        *(unsigned short *)((a4 + 0x19C)) = ((int)(-(((float)t48 < 0.0f ? -(float)t48 : (float)t48) * 0.699999988f)) - 8);
        t49 = *(short *)((a4 + 0xF6));
        *(unsigned short *)((a4 + 0xF6)) = ((int)(-(((float)(unsigned short)t49 < 0.0f ? -(float)(unsigned short)t49 : (float)(unsigned short)t49) * 0.699999988f)) + 0xFFF8);
    } else {
        t50 = *(short *)(((0x84 + a4) + 0x0));
        if ((int)t50 < (int)0xFFFFDF00) {
            *(unsigned short *)(((0x84 + a4) + 0x0)) = 0xDF00;
            t51 = *(short *)((a4 + 0x19C));
            *(unsigned short *)((a4 + 0x19C)) = ((int)(((float)t51 < 0.0f ? -(float)t51 : (float)t51) * 0.699999988f) + 0x8);
            t52 = *(short *)((a4 + 0xF6));
            *(unsigned short *)((a4 + 0xF6)) = ((int)(((float)(unsigned short)t52 < 0.0f ? -(float)(unsigned short)t52 : (float)(unsigned short)t52) * 0.699999988f) + 0x8);
        }
    }
    t62 = *(short *)(((0x84 + a4) + 0x4));
    if ((int)t62 > (int)0x2700) {
        *(unsigned short *)(((0x84 + a4) + 0x4)) = 0x2700;
        t63 = *(short *)((a4 + 0x19A));
        *(unsigned short *)((a4 + 0x19A)) = ((int)(-(((float)t63 < 0.0f ? -(float)t63 : (float)t63) * 0.649999976f)) - 8);
        t64 = *(short *)((a4 + 0xFA));
        *(unsigned short *)((a4 + 0xFA)) = ((int)(-(((float)(unsigned short)t64 < 0.0f ? -(float)(unsigned short)t64 : (float)(unsigned short)t64) * 0.649999976f)) + 0xFFF8);
    } else {
        if ((int)t62 < (int)0xFFFFD900) {
            *(unsigned short *)(((0x84 + a4) + 0x4)) = 0xD900;
            t65 = *(short *)((a4 + 0x19A));
            *(unsigned short *)((a4 + 0x19A)) = ((int)(((float)t65 < 0.0f ? -(float)t65 : (float)t65) * 0.649999976f) + 0x8);
            t66 = *(short *)((a4 + 0xFA));
            *(unsigned short *)((a4 + 0xFA)) = ((int)(((float)(unsigned short)t66 < 0.0f ? -(float)(unsigned short)t66 : (float)(unsigned short)t66) * 0.649999976f) + 0x8);
        }
    }
    t76 = *(int *)0xC1EE234;
    if (t76 != 0) {
        t77 = *(short *)(((0x84 + a4) + 0x4));
        if ((int)t77 > (int)0x2000) {
            t78 = *(short *)((a4 + 0xFA));
            *(unsigned short *)((a4 + 0xFA)) = (t78 - 8);
        } else {
            if ((int)t77 < (int)0xFFFFE000) {
                t79 = *(short *)((a4 + 0xFA));
                *(unsigned short *)((a4 + 0xFA)) = (t79 + 0x8);
            }
        }
        t85 = *(short *)(((0x84 + a4) + 0x0));
        if ((int)t85 > (int)0x1C00) {
            t86 = *(short *)((a4 + 0xF6));
            *(unsigned short *)((a4 + 0xF6)) = (t86 - 8);
        } else {
            t87 = *(short *)(((0x84 + a4) + 0x0));
            if ((int)t87 < (int)0xFFFFE400) {
                t88 = *(short *)((a4 + 0xF6));
                *(unsigned short *)((a4 + 0xF6)) = (t88 + 0x8);
            }
        }
    }
    t98 = *(int *)((a4 + 0x3B0));
    if (t98 == 4) {
        u99 = *(float *)(((0x84 + (0x1A0 + a4)) + 0x50));
        u100 = *(float *)(((0x1A0 + a4) + 0x50));
        u101 = *(float *)(((0x108 + (0x1A0 + a4)) + 0x50));
        u102 = *(float *)(((0x18C + (0x1A0 + a4)) + 0x50));
        u110 = ((u99 + u100) * 0.779999971f);
        u111 = ((u102 + u101) * 0.779999971f);
    } else {
        u103 = *(float *)(((0x84 + (0x1A0 + a4)) + 0x50));
        u104 = *(float *)(((0x1A0 + a4) + 0x50));
        u105 = *(float *)(((0x18C + (0x1A0 + a4)) + 0x50));
        u106 = *(float *)(((0x108 + (0x1A0 + a4)) + 0x50));
        u110 = (u103 + u104);
        u111 = (u105 + u106);
    }
    t124 = 0x50;
    if ((u110 + u111) != 0.0f) {
        u112 = *(float *)((a4 + 0x15C));
        u113 = *(float *)((a4 + 0x128));
        u117 = ((((u112 * u112) * u113) * 2.14999986f) / (u110 + u111));
        if (!(0.0f > ((((u112 * u112) * u113) * 2.14999986f) / (u110 + u111)))) {
            u114 = ((((u112 * u112) * u113) * 2.14999986f) / (u110 + u111));
            if (75.0f > ((((u112 * u112) * u113) * 2.14999986f) / (u110 + u111))) {
                u114 = 75.0f;
            }
            u117 = u114;
        }
        u121 = u117;
        if (0.0f > u117) {
            u118 = u117;
            if (u117 > -75.0f) {
                u118 = -75.0f;
            }
            u121 = u118;
        }
        t122 = *(short *)((a4 + 0xF4));
        u123 = *(float *)(((0x15C + a4) + 0x0));
        *(unsigned short *)((a4 + 0xF4)) = (t122 + (int)((u123 / (u121 * 6.28317976f)) * 65535.0f));
        t124 = 0xF4;
    }
    return t124;
}
